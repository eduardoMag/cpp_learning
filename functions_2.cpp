/*
arguments passed by value and by reference
arguments passed to the functions have been passed by value.
This means that when calling a function with parameters, what we have passed to
the function were copies of their values but never the variables themselves

But there might be some cases where you need to manipulate from inside a function
the value of an external variable. For that purpose we can use arguments passed
by reference
***see example(**01**)***




*/


#include <iostream>
using namespace std;

void duplicate (int& a, int& b, int& c){
  a*=2;
  b*=2;
  c*=2;
}

int main(){
  //passing parameters by reference (**01**)
  int x = 1, y = 3, z = 7;
  duplicate (x, y, z);
  cout << "x = " << x << "\ny = " << y << "\nz = " << z << endl;

  return 0;

}
