#include <iostream>

using namespace std;

int main(){
    
    cout << "Enter first integer: e.g. 2 " << endl;

   int num1, num2, num3;
   cin >> num1;
   
   cout << "Enter second integer: e.g. 3" << endl;
   cin >> num2;

   cout << "Enter third integer: e.g. 4" << endl;
   cin >> num3;

   if (num1 <= num2 && num2 <= num3) {
    cout << "In order: " << num1 << num2 << num3<< endl;
   } else 
    cout << "Not in order: " << num1 << num2 << num3 << endl;

    return 0;
   
}