// Leetcode
// Algorithm 1 
// Day 5
// 876. Middle of the Linked List

//Approach 1:

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode *slow = head, *fast = head;
        while (fast && fast->next){
            slow = slow->next, fast = fast->next->next;
        }
        return slow;
        
    }
};

//Approach 2:

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode *fast, *slow;
        fast = head, slow = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast->next != NULL){
            slow = slow->next;
        }
        return slow;
        
    }
};

//Approach 3:

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int i =0;
        ListNode* n = head;
        while(head != NULL)
        {
            i++;
            head = head->next;
        }
        i = i/2+1;
        int k = 1;
        while(k < i)
        {
            k++;
            n = n->next;
            
        }
        return n;
        
    }
};


