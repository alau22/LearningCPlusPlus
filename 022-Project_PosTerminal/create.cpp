#include <iostream>
#include <string>
#include "create.h"

using namespace std;

void create(map<long long, Product>& products)
{
  Product product;
  UPC* upc = product.getUPC();
  bool valid;

  valid = false;
  do
  {
    try
    {
      cout << "UPC: ";
      long long upcValue;
      cin >> upcValue;
      upc->setValue(upcValue);
      valid = true;
    }
    catch (string const& error)
    {
      cout << error << endl;
    }
  } while (!valid);

  valid = false;
  do
  {
    try
    {
      cout << "Name: ";
      string name;
      getline(cin, name);
      product.setName(name);
      valid = true;
    }
    catch (string const& error)
    {
      cout << error << endl;
    }
  } while (!valid);

  valid = false;
  do
  {
    try
    {
      cout << "Quantity: ";
      int quantity;
      cin >> quantity;
      product.setQuantity(quantity);
      valid = true;
    }
    catch (string const& error)
    {
      cout << error << endl;
    }
  } while (!valid);

  valid = false;
  do
  {
    try
    {
      cout << "Price: ";
      double price;
      cin >> price;
      product.setPrice(price);
      valid = true;
    }
    catch (string const& error)
    {
      cout << error << endl;
    }
  } while (!valid);

  valid = false;
  do
  {
    try
    {
      cout << "Category: ";
      char category;
      cin >> category;
      category = toupper(category);
      product.setCategory((Category)category);
      valid = true;
    }
    catch (string const& error)
    {
      cout << error << endl;
    }
  } while (!valid);

  cout << "Active: ";
  bool active;
  cin >> active;
  product.setActive(active);

  products[upc->getValue()]=product;
}
