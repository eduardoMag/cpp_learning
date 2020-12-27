/*
In the case that we want the statement to be a simple statement, we do not need
to enclose it in braces ({}). But in the case that we want the statement to be a
compound statement it must be enclosed between braces ({}), forming a block


control structure ( if and else)
The if keyword is used to execute a statement or block only if a condition is fulfilled.
Its form is:
if (condition) statement

Where condition is the expression that is being evaluated. If this condition is true,
statement is executed. If it is false, statement is ignored (not executed) and the
program continues right after this conditional structure
example:
if (x == 100)
cout << "x is 100";

If we want more than a single statement to be executed in case that the condition
is true we can specify a block using braces { }:
if (x == 100) {
cout << "x is ";
cout << x;
}

We can additionally specify what we want to happen if the condition is not
fulfilled by using the keyword else. Its form used in conjunction with if is:
if (condition) statement1 else statement2
example:
if (x == 100)
cout << "x is 100";
else
cout << "x is not 100";

The if + else structures can be concatenated with the intention of verifying a
range of values.
if (x > 0)
cout << "x is positive";
else if (x < 0)
cout << "x is negative";
else
cout << "x is 0";
***NOTE***
Remember that in case that we want more than a single statement to be executed.
We must group them in a block by enclosing them in braces { }


iteration structures (loops)
Loops have as purpose to repeat a statement a certain number of times or while
a condition is fulfilled.

*The while loop
Its format is:
while (expression) statement

and its functionality is simply to repeat statement while the condition set in
expression is true.
***see example (**01**)***
***NOTE***
When creating a while-loop, we must always consider that it has to end at some point,
therefore we must provide within the block some method to force the condition to
become false at some point, otherwise the loop will continue looping forever


do-while loop
its format is:
do statement while (condition);

Its functionality is exactly the same as the while loop, except that condition
in the do-while loop is evaluated after the execution of statement instead of
before, granting at least one execution of statement even if condition is never
fulfilled
***see example (**02**)***


the for loop
its format is:
for (initialization; condition; increase) statement;

its main function is to repeat statement while condition remains true, like the
while loop. But in addition, the for loop provides specific locations to contain
an initialization statement and an increase statement
***see example (**03**)***

using the comma operator (,) we can specify more than one expression in any of
the fields included in a for loop, like in initialization, for example. The comma
operator (,) is an expression separator, it serves to separate more than one
expression where only one is generally expected. For example, suppose that we wanted to initialize more than one variable in our loop:
for ( n=0, i=100 ; n!=i ; n++, i-- )
{
// code to execute here...
}


*/


#include <iostream>
using namespace std;

int main(){
    //custom coutdown using while (**01**)
    cout << "Start if Example 01\n\n";
    int time;
    cout <<"Enter the starting number > ";
    cin >> time;
    while (time > 0){
        cout << time << "... \n";
        --time;
    }

    cout << "FIRE!\n\n" << "End of Example 01.\n\n";

    //number echoer
    cout << "Start if Example 02\n\n";
    unsigned long num;
    do{
        cout << "Enter a number (0 to end): ";
        cin >> num;
        cout << "Your entered the number: " << num << endl;
    } while (num != 0);
    cout << "End of example 02.\n\n";

    //coutdown using a for loop
    cout << "Start if Example 03\n\n";
    for (int k=10; k> 0; k--){
        cout << k << "...\n";
    }
    cout << "FIRE!\n";
    cout <<"End of example 03\n\n";
    return 0;
}
