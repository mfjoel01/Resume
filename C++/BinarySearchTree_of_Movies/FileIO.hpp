#ifndef FILEIO_HPP
#define FILEIO_HPP



#include <assert.h>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Actors.hpp"
#include "Pictures.hpp"
#include "BST.hpp"


class FileIO
{
  public:
 static void tokenize(std::string const &str, const char delim,
              std::vector<std::string> &out); 
 std::vector<Actors> readActors();
 std::vector<Pictures> readPictures();
void writeActor(std::vector <Actors> &a);

void writePicture(std::vector <Pictures> &p);

  private:

};


#endif