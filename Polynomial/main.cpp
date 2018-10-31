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


class Polynomial{
private:
    //if coefficient[3] is 5, that term willbe 5X^3
    int coefficients[100];
public:
    Polynomial(){
        for(int i=0;i<100; i++){
            coefficients[i]=0;
        }
    }
    Polynomial(string p){
        
        for (int i=1; i<p.length(); i++) {
            int degree;
            stringstream(p.substr(i,1))>>degree;
            int coef;
            stringstream(p.substr(i-1,1))>>coef;
            coefficients[degree]=coef;
        }
        cout<<coefficients;
    }
};

int main() {
    string line;
    ifstream myfile ("Numbers.txt");
    if(myfile.is_open()){
        while(getline(myfile,line)){
            Polynomial left(line);
            getline(myfile,line);
            Polynomial right(line);
        }
        myfile.close();
    }
    
    return 0;
}
