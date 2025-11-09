#include <bits/stdc++.h>
using namespace std;

// self define datatype
class Node // also we can declare as struct but it's not standard because can't use the oop's features
{
public:
    int data;
    Node *next;

    // constructor function with two params
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    // constructor function with one params
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp; // replacing nullptr with next node address
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;

    while (temp)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int checkIfPresent(Node *head, int target)
{
    Node *temp = head;

    while (temp)
    {
        if (temp->data == target)
            return 1;
        temp = temp->next;
    }
    return 0;
}

int main()
{
    int data = 1;
    vector<int> arr = {12, 2, 4, 56};

    // // for testing one param constructor
    // Node *y = new Node(data);
    // cout << y->data;
    // cout << y->next;

    // // for testing two param constructor
    // Node *z = new Node(data, nullptr);
    // cout << z->data;
    // cout << z->next;

    // // For testing conversion from Arr -> LL
    Node *head = convertArr2LL(arr);
    // cout << head->data;

    // // For testing traversing LL
    // Node *temp = head;
    // while (temp)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    // // For testing the length func of LL
    // int cnt = lengthOfLL(head);
    // cout << "Length: " << cnt;

    // For Searching an elm in LL
    cout << checkIfPresent(head, 56);

    return 0;
}