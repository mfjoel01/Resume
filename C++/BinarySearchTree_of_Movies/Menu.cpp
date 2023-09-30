#include "Menu.hpp"

Menu::Menu() {}

void Menu::initialize() {
  int index = 0;
  temp = fio.readActors();
  while (index < temp.size()) {
    bstActor.Insert(temp[index]);
    index++;
  }

  int index2 = 0;
  temp2 = fio.readPictures();
  while (index2 < temp2.size()) {
    bstPicture.Insert(temp2[index2]);
    index2++;
  }
}

void Menu::choiceLoop() {

  choice = "1";
  while (!choice.compare("1") ||
         !choice.compare(
             "2")) // outermost loop, controls between actors and pictures

  {
    std::cout << "\nEnter 1 to access Actors/Actresses:\nEnter 2 to access "
                 "Pictures: \nEnter anything else to quit:";
    std::cin >> choice;

    if (!choice.compare("1")) {
      choice1 = "1";
      while (!choice1.compare("1") || !choice1.compare("2") ||
             !choice1.compare("3") ||
             !choice1.compare("4")) // loop for actor functions
      {
        std::cout
            << "\n\nEnter 1 to view the actors/actresses:\nEnter 2 to "
               "add:\nEnter 3 to "
               "search (modify/delete):\nEnter 4 to sort:\nEnter anything else "
               "to go save and go back: ";
        std::cin >> choice1;

        if (!choice1.compare("1")) {
          bstActor.PrintTree();
        }
        if (!choice1.compare("2")) {
          Menu::addActor();
        }
        if (!choice1.compare("3")) {
          Menu::searchActors();
        }
        if (!choice1.compare("4")) {
        }
        fio.writeActor(temp);
      }
    }
    if (!choice.compare("2")) {
      choice2 = "1";
      while (!choice2.compare("1") || !choice2.compare("2") ||
             !choice2.compare("3") ||
             !choice2.compare("4")) // loop for picture functions
      {
        std::cout
            << "\n\nEnter 1 to view the pictures:\nEnter 2 to add:\nEnter 3 to "
               "search (modify/delete):\nEnter 4 to sort:\nEnter anything else "
               "to save and go "
               "back: ";
        std::cin >> choice2;

        if (!choice2.compare("1")) {
          bstPicture.PrintTree();
        }
        if (!choice2.compare("2")) {
          Menu::addPicture();
        }
        if (!choice2.compare("3")) {
          Menu::searchPictures();
        }
        if (!choice2.compare("4")) {
        }
       // cout<<temp2[5];
        fio.writePicture(temp2);
      }
    }
  }
}

void Menu::addActor() {
  std::cout << "\nEnter the year of the movie: ";
  std::string tempYear;
  cin >> tempYear;

  std::cout << "\nEnter the name of the award: ";
  std::string tempAward;
  std::getline(cin >> std::ws, tempAward);

  std::cout << "\nEnter 1 if the award was won, or 0 if lost: ";
  std::string tempWin;
  cin >> tempWin;

  std::cout << "\nEnter the Actor/Actress's name: ";
  std::string tempName;
  std::getline(cin >> std::ws, tempName);

  std::cout << "\nEnter the movie's name: ";
  std::string tempFilm;
  std::getline(cin >> std::ws, tempFilm);

  Actors tempActor(tempYear, tempAward, tempWin, tempName, tempFilm);
  bstActor.Insert(tempActor);
  temp.push_back(tempActor);

  std::cout << "\nSuccessfully inserted new actor/actress.\n\n";
}

void Menu::addPicture() {
  std::cout << "\nEnter the name of the film: ";
  std::string tempFilm;
  std::getline(cin >> std::ws, tempFilm);

  std::cout << "\nEnter the year of the film: ";
  std::string tempYear;
  cin >> tempYear;

  std::cout << "\nEnter the number of nominations: ";
  std::string tempNom;
  cin >> tempNom;

  std::cout << "\nEnter the film's rating: ";
  std::string tempRating;
  cin >> tempRating;

  std::cout << "\nEnter the movie's duration: ";
  std::string tempDur;
  cin >> tempDur;

  std::cout << "\nEnter the first genre of the film: ";
  std::string tempGenre1;
  std::getline(cin >> std::ws, tempGenre1);

  std::cout << "\nEnter the second genre of the film: ";
  std::string tempGenre2;
  std::getline(cin >> std::ws, tempGenre2);

  std::cout << "\nEnter the release month of the film: ";
  std::string tempMonth;
  cin >> tempMonth;

  std::cout << "\nEnter the Metacritic score of the film: ";
  std::string tempMeta;
  cin >> tempMeta;

  std::cout << "\nEnter the synopsis of the film: ";
  std::string tempSyn;
  std::getline(cin >> std::ws, tempSyn);

  Pictures tempPic(tempFilm, tempYear, tempNom, tempRating, tempDur, tempGenre1,
                   tempGenre2, tempMonth, tempMeta, tempSyn);
  bstPicture.Insert(tempPic);

  std::cout << "\nSuccessfully inserted new picture.\n\n";
}

void Menu::searchActors() {
  std::cout << "\nEnter the actor/actress name to search: ";
  std::string searchName;
  std::getline(cin >> std::ws, searchName);
  Actors searchActors("", "", "", searchName, "");
  auto i = bstActor.Contains(searchActors);
  if (i) {
    std::cout << "\nEntry found!\nEnter 1 to delete:\nEnter 2 to "
                 "modify:\nEnter anything else to cancel:";
    std::string searchChoice;
    cin >> searchChoice;
    if (!searchChoice.compare("1")) {
      bstActor.Remove(searchActors);
      int k = 0;
      while (k < temp.size()) {
        if (temp[k].getName().compare(searchActors.getName())) {
          temp.erase(temp.begin() + k);
          k++;
        }
      }

      std::cout << "\nDeleted!";
    }
    if (!searchChoice.compare("2")) {
      bstActor.Remove(searchActors);
      int k = 0;
      while (k < temp.size()) {
        if (!temp[k].getName().compare(searchActors.getName())) {
          temp.erase(temp.begin() + k);
          k++;
        }
      }

      std::cout << "\nYou will now be prompted to enter the new information of "
                   "the entry:";
      Menu::addActor();
    }

  } else {
    std::cout << "\nEntry not found.";
  }
}

void Menu::searchPictures() {
  std::cout << "\nEnter the film name to search: ";
  std::string searchFilm;
  std::getline(cin >> std::ws, searchFilm);
  Pictures searchPicture(searchFilm, "", "", "", "", "", "", "", "", "");
  cout << searchPicture;

  auto i = bstPicture.Contains(searchPicture);
  if (i) {
    std::cout << "\nEntry found!\nEnter 1 to delete:\nEnter 2 to "
                 "modify:\nEnter anything else to cancel:";
    std::string searchChoice;
    cin >> searchChoice;
    if (!searchChoice.compare("1")) {
      bstPicture.Remove(searchPicture);
      std::cout << "\nDeleted!";
    }
    if (!searchChoice.compare("2")) {
      bstPicture.Remove(searchPicture);

      std::cout
          << "\nYou will now be prompted to enter the new information of the "
             "entry:";
      Menu::addPicture();
    }

  } else {
    std::cout << "\nEntry not found.";
  }
}
