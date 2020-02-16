#include "ZFraction.h"
#include <ostream>
using namespace std;

ZFraction::ZFraction(int numerateur, int denominateur)
{
  m_numerateur = numerateur;
  m_denominateur = denominateur;
  reduire();
}

ZFraction& ZFraction::operator+=(const ZFraction& b)
{
  int denominateurCommun = m_denominateur * b.m_denominateur;
  int numerateurA = m_numerateur * b.m_denominateur;
  int numerateurB = b.m_numerateur * m_denominateur;

  m_numerateur = numerateurA + numerateurB;
  m_denominateur = denominateurCommun;
  reduire();
  return *this;
}

ZFraction operator+(ZFraction const& a, ZFraction const& b)
{
  ZFraction resultat(a);
  resultat += b;
  return resultat;
}

ZFraction& ZFraction::operator*=(const ZFraction& b)
{
  m_numerateur = m_numerateur * b.m_numerateur;
  m_denominateur = m_denominateur * b.m_denominateur;
  reduire();
  return *this;
}

ZFraction operator*(ZFraction const& a, ZFraction const& b)
{
  ZFraction resultat(a);
  resultat *= b;
  return resultat;
}

bool ZFraction::operator==(const ZFraction& b)
{
  if (m_numerateur == b.m_numerateur && m_denominateur == b.m_denominateur)
    return true;
  else
    return false;
}

bool ZFraction::operator>(const ZFraction& b)
{
  int numerateurA = m_numerateur * b.m_denominateur;
  int numerateurB = b.m_numerateur * m_denominateur;
  return (numerateurA > numerateurB);
}

ostream& operator<<(ostream& flux, ZFraction const& b)
{
  b.afficher(flux);
  return flux;
}

void ZFraction::afficher(ostream& flux) const
{
  flux << m_numerateur << "/" << m_denominateur;
}

void ZFraction::reduire()
{
  for (int i = m_numerateur * m_denominateur; i > 1; i--)
  {
    if ((m_numerateur % i == 0) && (m_denominateur % i == 0))
    {
      m_numerateur /= i;
      m_denominateur /= i;
    }
  }
}
