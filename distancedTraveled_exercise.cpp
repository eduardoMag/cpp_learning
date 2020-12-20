//write a program that tells
//the distance traveled in given time

#include <iostream>
using namespace std;
int main(){
    int time, speed, distance;
    cout << "Please enter Speed: " << endl;
    cin >> speed;
    cout << "Please enter time (in minutes) traveled: " << endl;
    cin >> time;
    distance = speed * time;
    cout << "The distance traveled was: " << distance << endl;
return 0;
    }
