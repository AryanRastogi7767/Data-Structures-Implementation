/*
Linked List Implementation --  C++
Aryan Rastogi
Implementation Date: 28/11/2020
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#ifndef __LINKED_LIST__
#define __LINKED_LIST__


class ListNode{
    public:
        int data;
        ListNode* next;
        ListNode();
        ListNode(int val);    
};

class SinglyLinkedList{
    private:
        ListNode* head;
    public:       
        SinglyLinkedList()
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
        // void reverse()
};


#endif