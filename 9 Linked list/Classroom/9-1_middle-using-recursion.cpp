// find the middle element using the recursive method

#include <iostream>
#include "mylinkedlist.h"
using namespace std;

Node*  getMiddle(Node* &fast, Node*  &slow)
{
    // BAse case
    if (fast == NULL || fast->next == NULL)
    {
        return slow;
    }

    fast = fast->next;
    fast = fast->next;

    if(fast != NULL){
        slow = slow->next;
    }

    getMiddle(fast, slow);
}

int main()
{
    Node *head = new Node(10);
    Node *tail = head;

    inserAtTail(head, tail, 20);
    inserAtTail(head, tail, 30);
    inserAtTail(head, tail, 40);
    inserAtTail(head, tail, 50);
    inserAtTail(head, tail, 60);
    

    cout << "Original Linkedlist : " << endl;
    print(head);
    cout << endl;

    Node *fast = head;
    Node *slow = head;
    cout << "Middle element is " << getMiddle(fast, slow)->data << "  "<<endl;

    destroyLinkedlist(head);

    return 0;
}