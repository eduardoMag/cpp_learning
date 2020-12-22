/*
The standard C++ library includes the header file iostream, where the standard
input and output stream objects are declared.

standard Output
By default, the standard output of a program is the screen, and the C++ stream
object defined to access it is cout. cout is used in conjunction with the
insertion operator, which is written as << (two "less than" signs).
examples:
cout << "Output sentence"; ~         prints Output sentence on screen
cout << 120;               ~         prints number 120 on screen
cout << x;                 ~         prints the content of x on screen
Whenever we want to use constant strings of characters we must enclose them between
double quotes (") so that they can be clearly distinguished from variable names.
For example:
cout << "Hello";  ~    prints Hello
cout << Hello;    ~    prints the content of Hello variable

The insertion operator (<<) may be used more than once in a single statement:
cout << "Hello, " << "I am " << "a C++ statement";
It is important to notice that cout does not add a line break after its output
unless we explicitly indicate it:
cout << "This is a sentence.";
cout << "This is another sentence.";
 **RESULT**
This is a sentence.This is another sentence.

even though we had written them in two different insertions into cout. In order
to perform a line break on the output we must explicitly insert a new-line character
into cout. In C++ a new-line character can be specified as \n (backslash, n):
cout << "First sentence.\n ";
cout << "Second sentence.\nThird sentence.";
 **RESULT**
First sentence.
Second sentence.
Third sentence.

Additionally, to add a new-line, you may also use the endl manipulator.
For example:
cout << "First sentence." << endl;
cout << "Second sentence." << endl;
 **RESULT**
First sentence.
Second sentence.

The endl manipulator produces a newline character, exactly as the insertion of
'\n' does, but it also has an additional behavior when it is used with buffered
streams: the buffer is flushed. Anyway, cout will be an unbuffered stream in most
cases, so you can generally use both the \n escape character and the endl manipulator
in order to specify a new line without any difference in its behavior


standard Input
The standard input device is usually the keyboard. Handling the standard input
in C++ is done by applying the overloaded operator of extraction (>>) on the cin
stream. The operator must be followed by the variable that will store the data that
is going to be extracted from the stream.
example:
int age;
cin >> age;
The first statement declares a variable of type int called age, and the second
one waits for an input from cin (the keyboard) in order to store it in this
integer variable.

      **TIP**
cin can only process the input from the keyboard once the RETURN key has been pressed.
Therefore, even if you request a single character, the extraction from cin will
not process the input until the user presses RETURN after the character has been
introduced

      **TIP**
You must always consider the type of the variable that you are using as a container
with cin extractions. If you request an integer you will get an integer, if you
request a character you will get a character and if you request a string of
characters you will get a string of characters

You can also use cin to request more than one datum input from the user:
cin >> a >> b;
is equivalent to:
cin >> a;
cin >> b;


cin and strings
We can use cin to get strings with the extraction operator (>>) as we do with
fundamental data type variables:
cin >> mystring;
However, as it has been said, cin extraction stops reading as soon as if finds
any blank space character, so in this case we will be able to get just one word
for each extraction. This behavior may or may not be what we want;
for example if we want to get a sentence from the user, this extraction operation
would not be useful. In order to get entire lines, we can use the function getline,
which is the more recommendable way to get user input with cin:
**SEE EXAMPLE (**01**)


stringstream
The standard header file <sstream> defines a class called stringstream that allows
a string-based object to be treated as a stream. This way we can perform extraction
or insertion operations from/to strings, which is especially useful to convert
strings to numerical values and vice versa
example:
string mystr ("1204");
int myint;
stringstream(mystr) >> myint;

Because we can use stringstream objects as if they were streams, we can extract
an integer from it as we would have done on cin by applying the extractor operator
(>>) on it followed by a variable of type int.
**SEE EXAMPLE (**02**)
      ***EXAMPLE (**02**) NOTES***
this method is usually preferred to get numerical values from the user in all
programs that are intensive in user input

*/


#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
//cin with strings (**01**)
string mystr;
cout << "what's your name? ";
getline (cin, mystr);
cout << "Hello " << mystr << ". \n";
cout << "what is your favorite color? ";
getline (cin, mystr);
cout << "I like " << mystr << " too!\n";
cout << "End of Example 1\n\n";

//stringstream (**02**)
string mystr2;
float price = 0;
int quantity = 0;
cout << "Enter price: ";
getline (cin, mystr2);
stringstream(mystr2) >> price;
cout << "Enter quantity: ";
getline(cin, mystr2);
stringstream(mystr2) >> quantity;
cout << "total price: " << price*quantity << endl;
cout << "End of Example 2\n\n";
return 0;
}
