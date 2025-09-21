#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declare list with 100 elements initialized to 5
    list<int> l(100, 5);

    // push_back - last এ add করা হয়
    l.push_back(100);

    // pop_back - last element remove করা হয়
    l.pop_back();

    // push_front - first এ add করা যায়, vector এ নেই
    l.push_front(200);

    // pop_front - first element remove করা হয়
    l.pop_front();

    // size print করা
    cout << "Size: " << l.size() << endl;

    // iterator দিয়ে insert করা (e.g. 91st position এ)
    auto it = l.begin();
    advance(it, 91); // iterator কে 91 ধাপে move করলাম
    l.insert(it, 910);

    // insert করার পরে erase করতে হবে একইভাবে
    it = l.begin();
    advance(it, 91);
    l.erase(it);

    // range erase (2 থেকে 49 পর্যন্ত)
    auto it1 = l.begin();
    auto it2 = l.begin();
    advance(it1, 2);
    advance(it2, 50);
    l.erase(it1, it2);

    // find value 5
    auto find_it = find(l.begin(), l.end(), 5);
    if (find_it != l.end()) {
        cout << "Found value: " << *find_it << endl;
        // distance দিয়ে position পাওয়া যাবে
        cout << "Found at index: " << distance(l.begin(), find_it) << endl;
    }

    // list এর জন্য std::sort() ব্যবহার করা যায় না
    // তাই নিজস্ব sort member function ব্যবহার করতে হবে
    l.sort();

    // lower_bound, upper_bound কাজ করে না কারণ random access iterator লাগে
    // তাই binary search STL algorithms list এ ব্যবহার করা যায় না

    // count occurrences of 5
    int cnt = count(l.begin(), l.end(), 5);
    cout << "Count of 5: " << cnt << endl;

    // reverse the list
    l.reverse();

    // replace 5 with 100
    replace(l.begin(), l.end(), 5, 100);

    // check if empty
    if (l.empty()) {
        cout << "List is empty!" << endl;
    } else {
        cout << "List is not empty!" << endl;
    }

    // clear all elements
    l.clear();

    cout << "Size after clear: " << l.size() << endl;

    return 0;
}
