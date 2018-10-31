//
//  main.cpp
//  Polynomial
//
//  Created by Maxwell Perry Grossman on 10/30/18.
//  Copyright © 2018 Maxwell Perry Grossman. All rights reserved.
//

#include <iostream>
#include <fstream>
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
};

int main() {
    ofstream myfile;
    myfile.open("Numbers.txt");
    
    return 0;
}
