#include <iostream>

using namespace std;

class MathFunction
{
public:
  double divide(double a, double b) {
    if(b == 0) {
      cerr << "Error: Denominator is equal to zero" << endl;
      exit(-1);
    }
    return a/b;
  }
};
