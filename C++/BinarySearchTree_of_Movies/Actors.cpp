#include "Actors.hpp"

Actors::Actors(std::string ayear, std::string anaward, std::string awin,
               std::string aname, std::string amovie)
    : year(ayear), award(anaward), win(awin), name(aname), movie(amovie) {}

std::string Actors::getYear() { return year; }

std::string Actors::getAward() { return award; }

std::string Actors::getWin() { return win; }
std::string Actors::getName() { return name; }
std::string Actors::getMovie() { return movie; }

void Actors::setYear(std::string theYear) { year = theYear; }

void Actors::displayActor() {
  std::cout << "Year: " << getYear() << "\nAward: " << getAward() << "\nWin: ";
  int res = getWin().compare("1");

  if (res == 0) {
    std::cout << "Yes";

  } else {
    std::cout << "No";
  }
  std::cout << "\nActor Name: " << getName() << "\nMovie: " << getMovie()
            << "\n";
}
