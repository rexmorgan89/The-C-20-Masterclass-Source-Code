#include <iostream>
using namespace std;

int addNumbers( int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int multNumbers(int first_param, int second_param){
    int result = first_param * second_param;
    return result;
}

int main(){

    int first_number {13}; // Statement
    int second_number {7};

    cout << "First number : " << first_number << endl; // 13
    cout << "Second number : " << second_number << endl; // 7

    int sum = first_number + second_number;
    int product = first_number * second_number;
    cout << "Sum : " << sum << endl; // 20
    cout << "Product : " << product << endl; 

    sum = addNumbers(25,7);
    product = multNumbers(25,7);
    cout << "Sum : " << sum << endl; // 32
    cout << "Product : " << product << endl; 

    sum = addNumbers(30,54);
    product = multNumbers(30,54);
    cout << "Sum : " << sum << endl;
    cout << "Product : " << product << endl; 

    cout << "Sum : " << addNumbers(3,42) << endl;
    cout << "Product : " << multNumbers(3,42) << endl; 


    return 0;
}