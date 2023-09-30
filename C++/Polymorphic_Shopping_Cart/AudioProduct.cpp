#include "AudioProduct.hpp"

AudioProduct::AudioProduct() {
  // default constructor
}

AudioProduct::AudioProduct(std::string aProdName, double aPrice,
                           NameType aSinger)
    : Product(aProdName, aPrice), singer(aSinger) {}

void AudioProduct::setSinger(NameType aSinger) { singer = aSinger; }
void AudioProduct::setGenre(GenreType aGenre) { genre = aGenre; }

NameType AudioProduct::getSinger() { return singer; }
GenreType AudioProduct::getGenre() { return genre; }

std::string AudioProduct::getGenreStr(GenreType aGenre) {
  // has to go from the enum to a string for output reasonz
  switch (aGenre) {
  case 0:
    return "Rock";
    break;
  case 1:
    return "Rap";
    break;
  case 2:
    return "Country";
    break;
  case 3:
    return "House";
    break;
  case 4:
    return "Classical";
    break;
  }
}

std::string AudioProduct::getProdTypeStr() { return "Audio\n"; }

void AudioProduct::displayContentsInfo() {
  std::cout << "Singer: " << getSinger().First << " " << getSinger().Last
            << "\nGenre: " << getGenreStr(getGenre()) << "\n";
}

// getters

// setters