#pragma once
#include <string>
#include <vector>

class Product
{
public:
  Product(const std::string);

  bool getIsListed() const;
  std::string getName() const;
  double getPrice() const;
  int getQuantity() const;
  unsigned long long int getUPC() const;

  void setIsListed(const bool);
  void setName(const std::string);
  void setPrice(const double);
  void setQuantity(const int);
  void setUPC(const unsigned long long int);

private:
  bool m_isListed;
  std::string m_name;
  double m_price;
  int m_quantity;
  std::vector<int> m_ratings;
  unsigned long long int m_upc;
};

