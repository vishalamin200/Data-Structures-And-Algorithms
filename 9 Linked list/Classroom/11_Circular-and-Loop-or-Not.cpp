// 1. Check whether the linklist is circular or not
// 2. Check Whether the loop is present or not , we will check this by slow and fast pointer (Floid cycle detection method)
// 3. find the starting point of the loop
// 4. Remove the loop

#include <iostream>
#include "mylinkedlist.h"
using namespace std;

bool circularOrNOt(Node *&head)
{
    Node *temp = head->next;
    while (temp != head)
    {
        if (temp == NULL)
        {
            return false;
        }
        temp = temp->next;
    }
    return true;
}

bool checkLoop(Node *&head)
{
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL || fast != NULL)
    {
        fast = fast->next;
        if (fast == NULL)
        {
            return false;
        }
        else
        {

            fast = fast->next;

            if (fast == NULL)
            {
                return false;
            }
            slow = slow->next;
        }

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

Node *startingPointOfLoop(Node *&head)
{   
    Node *slow = head;
    Node *fast = head;
   

   cout<<"Initially fast and slow : "<<fast->data<<"  "<<slow->data<<endl;
    while (slow != NULL || fast != NULL)
    {
        fast = fast->next;
        if (fast == NULL)
        {
            return NULL;
        }
        else
        {

            fast = fast->next;

            if (fast == NULL)
            {
                return NULL;
            }
            slow = slow->next;

            cout<<"fast and slow change hokar : "<<fast->data<<"  "<<slow->data<<endl;
        }


        if (slow == fast)
        {
            cout<<"Do no mile : "<<fast->data<<"  "<<slow->data <<"  pe" <<endl;
            slow = head;
            cout<<"Ab Slow ke bhek diya head pe : "<<endl;

            while (slow != fast)
            {
                cout<<"fast and slow hai << "<<fast->data<<"  "<<slow->data<<endl;
                slow = slow->next;
                fast = fast->next;
            }
           
            cout<<slow->data<<" return kiya "<<endl<<endl;
            return slow;
        }
    }
    return NULL;

}

void removeLoop(Node* & head){
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL || fast != NULL)
    {
        fast = fast->next;
        if (fast == NULL)
        {
            return ;
        }
        else
        {

            fast = fast->next;

            if (fast == NULL)
            {
                return ;
            }
            slow = slow->next;
        }

        if (slow == fast)
        {
            slow = head;
            
            Node* prev = fast;
            while (slow != fast)

            {  
                // prev = fast;
                fast = fast->next;
                slow = slow->next;
            }

            prev = NULL;
            return ;
        }
    }

}

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *forth = new Node(50);
    Node *fifth = new Node(80);

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;

    // loop
    fifth->next = first;
    Node *head = second;

    // cout<<"Circular : "<<circularOrNOt(head)<<endl;

    cout << "Loop : " << checkLoop(head) << endl;

    // Node* startingPoint = startingPointOfLoop(head);
    // if(startingPoint != NULL){
    //     // cout << "Starting point of the Loop  : " << startingPoint ->data << endl;
    // }
    // else{
    //     cout<<"NO loop"<<endl;
    // }

    removeLoop(head);
    cout << "Loop : " << checkLoop(head) << endl;

    print(head);
    destroyLinkedlist(head);

    return 0;
}