/*
break statement
using the break we can leave a loop even if the condition for its end is not fulfilled.
It can be used to end an infinite loop, or to force it to end before its natural end
***see example (**01**)***


the continue statement
The continue statement causes the program to skip the rest of the loop in the current
iteration as if the end of the statement block had been reached, causing it to
jump to the start of the following iteration
***see example (**02**)***


the goto statement
goto allows to make an absolute jump to another point in the program.
You should use this feature with caution since its execution causes an unconditional
jump ignoring any type of nesting limitations. The destination point is identified
by a label, which is then used as an argument for the goto statement. A label is
made of a valid identifier followed by a colon (:)
***see example (**03**)***


the exit function
exit is a function defined in the cstdlib library.
The purpose of exit is to terminate the current program with a specific exit code.

Its prototype is:
void exit (int exitcode);

The exitcode is used by some operating systems and may be used by calling programs.
By convention, an exit code of 0 means that the program finished normally and
any other value means that some error or unexpected results happened.


the selective structure: switch
Its objective is to check several possible constant values for an expression.
Its form is the following:
switch (expression)
{
  case constant1: 
     group of statements 1;
     break;
  case constant2:
     group of statements 2;
     break;
  .
  .
  .
  default:
     default group of statements
}

**tip**
The switch statement is a bit peculiar within the C++ language because it uses
labels instead of blocks. This forces us to put break statements after the group
of statements that we want to be executed for a specific condition. Otherwise the
remainder statements -including those corresponding to other labels- will also be
executed until the end of the switch selective block or a break statement is reached.


*/

#include <iostream>
using namespace std;

int main(){
//break loop example (**01**)
  int k;
  for (k = 10; k > 0; k--){
    cout << k << ", ";
    if (k == 3){
      cout << "coutdown aborted!" << endl;
      break;
    }
  }
  cout << "end of example 01\n\n" << endl;

//continue loop (**02**)
for ( int j=10; j > 0; j--){
  if (j == 5) continue;
  cout << j << ", ";
}
cout << "FIRE!" << endl;
cout << "End of example 02\n\n" << endl;

//goto loop (**03**)
int i = 10;
loop:
cout << i << ", ";
i--;
if (i > 0) goto loop;
cout << "Fire!\n";
cout << "end of example 03\n\n" << endl;

  return 0;
}
