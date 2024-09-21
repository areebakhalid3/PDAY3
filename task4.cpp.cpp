#include<iostream>
using namespace std;
main(){

float impostorcount;
float playercount;

cout << "Enter Impostor Count: ";
cin >> impostorcount;

cout << "Enter Player Count:";
cin >> playercount;

int impostorchance;
impostorchance =100*(impostorcount/playercount);
cout << "Chances of being the impostor are:" << impostorchance << "%";


}