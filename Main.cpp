
#include <iostream>
#include <vector>

#include "Library.hh"
using namespace std;

int main () {

  vector <int> ListOfNumbers;

  ListOfNumbers.push_back(1);
  ListOfNumbers.push_back(2);
  ListOfNumbers.push_back(3);

  myprint(ListOfNumbers);
  VectorMultiplication(ListOfNumbers);
  VectorAddition(ListOfNumbers);

  return 0;

}
