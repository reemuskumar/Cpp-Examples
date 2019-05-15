#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

template <typename func>
vector<int> filter(vector<int> &v, func f) {
    vector<int> res;
    
    for(int x : v) {
        if(f(x)) res.push_back(x);
    }
    return res;
}

void display(vector<int> &v) {
    //for(int x : v) {
    //    cout << x << " ";
    //}
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main()
{
    vector<int> range;
    vector<int> res;
    
    for (int i = 0; i < 100; i++)
        range.push_back(i);
    res = filter(range, [](int x) {return (x % 2) == 0;});
    display(res);
    
    res = filter(range, [](int x) {return (x % 3) == 0;});
    display(res);
    
    res = filter(range, [](int x) {return (x % 5) == 0;});
    display(res);
    
    return 0;    
}
