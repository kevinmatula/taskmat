#include "core.hpp"
#include <iostream>

int taskmat::run(int argc, char **argv) {
  // Have some conditionals here to deal with different arguments from command
  // line and shit

  // This calls our function that prints our default visual to the terminal.
  taskmat::show_default_visual();

  return 0;
}

// This is our function to print out the basic gauge stuff.
void taskmat::show_default_visual() { std::cout << "Hello." << std::endl; }
