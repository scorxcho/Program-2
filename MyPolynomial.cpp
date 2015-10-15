#include "MyPolynomial.h"

MyPolynomial::MyPolynomial(){
    polyVector.push_back(0.0);
}

MyPolynomial::MyPolynomial(vector<float>& v){
    for(int i = 0; i < v.size(); i++){
        polyVector.insert(polyVector.begin(),(v[i]));
    }
}

MyPolynomial::MyPolynomial(const string& s){
    int stringIter = 0;
    int polyCount = 0;

    while(stringIter  < s.size()){
        bool valid = true;
        string temp;


        while(stringIter < s.size() && s[stringIter] != ' ' && valid){
            // Valid digit
            if(isdigit(s[stringIter])){
                temp += s[stringIter];
            }
            // Decimal point
            else if(s[stringIter] == '.'){
                temp += s[stringIter];
            }
            // Invalid character
            else{
                valid = false;
                while(stringIter < s.size() && s[stringIter] != ' '){
                    stringIter++;
                }
            }
            stringIter++;
        }

        if(!isdigit(s[stringIter]) || s[stringIter] == ' '){
            stringIter++;
        }

        if(valid){
            polyCount++;
            polyVector.insert(polyVector.begin(), atof(temp.c_str()));
        }
        else{
            cout << "WARNING: There is an invalid character" << endl;
        }
    }

    if(polyCount == 0){
        polyVector.push_back(0.0);
    }
}

MyPolynomial MyPolynomial::operator+(const MyPolynomial& s1){
    MyPolynomial sum;

    if( this->polyVector.size() > s1.polyVector.size() ){
        vector<float> temp(this->polyVector.size(), 0.0);
        sum.polyVector = temp;
    }
    else{
        vector<float> temp(s1.polyVector.size(), 0.0);
        sum.polyVector = temp;
    }

    for(int i = 0; i < sum.polyVector.size(); i++){
        if(this->polyVector.size() > i){
            sum.polyVector[i] += this->polyVector[i];
        }
        if(s1.polyVector.size() > i){
            sum.polyVector[i] += s1.polyVector[i];
        }
    }

    return sum;
}

MyPolynomial MyPolynomial::operator-(const MyPolynomial& s1){
    MyPolynomial difference;

    if( this->polyVector.size() > s1.polyVector.size() ){
        vector<float> temp(this->polyVector.size(), 0.0);
        difference.polyVector = temp;
    }
    else{
        vector<float> temp(s1.polyVector.size(), 0.0);
        difference.polyVector = temp;
    }

    for(int i = 0; i < difference.polyVector.size(); i++){

        difference.polyVector[i] = this->polyVector[i] - s1.polyVector[i];
    }

    return difference;
}

MyPolynomial MyPolynomial::operator*(float k){
    MyPolynomial product;
    product.polyVector = this->polyVector;
    for(int i = 0; i < this->polyVector.size(); i++){
        product.polyVector[i] = this->polyVector[i] * k;
    }

    return product;
}

MyPolynomial MyPolynomial::operator<(int k){
    MyPolynomial product;
    return product;
}

MyPolynomial MyPolynomial::operator*(const MyPolynomial& s1){
    MyPolynomial product;
    return product;
}

float MyPolynomial::operator()(float k){
    return 0.0;
}

ostream& operator<< (ostream& os, const MyPolynomial & s1){
    for(int i = 0; i < s1.polyVector.size(); i++){
        os << s1.polyVector[i] << " ";
    }
    return os;
}
