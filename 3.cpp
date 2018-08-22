//Library
#include <iostream>
using namespace std;
//Conversion of temperature in Fahrenheit to Celsius
int main() {
double C, F;
cout <<"To convert temperature in Fahrenheit to Celsius." << endl;
//Asking for input
cout <<"Enter temperature in Fahrenheit: ";
cin >> F;
//Converting
C = (5*(F - 32))/9;
//Displaying results
cout << F << "ºF in Celsius = " << C << " ºC." << endl;
return 0;
} 

