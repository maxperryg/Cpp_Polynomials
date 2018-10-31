//
//  main.cpp
//  Polynomial
//
//  Created by Maxwell Perry Grossman on 10/30/18.
//  Copyright © 2018 Maxwell Perry Grossman. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


//class Polynomial{
//private:
//    //if coefficient[3] is 5, that term willbe 5X^3
//    int coefficients[100];
//public:
//    Polynomial(){
//        for(int i=0;i<100; i++){
//            coefficients[i]=0;
//        }
//    }
//    Polynomial(string p){
//        for (int i=1; i<p.length(); i++) {
//            int degree;
//            stringstream(p.substr(i,1))>>degree;
//            int coef;
//            stringstream(p.substr(i-1,1))>>coef;
//            coefficients[degree]=coef;
//        }
//        for(int i=0; i<10; i++){
//            cout<<coefficients[i]<<"X"<<i<<endl;
//        }
//    }
//};

void constructPolynomial(int polynomial[], string line){
    for (int i=1; i<line.length(); i++) {
        int degree;
        stringstream(line.substr(i,1))>>degree;
        int coef;
        stringstream(line.substr(i-1,1))>>coef;
        polynomial[degree]=coef;
    }
}

int main() {
    string line;
    ifstream myfile ("/Users/MaxGrossman/Documents/C++WorkSpace/Polynomial/Polynomial/en.lproj/Numbers.txt");
    while(getline(myfile,line)){
        int left[100];
        int right[100];
        for(int i=0;i<100; i++){
            left[i]=0;
            right[i]=0;
        }
        constructPolynomial(left, line);
        for(int i=0; i<10;i++){
            cout<<left[i]<<"X"<<i<<endl;
        }
        getline(myfile,line);
        constructPolynomial(right, line);
    }
    myfile.close();
    
    return 0;
}
