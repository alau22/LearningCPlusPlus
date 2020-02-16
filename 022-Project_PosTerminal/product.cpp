#include "product.h"

using namespace std;

Product::Product()
{
  m_active = false;
  m_category = Category::None;
  m_price = 0;
  m_quantity = 0;
  m_upc = new UPC();
}
Product::~Product()
{
  delete m_upc;
}

UPC* Product::getUPC()
{
  return m_upc;
}

std::string Product::getName()
{
  return m_name;
}

int Product::getQuantity()
{
  return m_quantity;
}

double Product::getPrice()
{
  return m_price;
}

bool Product::getActive()
{
  return m_active;
}

Category Product::getCategory()
{
  return m_category;
}

void Product::setName(std::string p_name)
{
  if (p_name.empty() || p_name.length() > 100)
  {
    throw string("Invalid name");
  }
  m_name = p_name;
}

void Product::setQuantity(int p_quantity)
{
  if (p_quantity<0)
  {
    throw string("Invalid quantity");
  }
  m_quantity = p_quantity;
}

void Product::setPrice(double p_price)
{
  if (p_price <= 0)
  {
    throw string("Invalid price");
  }
  m_price = p_price;
}

void Product::setActive(bool p_active)
{
  m_active = p_active;
}

void Product::setCategory(Category p_category)
{
  m_category = p_category;
}
