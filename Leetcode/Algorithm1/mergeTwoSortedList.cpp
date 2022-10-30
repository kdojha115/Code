// Leetcode
// Algorithm 1 
// Day 8
// 21. Merge Two Sorted Lists

// Approach 1:

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if(list1 == NULL)
        {
        	return list2;
        }
        if(list2 == NULL)
        {
        	return list1;
        }
        if(list1 -> val <= list2 -> val)
        {
        	list1 -> next = mergeTwoLists(list1 -> next, list2);
        	return list1;
        }
        else
        {
        	list2 -> next = mergeTwoLists(list1, list2 -> next);
        	return list2;
        }

    }
};

// Approach 2:

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        ListNode temp(INT_MIN);
        ListNode *list = &temp;

        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                list->next = list1;
                list1 = list1->next;
            }
            else
            {
                list->next = list2;
                list2 = list2->next;
            }
            list = list->next;
        }

        list->next = list1 ? list1 : list2;
        return temp.next;
    }
};

// Approach 3:

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        if (NULL == list1)
            return list2;
        if (NULL == list2)
            return list1;

        ListNode *head = NULL;

        if (list1->val < list2->val)
        {
            head = list1;
            list1 = list1->next;
        }
        else
        {
            head = list2;
            list2 = list2->next;
        }

        ListNode *temp = head;
        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                temp->next = list1;
                list1 = list1->next;
            }
            else
            {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        if (list1)
            temp->next = list1;
        else
            temp->next = list2;

        return head;
    }
};