#include "product.h"

Product::Product(const std::string p_name)
{
  setIsListed(false);
  setName(p_name);
  setPrice(0);
  setQuantity(0);
  setUPC(0);
}

bool Product::getIsListed() const
{
  return m_isListed;
}

std::string Product::getName() const
{
  return m_name;
}

double Product::getPrice() const
{
  return m_price;
}

int Product::getQuantity() const
{
  return m_quantity;
}

unsigned long long int Product::getUPC() const
{
  return m_upc;
}

void Product::setIsListed(const bool p_isListed)
{
  m_isListed = p_isListed;
}

void Product::setName(const std::string p_name)
{
  if (p_name.empty())
  {
    throw "name is required";
  }
  m_name = p_name;
}

void Product::setPrice(const double p_price)
{
  if (p_price < 0)
  {
    throw "price must be positive";
  }
  m_price = p_price;
}

void Product::setQuantity(const int p_quantity)
{
  if (p_quantity < 0)
  {
    throw "quantity must be positive";
  }
  m_quantity = p_quantity;
}

void Product::setUPC(const unsigned long long int p_upc)
{
  if (p_upc > 999999999999)
  {
    throw "upc must be between 0 and 999999999999";
  }
  m_upc = p_upc;
}
