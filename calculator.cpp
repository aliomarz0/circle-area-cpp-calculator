#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double radius, area, result, base, exponent, pie = 3.14;
  
  cout << "Welcome to the Circle Area Calculator! Please enter the radius " << endl;
  cin >> radius;
  
  exponent = 2;
  base = radius;
  
  result = pow(radius,exponent);
  
  cout << " And the area is... " << pie * result << endl;
  
  return 0;
}
