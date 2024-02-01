// Merge K sorted linkedlist  - Leetcode 23 Hard


#include<iostream>
using namespace std;

class comparator {
    public:
        bool operator()(ListNode* first, ListNode* second) {
            return first->val > second->val;
        }
};

class Solution {
public:

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Create a min heap and insert K element

        priority_queue<ListNode*, vector<ListNode*>, comparator> minHeap;

        // Insert K elements
        for (int i = 0; i < lists.size(); i++) {
            if(lists[i] != NULL){
                minHeap.push(lists[i]);
            }
        }

        // Ab sabse top pe vo hoga jiski val sabse kam hogi

        ListNode* head = NULL;
        ListNode* tail = NULL;

        while (!minHeap.empty()) {
            ListNode* curr = minHeap.top();
            minHeap.pop();

            if (head == NULL && tail == NULL) {
                head = curr;
                tail = curr;

                if (curr -> next != NULL) {
                    minHeap.push(curr -> next);
                }
            } 
            else {
                tail->next = curr;
                tail = curr;

                if (curr->next != NULL) {
                    minHeap.push(curr->next);
                }
            }
        }
        return head;
    }
};

int main(){
    
    return 0 ;
}