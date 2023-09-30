#ifndef BOOK_PRODUCT_HPP
#define BOOK_PRODUCT_HPP

#include "Product.hpp" 
class BookProduct : public Product 
{
  public:
  BookProduct(); //default constructor
  BookProduct(std::string aProdName, double aPrice, NameType anAuthor, int aPageNum);
  void setAuthor(NameType anAuthor);
  void setPageNum(int aPageNum);
  NameType getAuthor();
  int getPageNum();
  std::string getProdTypeStr();
  void displayContentsInfo();



private:
  NameType author;
  int pageNum;
};


//
#endif