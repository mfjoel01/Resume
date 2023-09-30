#include "Product.hpp"
#include <iostream>
#include <string>

prod_id_t Product::NewID = 0;
Product::Product() {
  // empty constructor
}
Product::~Product() // prototype destructor
{}
Product::Product(std::string aProdName, double aPrice)
    : productName(aProdName), price(aPrice) {
  productID = createNewID();
}

prod_id_t Product::getProdID() { return productID; }

std::string Product::getProdName() { return productName; }

double Product::getPrice() { return price; }
float Product::getReviewRate() { return reviewRate; }

void Product::setProdID(prod_id_t theID) { productID = theID; }

void Product::setProdName(std::string theName) { productName = theName; }

void Product::setPrice(double thePrice) { price = thePrice; }

void Product::setReviewRate(float theRate) { reviewRate = theRate; }

void Product::displayProdInfo() {
  std::cout << "Product ID: " << getProdID() << "\nName: " << getProdName()
            << "\nPrice: $" << getPrice() << "\nRating: " << getReviewRate()
            << "\nProduct Type: ";
  std::cout << getProdTypeStr();
  displayContentsInfo();
}
prod_id_t Product::createNewID() {
  NewID++;
  return NewID;
}
