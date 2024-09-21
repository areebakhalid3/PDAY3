#include<iostream>
using namespace std;
main(){

int sqmetres;
cout << "Number of sq metres you can paint: ";
cin >> sqmetres;

int w;
cout << "Width of a single wall(in metres): ";
cin >> w;

int h;
cout << "Height of a single wall(in metres): ";
cin >> h;


int walls;
walls = sqmetres/(w*h);
cout << "Number of walls you can paint: " << walls;

}