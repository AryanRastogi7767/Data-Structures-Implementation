/*
Stacks using Linked List Implementation --  C++
Aryan Rastogi
Implementation Date: 1/12/2020
---------------------------------------------------------------------------------------------------------------------------------------------------------
*/


#ifndef __STACKS_LINKED_LIST__
#define __STACKS_LINKED_LIST__

class ListNode
{
    public:
        int data;
        ListNode* next;

        ListNode();
        ListNode(int val);
};

class Stack
{
    private:
        ListNode* head = nullptr;
        ListNode* top = nullptr;
    public:    
        void push(int val);
        int pop();
        int get_top();
        bool is_empty();
        void print_stack();
        void delete_stack();

};

#endif