#include <iostream>
#include <vector>
using namespace std;

void rearrange(vector<int>& arr) {
    vector<int> pos;
    vector<int> neg;

    // Step 1: Separate positive and negative
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    // Step 2: Merge alternately
    int i = 0, p = 0, n = 0;

    while(p < pos.size() && n < neg.size()) {
        arr[i++] = pos[p++];
        arr[i++] = neg[n++];
    }

    // Step 3: Add remaining elements
    while(p < pos.size()) {
        arr[i++] = pos[p++];
    }

    while(n < neg.size()) {
        arr[i++] = neg[n++];
    }
}

int main() {
    vector<int> arr = {1, -2, 3, -4, -1, 4};

    rearrange(arr);

    cout << "Rearranged array: ";
    for(int x : arr)
        cout << x << " ";

    return 0;
}