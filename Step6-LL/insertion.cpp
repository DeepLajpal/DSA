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
    return new Node(val, head);
}

// 2) insertion on tail
Node *insertOnTail(Node *head, int val)
{
    if (head == nullptr)
    {
        return head;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    temp->next = newNode;
    return head;
}

// 3) insertion by position
Node *insertionByPosition(Node *head, int pos, int val)
{
    if (head == nullptr)
    {
        if (pos == 1)
        {
            return new Node(val);
        }
        else
        {
            return head;
        }
        return head;
    }
    Node *temp = head;

    // insertion on head
    if (pos == 1)
    {
        return new Node(val, head);
    }
    int cnt = 0;

    // handle the elm insertion pos > 1
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == pos - 1)
        {
            Node *newNode = new Node(val, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }

    return head;
}
// 4) insertion by val
Node *insertionBeforeEl(Node *head, int el, int val)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    Node *temp = head;

    // insertion on head
    if (head->data == el)
    {
        return new Node(val, head);
    }

    // handle the elm insertion el > 1
    while (temp->next != nullptr)
    {
        if (temp->next->data == el)
        {
            Node *newNode = new Node(val, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }

    return head;
}

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *temp = head;
    int n = arr.size();
    int i = 1;
    while (i < n)
    {
        temp->next = new Node(arr[i]);
        temp = temp->next;
        i++;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Deletion - 4 question
// 1) Deletion on head
// 2) Deletion on tail
// 3) Deletion by position
// 4) Deletion by value

int main()
{
    vector<int> arr = {4, 6, 7, 10};
    Node *head = convertArr2LL(arr);
    cout << "Original LL: ";
    print(head);

    cout << "After Insertion on head: ";
    head = insertOnHead(head, 100);
    print(head);

    cout << "After Insertion on tail: ";
    head = insertOnTail(head, 200);
    print(head);

    cout << "After Insertion by position: ";
    head = insertionByPosition(head, 7, 300);
    print(head);

    cout << "After Insertion val Before El: ";
    head = insertionBeforeEl(head, 200, 400);
    print(head);

    return 0;
}