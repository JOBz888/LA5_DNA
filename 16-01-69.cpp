#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // Create an array of integers
    int R1[12] = {170, 185, 180, 174, 172, 176, 170, 174, 170};
    int x = sizeof(R1) / sizeof(R1[0]);

    int W1[12] = {115, 108, 65, 57, 58, 97, 70, 55, 49};
    int y = sizeof(W1) / sizeof(W1[0]);

    string N1[12] = {"Job", "New", "Ja", "Volk", "Ken", "Game", "Pa", "Dream"};
    int z = sizeof(N1) / sizeof(N1[0]);

    sort(R1, R1 + x);
    for (int num : R1)
    {
        cout << num << "\n";
    }
    cout << "===========================" << endl;
    sort(R1, R1 + x, greater<int>());
    for (int num : R1)
    {
        cout << num << "\n";
    }
    cout << "===========================" << endl;
    sort(W1, W1 + y);
    for (int Num : W1)
    {
        cout << Num << endl;
    }
    cout << "===========================" << endl;
    sort(W1, W1 + x, greater<int>());
    for (int Num : W1)
    {
        cout << Num << endl;
    }
    cout << "===========================" << endl;
    for (const string &name : N1)
    {
        cout << name << endl;
    }
    cout << "===========================" << endl;
    sort(N1, N1 + z);
    for (const string &name : N1)
    {
        cout << name << endl;
    }
    return 0;
}
