#include "MyPolynomial.h"
#include<iostream>

using namespace std;

int main(){
    MyPolynomial test1("1 3 10 2");
    MyPolynomial test2("20 100 34.5 310.6");

    MyPolynomial sum;
    sum = test1 * 4;

    cout << sum << endl;

    return 0;
}
