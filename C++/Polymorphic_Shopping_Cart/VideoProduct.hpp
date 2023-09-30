#ifndef VIDEO_PRODUCT_HPP
#define VIDEO_PRODUCT_HPP

#include "Product.hpp" 

 enum FilmRateType{
 NotRated=0, G, PG, PG_13, R, NC_17
 };

class VideoProduct : public Product 
{
  public:
  ~VideoProduct();//test destructor
  VideoProduct(); //default constructor
  VideoProduct(std::string aProdName, double aPrice, NameType aDirectorName, int aReleaseYear, int aRunTime);

  void setDirector(NameType aDirectorName);
  void setRate(FilmRateType aRate);
  void setReleaseYear(int aReleaseYear);
  void setRunTime(int aRunTime);

  NameType getDirector();
  FilmRateType getRate();
  std::string getRateStr(FilmRateType aRate);
  int getReleaseYear();
  int getRunTime();
  std::string getProdTypeStr();
  void displayContentsInfo();
private:
  NameType director;
  FilmRateType rate;
  int releaseYear;
  int runTime;
};


//
#endif