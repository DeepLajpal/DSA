#include <iostream>
using namespace std;

int printArr(int arr[], int size)
{
    cout<<"Original Array : " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;

    return 0;
}
int ReverseArr(int arr[], int size)
{
    int arr2[size];
    int start = 0;
    cout<<"Reversed Array : " ;
    for (int i = size - 1; i >= 0; i--)
    {
        arr2[start] = arr[i]; //we can use built in Swap method, so we not to create an new array, syntax : swap(arr[start] , arr[i])
        cout << arr2[start] << " ";
        start++;
    }
    return 0;
}

int main()
{
    int size = 10;
    int arr[size] = {4, 85, 7, 96, 2, -58, 78, 94, 14, 1};

    printArr(arr, size);
    cout << endl;
    ReverseArr(arr, size);
}