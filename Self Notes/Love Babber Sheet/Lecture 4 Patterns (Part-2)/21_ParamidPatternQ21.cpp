//    1
//   121
//  12321
// 1234321

#include <iostream>
using namespace std;

int main()
{
    int n, row = 1;
    cin >> n;
    int count = 1;

    while (row <= n)
    {
        // loop for the space
        int space = n - row;
        while (space)
        {
            cout << ' ';
            space--;
        }

        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }
            int start = row - 1;
            while (start)
            {
                cout <<start;
                start--;
            }
      

        cout << endl;
        row++;
    }
}
