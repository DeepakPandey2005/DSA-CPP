#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

// Brute-force approach to find majority element
int bruteForce(vector<int> vec) {
    int n = vec.size();
    for (int val : vec) {
        int freq = 0;
        for (int el : vec) {
            if (val == el) {
                freq++;
            }
        }
        if (freq > n / 2) {
            return val;
        }
    }
    // Return -1 if no majority element is found
    return -1;
}

// Optimized approach to find majority element
int optimizedMajorElement(vector<int> vec) {
    sort(vec.begin(), vec.end());
    int freq = 1;
    int n = vec.size();
    for (int i = 1; i < n; i++) { // Start from 1 to avoid out-of-bounds
        if (vec[i] == vec[i - 1]) {
            freq++;
        } else {
            freq = 1;
        }
        if (freq > n / 2) {
            return vec[i - 1];
        }
    }
    // Return -1 if no majority element is found
    return -1;
}

int main() {
    vector<int> vec = {1, 2, 1, 3, 1, 2, 2, 2, 2};
    // int ans = bruteForce(vec);
    int ans = optimizedMajorElement(vec);
    cout<<"The majority element is "<<ans;
    return 0;
}
