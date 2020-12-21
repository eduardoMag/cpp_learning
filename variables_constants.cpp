//constants are expressions with fixed value

/*
integer numerals
1779, -707, 420

in addition to decimal numbers, we can use literal constants
of octal numbers (base 8) and hexadecimal numbers (base 16)
75 (decimal)
0113 (octal)
0x4b (hexadecimal)

by default integer literals are of type int however we can force them
to be either unsigned (u) or long (l)
75          int
75u         unsigned int
75l         long
75ul        unsigned long
In both cases, the suffix can be specified using either upper or lowercase letters.

floating point numbers
They express numbers with decimals and/or exponents.
They can include either a decimal point, an e character
3.14159    ~     3.14159
6.02e23    ~     6.02 x 10^23
1.6e-19    ~     1.6 x 10^-19
3.0        ~     3.0

The default type for floating point literals is double
to express a float or long double numerical literal, you can use the f or l
3.14159L   ~     long double
6.02e23f   ~     float
Any of the letters that can be part of a floating-point numerical constant
(e, f, l) can be written using either lower or uppercase letters

character and string literal
'z'
'p'
"Hello world"
"How do you do?"
to represent a single character we enclose it between single quotes (')
and to express a string (which generally consists of more than one character)
we enclose it between double quotes (")

                ***IMPORTANT***
x
'x'
x alone would refer to a variable whose identifier is x,
whereas 'x' (enclosed within single quotation marks) would
refer to the character constant 'x'


                ***ESCAPE CODES***
        \n newline
        \r carriage return
        \t tab
        \v vertical tab
        \b backspace
        \f form feed (page feed)
        \a alert (beep)
        \' single quote (')
        \" double quote (")
        \? question mark (?)
        \\ backslash (\)

String literals can extend to more than a single line of code by putting
a backslash sign (\) at the end of each unfinished line.
example:
"string expressed in \
two lines"


if we want the string literal to be explicitly made of wide characters (wchar_t),
instead of narrow characters (char), we can precede the constant with the L prefix:
L"This is a wide character string"
Wide characters are used mainly to represent non-English or exotic character sets.


boolean literals
There are only two valid Boolean values: true and false. These can be expressed
in C++ as values of type bool by using the Boolean literals true and false.


defined constants (#define)
You can define your own names for constants that you use very often without
having to resort to memory-consuming variables, simply by using the #define
preprocessor directive
**SEE EXAMPLE (**01**)


declared constants (const)
With the const prefix you can declare constants with a specific type in the same
way as you would do with a  variable:
const int pathwidth = 100;
const char tabulator = '\t';
Here, pathwidth and tabulator are two typed constants. They are treated just
like regular variables except that their values cannot be modified after their definition

*/


//define identifier value example (**01**)
#include <iostream>
using namespace std;
#define PI 3.14159
#define NEWLINE '\n'
int main(){
  double r = 5.0; //radius
  double circle;
  circle = 2 * PI * r;
  cout << circle;
  cout << NEWLINE;
  return 0;
}

/*      ***NOTES***
The #define directive is not a C++ statement but a directive for the preprocessor;
therefore it assumes the entire line as the directive and does not require
a semicolon (;) at its end. If you append a semicolon character (;) at the end,
it will also be appended in all occurrences within the body of the program that
the preprocessor replaces.
*/
