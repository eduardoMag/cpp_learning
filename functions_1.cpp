/*
A function is a group of statements that is executed when it is called from some
point of the program. The following is its format:
type name ( parameter1, parameter2, ...) { statements }
***see example (**01**)***


scope of variables
The scope of variables declared within a function or any other inner block is
only their own function or their own block and cannot be used outside of them
the scope of local variables is limited to the same block level in which they
are declared. Nevertheless, we also have the possibility to declare global variables;
These are visible from any point of the code, inside and outside all functions.
In order to declare global variables you simply have to declare the variable outside
any function or block; that means, directly in the body of the program


functions with no type (use of void)
what if we want to return no value, Imagine that we want to make a function just
to show a message on the screen. We do not need it to return any value. In this
case we should use the void type specifier for the function. This is a special
specifier that indicates absence of type.
***see example (**02**)***

void can also be used in the function's parameter list to explicitly specify
that we want the function to take no actual parameters when it is called.

***TIP***
you must always remember is that the format for calling a function includes
specifying its name and enclosing its parameters between parentheses.
The non-existence of parameters does not exempt us from the obligation to write
the parentheses



*/


#include <iostream>
using namespace std;

//function example (**01**)
int addition (int a , int b)
{
  int r;
  r = a + b;
  return (r);
}

 //void function example (**02**)
 void printmessage (){
   cout << "i am a function." << endl;
 }

int main(){
  //continuation of example (**01**)
int z;
z = addition (5, 3);
cout << "the result is: " << z << endl;
cout << "End of example 01\n" << endl;

//continuation of example (**02**)
printmessage();
cout << "end of example 02 \n" << endl;

return 0;
}
