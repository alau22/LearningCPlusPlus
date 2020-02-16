#pragma once
#include <string>
#include <vector>
#include "UPC.h"

enum class Category
{
  None = '0',
  Food = 'F',
  Music = 'M'
};

class Product
{

public:
  Product();
  ~Product();

  UPC* getUPC();
  std::string getName();
  int getQuantity();
  double getPrice();
  bool getActive();
  Category getCategory();

  void setName(std::string p_name);
  void setQuantity(int p_quantity);
  void setPrice(double p_price);
  void setActive(bool p_active);
  void setCategory(Category p_category);

private:
  double m_price;
  int m_quantity;
  bool m_active;
  std::string m_name;
  std::vector<int> m_ratings;
  Category m_category;
  UPC* m_upc;
};
