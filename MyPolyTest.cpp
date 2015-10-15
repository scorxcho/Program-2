#include "MyPolynomial.h"
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream input;
    input.open("MyPolyTest.txt");

    if(!input){
        cout << "ERROR" << endl;
        return -1;
    }


    string buffer;
    getline(input, buffer);
    MyPolynomial f1(buffer);

    getline(input, buffer);
    MyPolynomial f2(buffer);

    getline(input, buffer);
    MyPolynomial f3(buffer);

    getline(input, buffer);
    MyPolynomial f4(buffer);

    getline(input, buffer);
    MyPolynomial f5(buffer);

    cout << f1 << endl;
    cout << f2 << endl;
    cout << f3 << endl;
    cout << f4 << endl;
    cout << f5 << endl;

    cout << f1 + f2 << endl;
    cout << f2 + f3 << endl;
    cout << f3 + f4 << endl;
    cout << f4 + f5 << endl;

    cout << f1 - f2 << endl;
    cout << f2 - f3 << endl;
    cout << f3 - f4 << endl;
    cout << f4 - f5 << endl;

    int k1, k2, k3, k4, k5;

    input >> k1;
    cout << f1(k1) << endl;

    input >> k2;
    cout << f2(k2) << endl;

    input >> k3;
    cout << f3(k3) << endl;

    input >> k4;
    cout << f4(k4) << endl;

    input >> k5;
    cout << f5(k5) << endl;

    cout << k1 * f1 << endl;
    cout << k2 * f2 << endl;
    cout << k3 * f3 << endl;
    cout << k4 * f4 << endl;
    cout << k5 * f5 << endl;



    return 0;
}
