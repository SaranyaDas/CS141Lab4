//Library
#include <iostream>
using namespace std;
//Conversion of temperature in Celsius to Fahrenheit
int main() {
double C, F;
cout <<"To convert temperature in Celsius to Fahrenheit." << endl;
//Asking for input
cout <<"Enter temperature in Celsius: ";
cin >> C;
//Converting
F = (9*C)/5 + 32;
//Displaying results
cout << C << "ºC in Fahrenheit = " << F << " ºF." << endl;
return 0;
} 

