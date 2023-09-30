#ifndef EBOOK_PRODUCT_HPP
#define EBOOK_PRODUCT_HPP


#include "BookProduct.hpp"

class EBookProduct : public BookProduct 
{
  public:
  EBookProduct(); //default constructor
  EBookProduct(std::string aProdName, double aPrice, NameType anAuthor, int aPageNum);
  std::string getProdTypeStr();


    
private:
};


//
#endif