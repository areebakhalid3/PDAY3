#include<iostream>
using namespace std;
main(){

int n;
cout << "Enter the number of sides of a polygon: ";
cin >> n;

int sumofangles;
sumofangles = (n-2)*180;
cout << "The sum of internal angles of a " << n << "-sided polygon is: " << sumofangles << " degrees";


}
