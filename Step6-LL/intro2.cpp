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

// Insertion - 4 question
// 1) insertion on head
// 2) insertion on tail
// 3) insertion by position
// 4) insertion by value

// 1) insertion on head
Node *insertOnHead(Node *head, int val)
{
    if (head == nullptr)
        return nullptr;
    return new Node(val, head);
}

// Deletion - 4 question
// 1) Deletion on head
// 2) Deletion on tail
// 3) Deletion by position
// 4) Deletion by value

int main()
{

    return 0;
}