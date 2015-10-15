#include<vector>
#include<string>
#include<ostream>

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
    
};

ostream& operator<< (ostream& os, const MyPolynomial & s1);