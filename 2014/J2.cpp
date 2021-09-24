
//
// Created by tlee0 on 2021-04-11.
//
#include <iostream>
#include <string>
using namespace std;

int main(){
    int v;
    string votes;
    cin >> v >> votes;
    int countA = 0;
    for(int i = 0; i < v; i++) {
        if (votes[i] == 'A') {
            countA++;
        }
    }
    int countB = v - countA;
    if (countB == countA){
        cout<<"Tie"<<'\n';
    }
    else if (countB < countA){
        cout<<"A"<<'\n';
    }
    else {
        cout<<"B"<<'\n';

    }




    return 0;
}

