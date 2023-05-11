// Coornidate Compression by phone64bit
#include <bits/stdc++.h>
using namespace std;

vector<int> number = {5, 1, 3, 9, 4};
vector<pair<int, int>> val = {{5, 0}, {1, 1}, {3, 2}, {9, 3}, {4, 4}};
// First Element is vector value and Second Element is vector index.

int main() {
    sort(val.begin(), val.end()); // We sort the pair vector average case is O(N*logN) and worst case is O(N^2).
    vector<int> cc(val.size()); // Initialize the coornidate compression vector to get the compressed index in O(1).
    for(int i = 0, idx = 0; i < val.size(); i++) { // Time complexity is O(N)
        if( i > 0 && val[i].first != val[i-1].first ) idx++; // If previous vector value is as same as current vector value then it's the same value.
        cc[val[i].second] = idx;
    };
    for(int i=0; i<number.size(); i++) { 
        printf("%d\t->\t%d\n", number[i], cc[i]);
    };
    return 0;
};

// Summary : Time complexity is O(N) for building vector of compressed index.
//           Space complexity is O(N).
