#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int _ = 0; _ < t; _++){
        int n;
        cin >> n;
        deque<int> L1(n);

        for (int i = 0; i < n; i++){
            cin >> L1[i];
        }

        deque<int>::iterator iter;
        for (iter = L1.begin(); iter != L1.end(); iter++){
            deque<int> temp(L1);
            temp.erase(iter);
            cout << *iter - *max_element(temp.begin(), temp.end()) << " ";
        }
    }
}