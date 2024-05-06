#include <iostream>
#include <vector>
using namespace std;

string parseData()
{
    string s;
    try
    {
        cin >> s;
        if (s == "bhatti")
        {
            throw s;
        }

        return "bhatti nhi hai";
    }
    catch (string bhatti)
    {
        cout << "Bhatti is here" << endl;
    }

    cout << "bhatti pakra gya" << endl;
}

void processData()
{
    try
    {
        string s = parseData();
        if (s == "bhatti pakra gya")
        {
            throw s;
        }

        return "bhatti nhi hai";
    }
    catch (string bhatti)
    {
        cout << "Bhatti is here" << endl;
    }

    cout << "bhatti dubara pakra gya" << endl;
}