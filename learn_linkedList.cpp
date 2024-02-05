#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
    // node type address
};
// insert first possition element in linked list using recursion
Node *CreateLinkedListUsingRecursion(int arr[], int index, int size)
{
    if (index == size)
        return NULL;
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = CreateLinkedListUsingRecursion(arr, index + 1, size);
    return temp;
}
void addInEnd(Node *head, int data)
{
    Node *tail;
    tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *temp = new Node(data);
    tail->next = temp;
}
void printAllNode(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

int main()
{
    Node *head;
    int arr[] = {1,2,3,4,5};
    head = CreateLinkedListUsingRecursion(arr , 0 , 5);

    // head = new Node(4);
    // int arr[] = {1, 2, 3};
    // for (int i = 0; i < 3; i++)
    // {
    //     if (head == NULL)
    //     {
    //         Node *head = new Node(arr[i]);
    //     }
    //     else
    //     {
    //         Node *temp = new Node(arr[i]);
    //         temp->next = head;
    //         head = temp;
    //     }
    // }
    // addInEnd(head, 12);
    printAllNode(head);
    // print the head data
    // cout << head->data << endl;
    // cout << head->next << endl;

    return 0;
}