#ifndef ACTORS_HPP
#define ACTORS_HPP

#include <iostream>
#include <string.h>
#include <cstring>
#include <utility>

class Actors {
public:
  Actors(std::string ayear, std::string anaward, std::string awin,
         std::string aname, std::string amovie);

  std::string getYear();
  std::string getAward();
  std::string getWin();
  std::string getName();
  std::string getMovie();

  void setYear(std::string theYear);
  void setAward(std::string theAward);
  void setWin(std::string theWin);
  void setName(std::string theName);
  void setMovie(std::string theMovie);

  void displayActor();

  bool operator<(const Actors &a) const { return (this->name < a.name); }

bool operator==(const Actors &a) const { return !(this->name.compare(a.name)); }

  friend std::ostream &operator<<(std::ostream &os, Actors &a) {
    os << "Year: " << a.year << "\nAward: " << a.award
              << "\nWin: ";
    int res = a.win.compare("1");

    if (res == 0) {
      os << "Yes";

    } else {
      os << "No";
    }
    os << "\nActor/Actress Name: " << a.name << "\nMovie: " << a.movie
              << "\n\n";

    return os;
  }
  
private:
  std::string year;
  std::string award;
  std::string win;
  std::string name;
  std::string movie;
};

#endif