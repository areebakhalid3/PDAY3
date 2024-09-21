#include<iostream>
using namespace std;
main(){

int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15;
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;
cout << "Enter third number: ";
cin >> num3;
cout << "Enter fourth number: ";
cin >> num4;
cout << "Enter fifth number: ";
cin >> num5;
cout << "Enter sixth number: ";
cin >>  num6;
cout << "Enter seventh number: ";
cin >> num7;
cout << "Enter eighth number: ";
cin >> num8;
cout << "Enter ninth number: ";
cin >> num9;
cout << "Enter tenth number: ";
cin >> num10;
cout << "Enter eleventh number: ";
cin >> num11;
cout << "Enter twelfth number: ";
cin >> num12;
cout << "Enter thirteenth number: ";
cin >> num13;
cout << "Enter fourteenth number: ";
cin >> num14;
cout << "Enter fifteenth number: ";
cin >> num15;

int sum;
sum = num1+num2+num3+num4+num5;
int product;
product = num6*num7*num8*num9*num10;
int diff;
diff = num11-num12-num13-num14-num15;

int sum2;
sum2 = sum + product;

int finalresult;
finalresult = sum2-diff;

cout << "The final result is: " << finalresult;



}