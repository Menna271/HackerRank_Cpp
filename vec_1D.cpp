// https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int s, num, pos, start, last;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        cin >> num;
        v. push_back(num);
    }
    cin >> pos;
    v.erase(v.begin()+pos-1);

    cin >> start >> last;
    v.erase(v.begin()+start-1,v.begin()+last-1);

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
