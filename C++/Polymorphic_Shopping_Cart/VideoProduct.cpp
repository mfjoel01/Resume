#include "VideoProduct.hpp"

VideoProduct::VideoProduct() {
  // default constructor
}

VideoProduct::~VideoProduct() {}

VideoProduct::VideoProduct(std::string aProdName, double aPrice,
                           NameType aDirectorName, int aReleaseYear,
                           int aRunTime)
    : Product(aProdName, aPrice), director(aDirectorName),
      releaseYear(aReleaseYear), runTime(aRunTime) {}
// getters & setters
void VideoProduct::setDirector(NameType aDirectorName) {
  director = aDirectorName;
}
void VideoProduct::setRate(FilmRateType aRate) { rate = aRate; }
void VideoProduct::setReleaseYear(int aReleaseYear) {
  releaseYear = aReleaseYear;
}
void VideoProduct::setRunTime(int aRunTime) { runTime = aRunTime; }

NameType VideoProduct::getDirector() { return director; }
FilmRateType VideoProduct::getRate() { return rate; }

int VideoProduct::getReleaseYear() { return releaseYear; }

int VideoProduct::getRunTime() { return runTime; }

std::string VideoProduct::getRateStr(FilmRateType aRate) {

  switch (aRate) {
  case 0:
    return "Not Rated";
    break;
  case 1:
    return "G";
    break;
  case 2:
    return "PG";
    break;
  case 3:
    return "PG-13";
    break;
  case 4:
    return "R";
    break;
  case 5:
    return "NC_17";
    break;
  }
}
std::string VideoProduct::getProdTypeStr() { return "Video\n"; }
void VideoProduct::displayContentsInfo() {
  std::cout << "Director: " << getDirector().First << " " << getDirector().Last
            << "\nRated: " << getRateStr(getRate())
            << "\nRelease Year: " << getReleaseYear()
            << "\nRun-time: " << getRunTime();
}
