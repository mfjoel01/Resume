#include "Menu.hpp"


int main() {

  Menu *menu = new Menu();
  menu->initialize();
  menu->choiceLoop();

  return 0;
}