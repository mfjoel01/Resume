#ifndef PICTURES_HPP
#define PICTURES_HPP

#include <iostream>
#include <cstring>
#include <string.h>


class Pictures
{
  public:
  Pictures(std::string aname, std::string ayear, std::string anominations, std::string arating, std::string aduration, std::string agenre1, std::string agenre2, std::string arelease, std::string ametacritic, std::string asynopsis);
  
  std::string getName();
  std::string getYear();
  std::string getNominations();
  std::string getRating();
  std::string getDuration();
  std::string getGenre1();
  std::string getGenre2();
  std::string getRelease();
  std::string getMetacritic();
  std::string getSynopsis();

  void setName(std::string theName);
  void setYear(std::string theYear);
  void setNominations(std::string theNominations);
  void setRating(std::string theRating);
  void setDuration(std::string theDuration);
  void setGenre1(std::string theGenre1);
  void setGenre2(std::string theGenre2);
  void setRelease(std::string theRelease);
  void setMetacritic(std::string theMetacritic);
  void setSynopsis(std::string theSynopsis);




  void displayPicture();


  bool operator<(const Pictures &p) const { return (this->name < p.name); }

 bool operator==(const Pictures &p) const { return !(this->name.compare(p.name)); }

  friend std::ostream &operator<<(std::ostream &os, Pictures &p) {
   // os << p.name << '/' << p.year << '/' << p.win;
    os <<"Name: " << p.name<< "\nYear: " << p.year << "\nNominations: " << p.nominations << "\nRating: "<< p.rating <<  "\nDuration: " << p.duration <<" min. \nGenre 1: "<<p.genre1<<"\nGenre 2: "<<p.genre2<<"\nRelease Month: "<<p.release<<"\nMetacritic: "<<p.metacritic<<"\nSynopsis: "<<p.synopsis<< "\n\n";

    return os;
  }




  private:
std::string name;
std::string year;
std::string nominations;
std::string rating;
std::string duration;
std::string genre1;
std::string genre2;
std::string release;
std::string metacritic;
std::string synopsis;
};


#endif