#ifndef AUDIO_PRODUCT_HPP
#define AUDIO_PRODUCT_HPP

#include "Product.hpp" 

 enum GenreType{
  Rock=0,Rap,Country,House,Classical
 };

class AudioProduct : public Product 
{
  public:
  AudioProduct(); //default constructor
  AudioProduct(std::string aProdName, double aPrice, NameType aSinger);
  void setSinger(NameType aSinger);
  void setGenre(GenreType aGenre);
  NameType getSinger();
  GenreType getGenre();
  std::string getGenreStr(GenreType aGenre);
  std::string getProdTypeStr();
  void displayContentsInfo();



private:
  NameType singer;
  GenreType genre;
};


//
#endif