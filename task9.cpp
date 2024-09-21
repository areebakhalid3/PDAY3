#include<iostream>
using namespace std;
main(){

int fourdigitno;
cout << "Enter a 4 digit number: ";
cin >> fourdigitno;

int digit1;
int digit2;
int digit3;
int digit4;

digit1 = fourdigitno%10;
int threedigitno = fourdigitno/10;

digit2 = (threedigitno)%10;
int twodigitno = threedigitno/10;

digit3 = (twodigitno)%10;
int onedigitno = twodigitno/10;

digit4 = (onedigitno)%10;

int sumofdigits = digit1+digit2+digit3+digit4;
cout << "Sum of individual digits: " << sumofdigits <<endl;






}