#ifndef PAPER_BOOK_PRODUCT_HPP
#define PAPER_BOOK_PRODUCT_HPP

#include "BookProduct.hpp"
class PaperBookProduct : public BookProduct 
{
  public:
  PaperBookProduct(); //default constructor
  PaperBookProduct(std::string aProdName, double aPrice, NameType anAuthor, int aPageNum);
  std::string getProdTypeStr();


    
private:
};


//
#endif