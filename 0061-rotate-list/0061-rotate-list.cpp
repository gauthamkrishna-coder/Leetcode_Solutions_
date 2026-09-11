/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int n = 1;
        ListNode* newlist = head;
        if(head==NULL){
            return NULL;
        }
        while(newlist->next!=NULL){
            newlist = newlist->next;
            n++;
        }
        newlist->next = head;
        k = k%n;
        int tail = n-k-1;
        ListNode* newtail = head;
        while(tail--){
            newtail = newtail->next;
        }
        ListNode* newhead = newtail->next;
        newtail->next = NULL;
        return newhead;
    }
};