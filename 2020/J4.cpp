//
// Created by tlee0 on 2021-02-22.
//

#include <iostream>

using namespace std;

int main(){

    string letters = "LMMMS";


    int lCount = 0, mCount = 0;
    for(int x = 0; x < letters.length(); x++){
        if(letters[x] == 'L')
            lCount++;
        else if(letters[x] == 'M')
            mCount++;

    }

    int section1Ems = 0, section1Esses = 0;


    for(int x = 0; x < lCount; x++){

        if(letters[x] == 'M')
            section1Ems++;
        else if(letters[x] == 'S')
            section1Esses++;

    }

    int section2Els = 0, section2Esses = 0;
    for(int x = lCount; x < lCount+mCount; x++){
        if(letters[x] == 'L')
            section2Els++;
        else if(letters[x] == 'S')
            section2Esses++;
    }
    int section3Els = 0, section3Esses = 0;
    for(int x = lCount; x < lCount+mCount; x++){
        if(letters[x] == 'L')
            section3Els++;
        else if(letters[x] == 'S')
            section3Esses++;
    }

    int swaps = 0;
    if (section1Esses != 0 && section3Els != 0){
        if(section1Esses == section3Els){
            swaps += section3Els;
            section1Esses = 0;
            section3Els = 0;
        }
        else if(section1Esses < section3Els){
            swaps += section1Esses;
            section3Els -= section1Esses;
            section1Esses = 0;
        }
        else {
            swaps += section3Els;
            section1Esses -= section3Els;
            section3Els = 0;
        }
    }
    if (section1Esses != 0 && section2Els != 0){
        if(section1Esses == section2Els){
            swaps += section2Els;
            section1Esses = 0;
            section2Els = 0;
        }
        else if(section1Esses < section2Els){
            swaps += section1Esses;
            section2Els -= section1Esses;
            section1Esses = 0;
        }
        else {
            swaps += section2Els;
            section1Esses -= section2Els;
            section2Els = 0;
        }
    }
    if (section2Esses != 0 && section3Els != 0){
        if(section2Esses == section3Els){
            swaps += section3Els;
            section2Esses = 0;
            section3Els = 0;
        }
        else if(section2Esses < section3Els){
            swaps += section2Esses;
            section3Els -= section2Esses;
            section2Esses = 0;
        }
        else {
            swaps += section3Els;
            section2Esses -= section3Els;
            section3Els = 0;
        }
    }

    int leftovers = (section1Ems + section1Esses + section2Els + section2Esses + section3Els + section3Esses) / 3;
    cout<<swaps;
    return 0;


}