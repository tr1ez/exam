#include <iostream>

#include "menu_items.hpp"

const char* tire = " - ";

int main() {

    const Mark::MenuItem* current = &Mark::MAIN;
      do
      {
          current = current->func(current);
      } while (true);
}