#include "BookProduct.hpp"

BookProduct::BookProduct() {
  // default constructor
}

BookProduct::BookProduct(std::string aProdName, double aPrice,
                         NameType anAuthor, int aPageNum)
    : Product(aProdName, aPrice), author(anAuthor), pageNum(aPageNum) {}
// getters and setters
void BookProduct::setAuthor(NameType anAuthor) { author = anAuthor; }
void BookProduct::setPageNum(int aPageNum) { pageNum = aPageNum; }

NameType BookProduct::getAuthor() { return author; }
int BookProduct::getPageNum() { return pageNum; }

std::string BookProduct::getProdTypeStr() { return "Book\n"; }

void BookProduct::displayContentsInfo() {
  std::cout << "Author: " << getAuthor().First << " " << getAuthor().Last
            << "\nLength: " << getPageNum() << " pages\n";
}
