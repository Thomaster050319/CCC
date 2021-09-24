//
// Created by tlee0 on 2021-03-11.
//

#include<iostream>
#include<string>

using namespace std;

int main(){
    string msg;
    getline(cin, msg); // get the whole line as the input
    int happy = 0;
    int sad = 0;
    for (int i = 0; i < (int) msg.length() - 3; i++) {
        if(msg.substr(i, 3) == ":-)"){
            happy++;
        } else if (msg.substr(i,3) == ":-("){
            sad++;
        }
    }
    if(happy > sad ){
        cout << "happy" << '\n';
    } else if (happy < sad) {
        cout << "sad" << '\n';
    } else if (happy == 0 && sad == 0){
        cout << "none" << '\n';
    } else if (happy == sad) {
        cout << "unsure" << '\n';
    }
    return 0;
}