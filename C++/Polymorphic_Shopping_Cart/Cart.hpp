#ifndef CART_HPP
#define CART_HPP


#include "Product.hpp"

class Cart 
{
  public:
  Cart();//default constructor
  Cart(NameType theOwner);
  static const int MAX_ITEMS= 7;
  Product *purchasedItems[MAX_ITEMS];

  void displayCart();
  bool addItem(Product *theProduct);
  void setOwner(NameType theOwner);
  NameType getOwner();
  bool removeItem(prod_id_t theProductID);



    
private:
NameType owner;
int itemNum=0;
};


//
#endif