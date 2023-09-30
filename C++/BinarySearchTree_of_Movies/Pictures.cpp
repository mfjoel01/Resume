#include "Pictures.hpp"

Pictures::Pictures(std::string aname, std::string ayear,
                   std::string anominations, std::string arating,
                   std::string aduration, std::string agenre1,
                   std::string agenre2, std::string arelease,
                   std::string ametacritic, std::string asynopsis)
    : name(aname), year(ayear), nominations(anominations), rating(arating),
      duration(aduration), genre1(agenre1), genre2(agenre2), release(arelease),
      metacritic(ametacritic), synopsis(asynopsis) {}

std::string Pictures::getName() { return name; }
std::string Pictures::getYear() { return year; }
std::string Pictures::getNominations() { return nominations; }
std::string Pictures::getRating() { return rating; }
std::string Pictures::getDuration() { return duration; }
std::string Pictures::getGenre1() { return genre1; }
std::string Pictures::getGenre2() { return genre2; }
std::string Pictures::getRelease() { return release; }
std::string Pictures::getMetacritic() { return metacritic; }
std::string Pictures::getSynopsis() { return synopsis; }
