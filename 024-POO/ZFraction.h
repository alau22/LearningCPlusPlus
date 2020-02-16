#pragma once
#include <ostream>

class ZFraction
{
public:
  ZFraction(int numerateur = 0, int denominateur = 1);
  ZFraction& operator+=(ZFraction const& b);
  ZFraction& operator*=(ZFraction const& b);
  bool operator==(ZFraction const& b);
  bool operator>(ZFraction const& b);
  void afficher(std::ostream& flux) const;

private:
  int m_numerateur;
  int m_denominateur;
  void reduire();
};

ZFraction operator+(ZFraction const& a, ZFraction const& b);
ZFraction operator*(ZFraction const& a, ZFraction const& b);
std::ostream &operator<<(std::ostream &flux, ZFraction const& b);
