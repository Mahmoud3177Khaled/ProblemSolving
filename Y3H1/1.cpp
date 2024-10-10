#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long Bsearch(vector<long long> &arr, long long size, long long target) {

    long long left = 0, right = size - 1;
    double mid = 0;

    while (left <= right) {

        mid = ceil(left + (right - left) / 2.0);
        // cout << "\n--" << mid << "--\n";

        // if(arr[mid] == target) {
        //     return mid;
        // } 
        // else 
        if(arr[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }


    }

    return mid;
    
}

int main() {
    // cout << "hello world" << endl;

    long long a = 0, b = 0, x = 0, c = 0;

    cin >> a >> b;

    vector<long long> a1;
    vector<long long> a2;

    

    // multiset<long long> a1;
    // set<long long> a2;
    

    for(long long i = 0; i < a; i++) {
        cin >> x;
        // a1.insert(x);
        a1.push_back(x);
    }

    for(long long i = 0; i < b; i++) {
        cin >> x;
        // a2.insert(x);
        a2.push_back(x);
    }

    sort(a1.begin(), a1.end());
    // sort(a2.begin(), a2.end());

    for (long long i = 0; i < b; i++)
    {
        x = Bsearch(a1, a, a2[i]);

        if(a1[x] > a2[i]) {
            cout << x << " ";
        } 
        else {
            cout << x+1 << " ";
        }
        
        
    }


    
    
    // for(auto i = a1.begin(); i != a1.end(); i++) {
    //     cout << *i;
    // }

    // for(auto i = a2.begin(); i != a2.end(); i++) {
    //     cout << *i;
    // }

}