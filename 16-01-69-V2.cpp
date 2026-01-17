#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // Create an array of integers
    string N[12] = {"Job", "New", "Ja", "Volk", "Ken", "Game", "Pa", "Dream"};
    string n[12] = {"จ๊อบ", "นิว", "จา", "โฟก", "เคน", "เกม", "เชษฐ", "เป้", "ดรีม"};
    int z = sizeof(N) / sizeof(N[0]);

    cout << "===========================" << endl;
    for (const string &name : N)
    {
        cout << name << endl;
    }
    cout << "===========================" << endl;
    sort(N, N + z);
    for (const string &name : N)
    {
        cout << name << endl;
    }
    cout << "===========================" << endl;
    for (const string &name : n)
    {
        cout << name << endl;
    }
    cout << "===========================" << endl;
    sort(n, n + z);
    for (const string &name : n)
    {
        cout << name << endl;
    }

    return 0;
}
