#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum, subtract,multiply,division ;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
    
    subtract=num1-num2;
    multiply=num1*num2;
    division=num1/num2;
    sum = num1 + num2;
    cout<<"----------------------------"<<endl;
    cout << "Sum = " << sum<<endl;
    cout << "Subtarct = " << subtract<<endl;
    cout << "Multiply = " <<multiply <<endl;
    cout << "Division = " << division<<endl;

    return 0;
}