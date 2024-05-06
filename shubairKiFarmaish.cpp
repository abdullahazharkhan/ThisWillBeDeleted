#include <iostream>
using namespace std;

int main() {
    int x;
    try {
        cin >> x;
        if(x < 0) {
            throw x;
        } else if (x >= 10) {
            throw "larger than 10";
        }
    } 
    catch(int x) {
        cout << "Negative number: " << x << endl;
    } catch(string msg) {
        cout << msg << endl;
    } catch(...) {
        cout << "smth is fishy" << endl;
    }
    return 0;
}