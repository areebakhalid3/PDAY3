#include<iostream>
using namespace std;
main(){

string name;
cout << "Enter your name: ";
cin >> name;

float targetloss;
cout << "Enter the target weight loss: ";
cin >> targetloss;

float daysrequired;
daysrequired = 15*targetloss;
cout << name << " will need " << daysrequired << " days to lose " << targetloss << "kg of weight by following the doctor's suggestions.";


}