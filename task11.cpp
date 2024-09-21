#include<iostream>
using namespace std;
main(){

int age;
int move;

cout << "Enter the person's age: ";
cin >> age;
cout << "Enter the number of times they have moved: ";
cin >> move;

int average;
average = age/(move+1);

cout << "Average number of years lived in the same house: " << average ;


}