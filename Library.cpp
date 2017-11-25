/*
Library.cpp
Oct 24, 2017
Juan Casian
*/
#include "Library.hh"
#include <iostream>
#include <vector>

using namespace std;

int VectorAddition (vector<int> Data){

  int Total = 0;

  for (int i = 0; i < Data.size(); i++){
    Total = Total + Data [i];
    cout << "Addition Result: " << Total << endl;
  }
  return Total;
}

int VectorMultiplication (vector<int> Data){
  int Total = 1;

  for (int i = 0; i < Data.size(); i++){
    Total = Total * Data [i];
    cout << "Multiplication Result: " << Total << endl;
  }
  return Total;
}

void myprint(vector<int> Data){
  for (int i = 0; i < Data.size(); i++){
    cout << "Value Number " << i << " is " << Data[i] << endl;
  }
}
