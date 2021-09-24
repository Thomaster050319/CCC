//
// Created by tlee0 on 2021-07-29.
//

#include <iostream>

using namespace std;

int main(){
    int example[5]; // array of 5 integers
    example[0] = 2; // 0 is the first set of array in the c++
    example[4] = 4;

    cout << example[0] << '\n';

    for (int i = 0; i < 5; i++){
        example[i] = 2;
    }

    int* ptr = example; // int* ptr = example[0];
    *(ptr + 2) = 6;

    cout << *ptr << '\n';
    return 0;
}