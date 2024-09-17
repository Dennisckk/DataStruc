#include <iostream>

using namespace std;

void sum(int n1, int n2, int& sum) {
   sum = n1 + n2;
}

int main() {
   //int feet, inch;
   //cout << "Enter feet = ";
   //cin >> feet;
   //cout << "Enter inch = ";
   //cin >> inch;

   //double cm = ((feet * 12) + inch) * 2.45;
   //cout << feet << " feet and " << inch << " inch = " << cm << " centimetres" << endl;

   //cout << endl;
   //return 0;

   //int number = 100;
   //while (number > 10) {
   //    cout << number << endl;
   //    number = number - 5;
   //}

   
	cout << "--- app.cpp ---" << endl;
   int answerBox;
   sum(10, 10, answerBox); //10 & 10 - pass by value; answerBox - pass by reference
	cout << "Sum = " << answerBox << endl;
	cout << "\n--- Program end! ---" << endl;
	return 0;
}

//int sum(int n1, int n2) {
//	return n1 + n2;
//}