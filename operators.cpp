/*
assignment (=)
The assignment operator assigns a value to a variable.
a = 5;
The part at the left of the assignment operator (=) is known as the lvalue (left value)
and the right one as the rvalue (right value). The lvalue has to be a variable
whereas the rvalue can be either a constant, a variable, the result of an
operation or any combination of these. The most important rule when assigning is
the right-to-left rule: The assignment operation always takes place from
right to left, and never the other way

A property that C++ has over other programming languages is that the assignment
operation can be used as the rvalue (or part of an rvalue) for another assignment
operation. For example:
a = 2 + (b = 5);
is the same as
b = 5;
a = 2 + b;

The following expression is also valid in C++:
a = b = c = 5;
It assigns 5 to the all the three variables: a, b and c.


arithmetic operators
The five arithmetical operations supported by the C++ language are:
          + addition
          - subtraction
          * multiplication
          / division
          % modulo
Operations of addition, subtraction, multiplication and division literally
correspond with their respective mathematical operators. The only one that you
might not be so used to see is modulo; whose operator is the percentage sign (%).
Modulo is the operation that gives the remainder of a division of two values


compound assignment
When we want to modify the value of a variable by performing an operation on the
value currently stored in that variable we can use compound assignment operators:
***expression***                      ***is equivalent to***
value += increase;                value = value + increase;
a -= 5;                           a = a - 5;
a /= b;                           a = a / b;
price *= units + 1;               price = price * (units + 1);


increasing and decreasing
Shortening even more some expressions, the increase operator (++) and the
decrease operator (--) increase or reduce by one the value stored in a variable.
They are equivalent to +=1 and to -=1
example:
c++;
c+=1;
c=c+1;
are all equivalent in its functionality: the three of them increase by one the
value of c.
In the case that the increase operator is used as a prefix (++a) the value is
increased before the result of the expression is evaluated and therefore the
increased value is considered in the outer expression; in case that it is used as
a suffix (a++) the value stored in a is increased after being evaluated and therefore
the value stored before the increase operation is evaluated in the outer expression.
Example 1
B=3;
A=++B;
// A contains 4, B contains 4
Example 2
B=3;
A=B++;
// A contains 3, B contains 4


relational and equality operators
In order to evaluate a comparison between two expressions we can use the relational
and equality operators. The result of a relational operation is a Boolean value that
can only be true or false, according to its Boolean result
          == Equal to
          != Not equal to
          > Greater than
          < Less than
          >= Greater than or equal to
          <= Less than or equal to
Here there are some examples:
(7 == 5)     ~  evaluates to false.
(5 > 4)      ~  evaluates to true.
(3 != 2)     ~  evaluates to true.
(6 >= 6)     ~  evaluates to true.
(5 < 5)      ~  evaluates to false.

instead of using only numeric constants, we can use any valid expression,
including variables. Suppose that a=2, b=3 and c=6,
(a == 5)     ~  evaluates to false since a is not equal to 5.
(a*b >= c)   ~  evaluates to true since (2*3 >= 6) is true.
(b+4 > a*c)  ~  evaluates to false since (3+4 > 2*6) is false.
((b=2) == a) ~  evaluates to true.

          ***TIP***
Be careful! The operator = (one equal sign) is not the same as the operator
== (two equal signs), the first one is an assignment operator (assigns the value
at its right to the variable at its left) and the other one (==) is the equality
operator that compares whether both expressions in the two sides of it are equal
to each other.


logical operators (!, && ||)
The Operator ! is the C++ operator to perform the Boolean operation NOT, it has
only one operand, located at its right, and the only thing that it does is to
inverse the value of it

!(5 == 5)    ~     evaluates to false because the expression at its right (5 == 5) is true.
!(6 <= 4)    ~     evaluates to true because (6 <= 4) would be false.
!true        ~     evaluates to false
!false       ~     evaluates to true.

The logical operators && and || are used when evaluating two expressions to
obtain a single relational result. The operator && corresponds with Boolean
logical operation AND. This operation results true if both its two operands are
true, and false otherwise
example:
  a         b              a && b
true      true        ~     true
true      false       ~     false
false     true        ~     false
false     false       ~     false

The operator || corresponds with Boolean logical operation OR. This operation
results true if either one of its two operands is true, thus being false only
when both operands are false themselves.
example:
a           b           a || b
true      true     ~     true
true      false    ~     true
false     true     ~     true
false     false    ~     false


conditional operator (?)
The conditional operator evaluates an expression returning a value if that
expression is true and a different one if the expression is evaluated as false.
Its format is:
condition ? result1 : result2

If condition is true the expression will return result1,
if it is not it will return result2.
7==5 ? 4 : 3     ~   returns 3, since 7 is not equal to 5.
7==5+2 ? 4 : 3   ~   returns 4, since 7 is equal to 5+2.
5>3 ? a : b      ~   returns the value of a, since 5 is greater than 3.
a>b ? a : b      ~   returns whichever is greater, a or b.
    ***see example (***01***)


comma operator ( , )
The comma operator (,) is used to separate two or more expressions that are included
where only one expression is expected. When the set of expressions has to be
evaluated for a value, only the rightmost expression is considered.
example:
a = (b=3, b+2);
Would first assign the value 3 to b, and then assign b+2 to variable a.
So at the end, variable a would contain the value 5 while variable b would contain
value 3.


bitwise operators
Bitwise operators modify variables considering the bit patterns that represent
the values they store.
**operator**          **asm equivalent**                  **description**
      &                  AND                            Bitwise AND
      |                  OR                             Bitwise Inclusive OR
      ^                  XOR                            Bitwise Exclusive OR
      ~                  NOT                            Unary complement (bit inversion)
      <<                 SHL                            Shift Left
      >>                 SHR                            Shift Right


explicit type casting operator
Type casting operators allow you to convert a datum of a given type to another.
simplest one, which has been inherited from the C language, is to precede the
expression to be converted by the new type enclosed between parentheses (()):
int i;
float f = 3.14;
i = (int) f;

Another way to do the same thing in C++ is using the functional notation:
preceding the expression to be converted by the type and enclosing the expression
between parentheses:
i = int ( f );


sizeof()
This operator accepts one parameter, which can be either a type or a variable
itself and returns the size in bytes of that type or object:
a = sizeof (char);
This will assign the value 1 to a because char is a one-byte long type.
The value returned by sizeof is a constant, so it is always determined before
program execution
 ***PLEASE VIEW IMAGE IN SAME REPO (Table of Precedence of operators)






*/

#include <iostream>
using namespace std;
int main(){
  //example ***01***
  int a,b,c;
  a=2;
  b=7;
  c= (a>b) ? a : b;
  cout << c << endl;
  return 0;
}
