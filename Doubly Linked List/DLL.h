/*
Doubly Linked List Implementation --  C++
Aryan Rastogi
Implementation Date: 29/11/2020  -  30/11/2020
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#ifndef __DOUBLY_LINKED_LIST__
#define __DOUBLY_LINKED_LIST__

class ListNode
{
    public:
        int data;
        ListNode* next;
        ListNode* prev;

        ListNode();
        ListNode(int val);
};

class DoublyLinkedList
{
    private:
        ListNode* head;
    public:
        DoublyLinkedList()
        {
            head = nullptr;
        }
        void insert_element(int value,int position);
        int delete_element(int position);
        bool is_empty();
        void delete_list();
        void print_list();
        // void sort();
        // int search(int data); returns position index.
        // void reverse();
};
#endif