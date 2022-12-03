#include <iostream>
#include <cmath>
using namespace std;
class Point{
  public:
  int x;
  int y;
  Point(int _x = 0, int _y = 0){
    x = _x;
    y = _y;
  }
  void Print(){
    cout << "(" << x << "," << y << "), ";
  }
  double DistanceTo(Point to){ //"to" as in "to that point", meaning the endpoint, or point b
    return sqrt((x-to.x)*(x-to.x) + (y-to.y)*(y-to.y));
  }
};
