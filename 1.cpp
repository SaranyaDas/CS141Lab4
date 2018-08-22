//Library
#include <iostream>
using namespace std;
//Conversion of length in centimeters to meters and kilometers
int main() {
double c, m, k;
cout <<"To convert length in centimeters to meters and kilometers." << endl;
//Asking for input
cout <<"Enter length in centimeters: ";
cin >> c;
//Converting
m = c/100;
k = m/1000;
//Displaying results
cout << c << " cm in meters = " << m << " m." << endl;
cout << c << " cm in kilometers = " << k << " km." << endl;
return 0;
}


