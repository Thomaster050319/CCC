# include <iostream>

using namespace std;

int main(){
    int n1, n2, n3, n4;
    cin>> n1>> n2>> n3>> n4;
    if ((n4 == 8 || n4 == 9) && (n1 == 8 || n1 == 9) && (n2 == n3)) {
        cout << "ignore";
    } else {
        cout<<"answer";
    }
    return 0;
}