#include<iostream>
using namespace std;
main(){

int minutes;
cout << "Enter number of minutes: ";
cin >> minutes;

int frames;
cout << "Enter frames per second: ";
cin >> frames;

int totalframes;
totalframes = (minutes*60)*frames;
cout << "Total Number of Frames: " << totalframes;


}