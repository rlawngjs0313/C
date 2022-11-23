#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int _ = 0; _ < t; _++){
        int n, data;
        cin >> n;
        deque<int> L1;

        for (int i = 0; i < n; i++){
            cin >> data;
            L1.push_back(data);
        }

        int cnt = 0;
        for (auto i:L1){
            deque<int> L2(L1);
            L2.erase(L2.begin()+cnt);
            cout << i - *max_element(L2.begin(), L2.end()) << " ";
            cnt++;
        }
    }
}