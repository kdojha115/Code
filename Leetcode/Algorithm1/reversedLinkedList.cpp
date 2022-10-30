// Leetcode
// Algorithm 1 
// Day 10
// 206. Reverse Linked List

// Approach 1:

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *nextNode, *prevNode = NULL;
        while (head)
        {
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
    }
};

// Approach 2:

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        if (!head || !(head->next))
        {
            return head;
        }
        ListNode *node = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return node;
    }
};

// Approach 3:

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        ListNode *cur = head, *prev = NULL, *next;
        while (cur != NULL)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
        return head;
    }
};