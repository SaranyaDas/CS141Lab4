//Library
#include <iostream>
using namespace std;
//Conversion of days into years, weeks and days
int main() {
int d, y, w, x, v;
cout <<"To convert a given number of day(s) into year(s), week(s) and day(s)." << endl;
//Asking for input
cout <<"Enter number of day(s): ";
cin >> d;
//Converting
y = d/365;
x = d%365;
w = x/7;
v = x%7;
//Displaying results
cout << d << " day(s) = " << y << " year(s), " << w << " week(s) and " << v << " day(s)." << endl;
return 0;
}


