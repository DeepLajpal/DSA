#include <iostream>
using namespace std;

void countFrequency(int arr[], int n)
{
    bool visited[n] = {false}; // To track visited elements
    pair<int, int> highest = {0, 0};
    pair<int, int> lowest = {0, INT_MAX};

    for (int i = 0; i < n; i++)
    {
        if (visited[i]) // Skip already counted elements
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = true; // Mark duplicate as visited
            }
        }

        // Print the element and its frequency
        if (count > highest.second)
        {
            highest.first = arr[i];
            highest.second = count;
        }
        if (count < lowest.second)
        {
            lowest.first = arr[i];
            lowest.second = count;
        }
        cout << arr[i] << " occurs " << count << " times\n";
    }
    cout << endl;
    cout << "Highest Frequency Element: " << highest.first << " occurs " << highest.second << " times\n";
    cout << "Lowest Frequency Element: " << lowest.first << " occurs " << lowest.second << " times\n";
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    countFrequency(arr, n);

    return 0;
}
