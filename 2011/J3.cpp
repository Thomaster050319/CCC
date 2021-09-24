//
// Created by tlee0 on 2021-09-23.
//


/*In a sumac sequence, t1,t2,…,tm, each term is an integer greater than or equal 0. Also, each term, starting with the third, is the difference of the preceding two terms (that is, tn+2=tn−tn+1 for n≥1). The sequence terminates at tm if tm−1<tm.

For example, if we have 120 and 71, then the sumac sequence generated is as follows:

120,71,49,22,27.*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t1, t2;
    cin >> t1 >> t2;

    vector<int> num_set;
    vector<int> size;

    num_set.push_back(t1);
    num_set.push_back(t2);

    int index = 0;
        if (num_set[index] > num_set[index++]){
            size.push_back(1);
            index++;
        } else{
            cout << size.size() << endl;

    }

    return 0;
}