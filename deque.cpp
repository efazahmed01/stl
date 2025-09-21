#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ✅ Declare deque with 100 elements initialized to 5
    deque<int> dq(100, 5);

    // ✅ Add element at the back
    dq.push_back(100);

    // ✅ Remove last element
    dq.pop_back();

    // ✅ Add element at the front (deque supports this)
    dq.push_front(200);

    // ✅ Remove element from front
    dq.pop_front();

    // ✅ Print current size
    cout << "Size: " << dq.size() << endl;

    // ✅ Insert at specific position (e.g., index 91)
    dq.insert(dq.begin() + 91, 910);

    // ✅ Erase a single element at index 91
    dq.erase(dq.begin() + 91);

    // ✅ Erase a range of elements (e.g., index 2 to 49)
    dq.erase(dq.begin() + 2, dq.begin() + 50);

    // ✅ Find first occurrence of 5
    auto it = find(dq.begin(), dq.end(), 5);
    if (it != dq.end()) {
        cout << "Found value: " << *it << endl;
        cout << "Found at index: " << it - dq.begin() << endl;
    } else {
        cout << "Value 5 not found!" << endl;
    }

    // ✅ Binary search (only works if sorted)
    sort(dq.begin(), dq.end()); // binary search করার আগে sort করা লাগবে
    auto lb = lower_bound(dq.begin(), dq.end(), 5);
    auto ub = upper_bound(dq.begin(), dq.end(), 5);

    cout << "Lower bound index of 5: " << lb - dq.begin() << endl;
    cout << "Upper bound index of 5: " << ub - dq.begin() << endl;

    // ✅ Count occurrences of 5
    int cnt = count(dq.begin(), dq.end(), 5);
    cout << "Total 5s: " << cnt << endl;

    // ✅ Reverse the deque
    reverse(dq.begin(), dq.end());

    // ✅ Replace all 5s with 100
    replace(dq.begin(), dq.end(), 5, 100);

    // ✅ Check if empty
    if (dq.empty()) {
        cout << "Deque is empty!" << endl;
    } else {
        cout << "Deque is not empty!" << endl;
    }

    // ✅ Clear the deque (remove all elements)
    dq.clear();

    cout << "Size after clear: " << dq.size() << endl;

    return 0;
}
