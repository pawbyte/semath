#include "semath.h"
#include <iostream> //used to use std::cout to print messages

//Make sure to include both "semath.h" and "semath.cpp" in your project directory.

int main( int argc, char* args[] )
{
  std::cout << "Result of <get_direction( 0, 0, 300, 300):" << get_direction( 0, 0, 300, 300)  << ".\n";
  std::cout << "Result of <get_distance( 0, 0, 300, 300):" << get_distance( 0, 0, 300, 300)  << ".\n";

  return 0;
}
