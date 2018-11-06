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
    for (int i=1; i<line.length(); i+=2) {
        int degree;
        stringstream(line.substr(i,1))>>degree;
        int coef;
        stringstream(line.substr(i-1,1))>>coef;
        polynomial[degree]=coef;
    }
}

void printPoly(int polynomial[]){
    stringstream convert;
    string ans="";
    for(int i = 99; i>=0; i--){
        if(polynomial[i] == 0){
            continue;
        }
        else if (polynomial[i] == 1){
            convert<<"+ X"<<i;
        }
        else if (i==1){
            convert<<"+"<<polynomial[i]<<"X";
        }
        else if (i==0){
            convert<<"+"<<polynomial[i];;
        }
        else{
            convert<<"+"<<polynomial[i]<<"X"<<i;
        }
    }
    
    cout<<convert.str()<<endl;
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
        getline(myfile,line);
        constructPolynomial(right, line);
        
        printPoly(left);
        printPoly(right);
    }
    myfile.close();
    
    return 0;
}
