#include<iostream>
using namespace std;
main(){

float sizeofbag;
cout << "Enter the size of fertilizer bag in pounds: ";
cin >> sizeofbag;

float costofbag;
cout << "Enter the cost of bag: $";
cin >> costofbag;

float areacovered;
cout << "Enter the area in square feet covered by the bag : ";
cin >> areacovered;

float costoffertilizer;
costoffertilizer = costofbag/sizeofbag ;
cout << "The cost of fertilizer per pound is: $" << costoffertilizer <<endl;

float costpersqfoot;
costpersqfoot = costofbag/areacovered;
cout << "The cost of fertilizing the area per square foot is: $" << costpersqfoot;;


}