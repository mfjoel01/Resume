#include "PaperBookProduct.hpp"

PaperBookProduct::PaperBookProduct() {
  // default constructor
}

PaperBookProduct::PaperBookProduct(std::string aProdName, double aPrice,
                                   NameType anAuthor, int aPageNum)
    : BookProduct(aProdName, aPrice, anAuthor, aPageNum) {}

std::string PaperBookProduct::getProdTypeStr() { return "Paper Book\n"; }
