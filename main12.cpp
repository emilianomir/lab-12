#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "point.h"
using namespace std;

//===========FUNCTIONS=====================

//Function prints coordinates to user
void printPoints(vector<Point>vec){
  cout << "[";
  for(int i = 0; i < vec.size(); ++i){
    if(i == vec.size() -1){
      cout << "(" << vec.at(i).x << "," << vec.at(i).y << ")";
    }
    else{
     vec.at(i).Print();
    }
  }
  cout << "]" << endl;
}

//Function prints dots with Xs where coordinates are
void printDots(vector<Point>vec){
  int point1= 0;
  int point2= 1;
  int point3= 2;
  int point4 =3;
  int point5= 4;
  for(int i = 0; i < 10; ++i){
    for(int j =0; j < 10; ++j){
      if(vec.at(point1).x == i + 1 && vec.at(point1).y == j + 1){
        cout << "X";
        continue;
      }
       if(vec.at(point2).x == i + 1 && vec.at(point2).y == j + 1){
        cout << "X";
         continue;
      }
       if(vec.at(point3).x == i + 1 && vec.at(point3).y == j + 1){
        cout << "X";
         continue;
      }  
      if(vec.at(point4).x == i + 1 && vec.at(point4).y == j + 1){
        cout << "X";
        continue;
      }
      if(vec.at(point5).x == i + 1 && vec.at(point5).y == j + 1){
        cout << "X";
        continue;
        
      }
      else{
        cout << ".";
      }
    }
    cout << endl;

  }
// =============END FUNCTIONS ==============
  
  //TESTING PURPOSES
  // cout << vec.at(point1).x << " " << vec.at(point1).y << endl;
  // cout << vec.at(point2).x << " " << vec.at(point2).y << endl;
  // cout << vec.at(point3).x << " " << vec.at(point3).y << endl;
  // cout << vec.at(point4).x << " " << vec.at(point4).y << endl;
  // cout << vec.at(point5).x << " " << vec.at(point5).y << endl;

}

int main(){
  const int MIN_VAL = 1;
  const int MAX_VAL = 10;
  unsigned seed = time(0);
  srand(seed);

  vector<Point>pointVec(5);
  for(int i = 0; i < pointVec.size(); ++i){
    pointVec.at(i).x = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
  }
  for(int i = 0; i < pointVec.size(); ++i){
    pointVec.at(i).y = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
  }

  printDots(pointVec);

}
