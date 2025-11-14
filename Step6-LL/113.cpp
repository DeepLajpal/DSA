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

// deletion - 4 question
// 1) deletion on head
// 2) deletion on tail
// 3) deletion by position
// 4) deletion by value

// 1) deletion on head
Node *deletionOnHead(Node *head)
{
    if (head == nullptr)
        return nullptr;
    if (head->next == nullptr)
    {
        free(head);
        return nullptr;
    }

    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

// 2) deletion on tail
Node *deletionOnTail(Node *head)
{
    if (head == nullptr)
    {
        return head;
    }
    if (head->next == nullptr)
    {
        free(head);
        return nullptr;
    }

    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    free(temp->next->next);
    temp->next = nullptr;
    return head;
}

// 3) deletion by position
Node *deletionByPosition(Node *head, int pos)
{
    if (head == nullptr)
    {
        return head;
    }

    // deletion on head
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    // handle the elm deletion pos > 1
    Node *temp = head;
    Node *prev = nullptr;
    int cnt = 0;

    while (temp != nullptr)
    {
        cnt++;
        if (cnt == pos)
        {
            prev->next = temp->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}
// 4) deletion by val
Node *deletionByVal(Node *head, int val)
{
    if (head == nullptr)
    {
        return head;
    }

    // deletion on head
    if (head->data == val)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    // handle the elm deletion pos > 1
    Node *temp = head;
    Node *prev = nullptr;

    while (temp != nullptr)
    {
        if (temp->data == val)
        {
            prev->next = temp->next;
            free(temp);
            break;
        }
        prev = temp;
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

int main()
{
    vector<int> arr = {4, 6, 7, 10, 11, 12};
    Node *head = convertArr2LL(arr);
    cout << "Original LL: ";
    print(head);

    cout << "After deletion on head: ";
    head = deletionOnHead(head);
    print(head);

    cout << "After deletion on tail: ";
    head = deletionOnTail(head);
    print(head);

    cout << "After deletion by position: ";
    head = deletionByPosition(head, 2);
    print(head);

    cout << "After deletion val: ";
    head = deletionByVal(head, 10);
    print(head);

    return 0;
}