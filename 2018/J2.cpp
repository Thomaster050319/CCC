//
// Created by tlee0 on 2021-03-04.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string yesterday;
    cin >> yesterday;

    string today;
    cin >> today;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (yesterday[i] == 'C' && yesterday[i] == today[i]){
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}
