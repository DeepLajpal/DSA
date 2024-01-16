#include <iostream>
using namespace std;

int main()
{
    int n, Result;
    cin >> n;
    switch (n >= 1)
    {
    case 0:
        cout << "Wrong Input";
        break;
    case 1:
        Result = n / 100;
        cout << "Number of 100 Notes: " << Result << endl;
        cout << Result;
        n = n - (Result * 100);
        cout << " Case 1 n: " << n << endl;

    case 2:
        if (n > 0)
        {
            Result = n / 50;
            cout << "Number of 50 Notes: " << Result << endl;
            n = n - (Result * 50);
        }
        cout << "Case 2 n: " << n << endl;

    case 3:
        if (n > 0)
        {
            Result = n / 20;
            cout << "Number of 20 Notes: " << Result << endl;
            n = n - (Result * 20);
        };
        cout << "Case 3 n: " << n << endl;

    case 4:
        if (n > 0)
        {
            Result = n / 1;
            cout << "Number of 1 Notes: " << Result << endl;
            n = n - (Result * 1);
        };
        cout << "n: " << n;
    }
}