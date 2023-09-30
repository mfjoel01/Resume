#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <sstream>
#include <string.h>
#include <string>
#include "FileIO.hpp"
#include "BST.hpp"

class Menu
{

public:
Menu();
void initialize();
void choiceLoop();
void addActor();
void addPicture();
void searchActors();
void searchPictures();
std::vector<Actors> temp;
std::vector<Pictures> temp2;


private:
BinarySearchTree<Actors> bstActor;
BinarySearchTree<Pictures> bstPicture;
FileIO fio;


std::string choice;
std::string choice1;
std::string choice2;



};

#endif