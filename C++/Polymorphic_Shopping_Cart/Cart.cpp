#include "Cart.hpp"

Cart::Cart() {}//default constructor

Cart::Cart(NameType theOwner) : owner(theOwner) {}
void Cart::setOwner(NameType theOwner) { owner = theOwner; }
NameType Cart::getOwner() { return owner; }

bool Cart::addItem(Product *theProduct) {
  if (itemNum <= MAX_ITEMS) {
    purchasedItems[itemNum] = theProduct;
    itemNum++;
    return true;
  } else {
    return false;
  }
}
void Cart::displayCart() {
  double total = 0;
  for (int i = 0; i < itemNum; i++) {
    purchasedItems[i]->displayProdInfo();
    total += purchasedItems[i]->getPrice();
    std::cout << "\n\n";
  }
  std::cout << "Cart Owner: " << getOwner().First << " " << getOwner().Last
            << "\nNumber of items: " << itemNum << "\nTotal Price: $" << total
            << "\nAverage cost: $" << total / itemNum << "\n";
}

bool Cart::removeItem(prod_id_t theProductID) {
  if ((itemNum > 0) && (itemNum < MAX_ITEMS+1)) {
    // delete purchasedItems[theProductID] ;
    itemNum--;
    // *purchasedItems[theProductID]=NULL;
    return true;
  } else {
    return false;
  }
}
