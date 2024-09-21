#include<iostream>
using namespace std;
main(){

float initialvelocity;
float time;
float acceleration;

cout << "Enter initial velocity(m/s): ";
cin >> initialvelocity;

cout << "Enter acceleration(m/s^2): ";
cin >> acceleration;

cout << "Enter time(s): ";
cin >> time;

float finalvelocity;
finalvelocity = initialvelocity + (acceleration*time);
cout << "Final velocity(m/s) is: " << finalvelocity;

}