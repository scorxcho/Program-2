#include<vector>
#include<string>
#include<ostream>
#include<sstream>
#include<cctype>
#include<iostream>
#include<cstdlib>

using namespace std;

class MyPolynomial{
public:
    MyPolynomial();
    MyPolynomial(vector<float>& v);
    MyPolynomial(const string& s);
    MyPolynomial operator+(const MyPolynomial& s1);
    MyPolynomial operator-(const MyPolynomial& s1);
    MyPolynomial operator*(float k);
    MyPolynomial operator<(int k);
    MyPolynomial operator*(const MyPolynomial& s1);
    float operator()(float k);
private:
    vector<float> polyVector;
    friend ostream& operator<< (ostream& os, const MyPolynomial & s1);

};

ostream& operator<< (ostream& os, const MyPolynomial & s1);
