/*
* number2.cpp
* Name: [Uteteng Esther ushang]
* Department: [Computer Science]
* Matric No: [45307327EF]
* A Program that reads in two integer and dertemines  
* and prints if the first is multiple of the second 
*
* Stub file to enable you complete assignment#1-question#2
*/
#include <iostream>

using namespace std;

int main()
  {
 int number1, number2;

 cout << "Enter two integers: ";
 cin >> number1 >> number2;

 if ( number1 % number2 == 0 )
 cout << number1 << " is a multiple of " << number2 << endl;

 if ( number1 % number2 != 0 )
 cout << number1 << " is not a multiple of " << number2 << endl;

 return 0;
 }


