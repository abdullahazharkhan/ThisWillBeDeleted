#include <iostream>
#include <vector>
using namespace std;

class xd
{
    int x;

public:
    xd(int x) : x(x) {}
};

int main()
{
    // vector<int> v = {1, 2, 3, 4, 5};
    // bool found = 0;
    // for(int i = 0; i < v.size(); i++)
    // {
    //     if(v[i] == 3)
    //     {
    //         found = 1;
    //         break;
    //     }
    // }

    // vector<string> s = {"zohib"};
    // for(int i = 0; i < 3; ++i) {
    //     string s1;
    //     cin >> s1;
    //     s.push_back(s1);
    // }

    // for (int i = 0; i < v.size(); ++i)
    // {
    //     cout << s[i] << endl;
    // }

    // vector<int> vec;
    // vec.push_back({1, 2, 3});

    // vector<xd> vec = {xd(1), xd(2), xd(3)};
    // vec.push_back(xd(4));
    // vec[4].x = 5;
    // vector<int> v(4);
    // vector<int> v4(5, 100);

    // for(int i = 0; i < v4.size(); i++)
    // {
    //     cout << v4[i] << endl;
    // }

    // vector<int> v5(4);
    // v5.resize(10);

    // vector< vector<int> > twoD(4, vector<int>(4));

    // vector<vector<int>> v(5, vector<int>(4));
    // v[4][4] = 4;

    vector<int> v = {1, 5, 6, 7, 52, 5, 2, 5, 2, 3};
    // for(int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // v.erase(v.begin() + 1, v.begin() + 5); // erases 5 [start, end)
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    v.insert(v.begin() + 2, 4, 10);
    // cout << endl;

    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << " ";
    }

    return 0;
}