#include <iostream>
#include <vector>
using namespace std;

class Bhatti {
    vector<int> v;
    vector<int> v2;

public:
    Bhatti(vector<int> v1, int sizeOfV2) : v(v1) {
        v2.resize(sizeOfV2);
    }

    void addInV(int v) {
        this->v.push_back(v);
        this->v.push_front(v);
        this->v.back();

        // v.begin();
        // v.end()-1;
        v[v.size()-1];

    }

    void removeFromV2(int index) {
        v2.erase(v2.begin() + index);
    }

    void print() {
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};