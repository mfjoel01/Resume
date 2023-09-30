#include "EBookProduct.hpp"

EBookProduct::EBookProduct() {
  // default constructor
}

EBookProduct::EBookProduct(std::string aProdName, double aPrice,
                           NameType anAuthor, int aPageNum)
    : BookProduct(aProdName, aPrice, anAuthor, aPageNum) {}

std::string EBookProduct::getProdTypeStr() { return "E-Book\n"; }
