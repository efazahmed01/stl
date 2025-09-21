#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ✅ Declare vector of size 100, filled with 5
    vector<int> v(100, 5);

    // ✅ Add element at the end
    v.push_back(100);

    // ✅ Remove last element
    v.pop_back();

    // ✅ Print current size
    cout << "Size: " << v.size() << endl;

    // ✅ Insert 910 at index 91
    v.insert(v.begin() + 91, 910);

    // ✅ Erase element at index 91
    v.erase(v.begin() + 91);

    // ✅ Erase a range of elements (from index 2 to 49)
    v.erase(v.begin() + 2, v.begin() + 50);

    // ✅ Find first occurrence of 5
    auto it = find(v.begin(), v.end(), 5);
    if (it != v.end()) {
        cout << "Found value: " << *it << endl;                      // Access the value
        cout << "Found at index: " << it - v.begin() << endl;        // Get index
    } else {
        cout << "Value 5 not found!" << endl;
    }

    // ✅ Binary search related
    auto lb = lower_bound(v.begin(), v.end(), 5);  // first index where value >= 5
    auto ub = upper_bound(v.begin(), v.end(), 5);  // first index where value > 5

    cout << "Lower bound index of 5: " << lb - v.begin() << endl;
    cout << "Upper bound index of 5: " << ub - v.begin() << endl;

    // ✅ Count number of occurrences of 5
    int cnt = count(v.begin(), v.end(), 5);
    cout << "Total 5s: " << cnt << endl;

    // ✅ Reverse the entire vector
    reverse(v.begin(), v.end());

    // ✅ Replace all 5s with 100
    replace(v.begin(), v.end(), 5, 100);

    // ✅ Optional: clear all elements
    // v.erase(v.begin(), v.end());
    // cout << "After erase all, size: " << v.size() << endl;

    // ✅ Print final vector state (optional)
    cout << "Final vector: ";
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
