#include <bits/stdc++.h>
using namespace std;
void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
    if (n == 0) return;
    d %= n;
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}

void solve() {
    int n, x, y;
    if (!(cin >> n >> x >> y)) return;
    
    vector<int> v(n);
    deque<int> dq1, dq3;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i < x) dq1.push_back(v[i]);
        else if (i < y) arr.push_back(v[i]);
        else dq3.push_back(v[i]);
    }

    if (arr.empty()) {
        for(int i : dq1) cout << i << " ";
        for(int i : dq3) cout << i << " ";
        cout << endl;
        return;
    }
    int minele = *min_element(arr.begin(), arr.end());
    int ind = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == minele) {
            ind = i;
            break; 
        }
    }
    
    rotateArr(arr, ind);
    int arrmin = arr[0];

    bool flag1 = false;
    deque<int> temp_dq1;
    while (!dq1.empty()) {
        if (dq1.front() > arrmin) {
            flag1 = true;
            break; 
        }
        temp_dq1.push_back(dq1.front());
        dq1.pop_front();
    }
    if (flag1) {
        while (!dq1.empty()) {
            dq3.push_front(dq1.back());
            dq1.pop_back();
        }
    }
    dq1 = temp_dq1;
    if (!flag1) {
        while (!dq3.empty() && dq3.front() < arrmin) {
            dq1.push_back(dq3.front());
            dq3.pop_front();
        }
    }
    for (int val : dq1) cout << val << " ";
    for (int val : arr) cout << val << " ";
    for (int val : dq3) cout << val << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// Successfully Submitted