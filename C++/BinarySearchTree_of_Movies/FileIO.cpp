#include "FileIO.hpp"

using namespace std;

void FileIO::tokenize(std::string const &str, const char delim,
                      std::vector<std::string> &out) {
  std::stringstream ss(str);

  std::string s;
  while (std::getline(ss, s, delim)) {
    out.push_back(s);
  }
}

std::vector<Actors> FileIO::readActors() {

  vector<Actors> temp_Actors;

  fstream _file;
  std::string file;

  cout << "Enter actors file name: ";
  cin >> file;
  assert(!file.empty());

  _file.open(file);

  std::string line;
  char delimiter = ',';
  vector<string> temp_words;

  if (!_file) {
    cerr << "File not found\n";
    exit(EXIT_FAILURE);
  } else {
    auto index = 0;

    // Populate the dictionary object from dictionary.txt
    while (std::getline(_file, line)) {

      tokenize(line, delimiter, temp_words);
      Actors tempActor(temp_words[0], temp_words[1], temp_words[2],
                       temp_words[3], temp_words[4]);
      temp_Actors.push_back(tempActor);

      temp_words.clear();
    }
    std::cout << "Actor File loaded successfully\n";
    return temp_Actors;
  }
}

std::vector<Pictures> FileIO::readPictures() {

  vector<Pictures> temp_Pictures;

  fstream _file;
  std::string file;

  cout << "\nEnter pictures file name: ";
  cin >> file;
  assert(!file.empty());

  _file.open(file);

  std::string line;
  char delimiter = ',';
  vector<string> temp_words;

  if (!_file) {
    cerr << "File not found\n";
    exit(EXIT_FAILURE);
  } else {
    auto index = 0;

    // Populate the dictionary object from dictionary.txt
    while (std::getline(_file, line)) {

      tokenize(line, delimiter, temp_words);
      Pictures tempPicture(temp_words[0], temp_words[1], temp_words[2],
                           temp_words[3], temp_words[4], temp_words[5],
                           temp_words[6], temp_words[7], temp_words[8],
                           temp_words[9]);
      temp_Pictures.push_back(tempPicture);

      temp_words.clear();
    }
    std::cout << "Picture File loaded successfully\n";
    return temp_Pictures;
  }
}

void FileIO::writeActor(std::vector <Actors> &a){

  ofstream output("actor_actress_new.csv");
  int i=0;
  while(i < a.size()){
    output<<a[i].getYear()<<","<<a[i].getAward()<<","<<a[i].getWin()<<","<<a[i].getName()<<","<<a[i].getMovie()<<"\n";
    i++;
  }
  output.close();

  std::cout<<"\nActor file successfully saved as actor_actress_new.csv\n";
}


void FileIO::writePicture(std::vector <Pictures> &p){

  ofstream output("pictures_new.csv");
  int i=0;
  while(i < p.size()){
    output<<p[i].getName()<<","<<p[i].getYear()<<","<<p[i].getNominations()<<","<<p[i].getRating()<<","<<p[i].getDuration()<<","<<p[i].getGenre1()<<","<<p[i].getGenre2()<<","<<","<<p[i].getRelease()<<","<<p[i].getMetacritic()<<","<<p[i].getSynopsis()<<"\n";
    i++;
  }
  output.close();

  std::cout<<"\nPicture file successfully saved as pictures_new.csv\n";
}


