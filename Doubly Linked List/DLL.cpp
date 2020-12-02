/*
Doubly Linked List Implementation --  C++
Aryan Rastogi
Implementation Date: 29/11/2020  -  30/11/2020
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include "DLL.h"
#include<iostream>

using namespace std;

ListNode::ListNode()
{
    data = 0;
    next = nullptr;
    prev = nullptr;
}

ListNode::ListNode(int val)
{
    data = val;
    next = nullptr;
    prev = nullptr;
}

bool DoublyLinkedList::is_empty()
{
    if (head == nullptr)
    {
        cout<<"List is Empty"<<endl;
        return true;
    }
    else
    {
        return false;
    }
}

void DoublyLinkedList::insert_element(int value,int position)
{
    // Assuming the input given are always valid.

    ListNode* temp = new ListNode(value);
    if (head == nullptr)      //Inserting in empty list at head.
    {
        head = temp;
        cout<<"Inserting node with data: "<<value<<" at head as list is empty."<<endl;
    }
    else if (position == 0)   // Inserting at head.
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
        cout<<"Inserting node with data: "<<value<<" at position: "<<position<<endl;
    }
    else
    {
        ListNode* current = head;
        ListNode* Next = head;
        for(int i=0;i<position-1;i++)
        {
            if (current->next!=nullptr)
            {
                current = current->next;
            }        
        }
        if (current->next != nullptr)   // Inserting in the middle of the list.
        {
            Next = current->next;
            temp->next = current->next;
            Next->prev = temp;
            temp->prev = current;
            current->next = temp;
            cout<<"Inserting node with data: "<<value<<" at position: "<<position<<endl;
        }
        else       // Inserting at the end of the list.
        {
            current->next = temp;
            temp->prev = current;
            cout<<"Inserting node with data: "<<value<<" at position: "<<position<<endl;
        }
        
    }
    
}

void DoublyLinkedList::print_list()
{

    // Assuming all the input is valid.

    ListNode* current = head;
    cout<<"List: ";
    while (current != nullptr)
    {
        cout<<current->data<<" <==> ";
        current = current->next;
    }
    cout<<"NULL"<<endl;
}

int DoublyLinkedList::delete_element(int position)
{
    int to_return = 0;
    if( head == nullptr) // List is empty.
    {
        cout<<"Empty List, returning 0."<<endl;
        return 0;
    }
    else if( position == 0)  //Deleting element at head.
    {
        ListNode* current = head;
        if(head->next == nullptr) // Only 1 element is present in the list.
        {
            to_return = head->data;
            head = nullptr;
            delete current;
            cout<<"Deleting data: "<<to_return<<" at position: "<<position<<endl;
            return to_return;
        }
        else      // Deleting the head element when list has more than 1 element.
        {
            to_return = head->data;
            head = head->next;
            head->prev = nullptr;
            delete current;
            cout<<"Deleting data: "<<to_return<<" at position: "<<position<<endl;
            return to_return;
        }
    }
    else   
    {
        ListNode* to_delete;
        ListNode* Prev = head;
        for(int i = 0;i<position-1;i++)
        {
            Prev = Prev->next;
        }
        to_delete = Prev->next;
        if (to_delete->next != nullptr)   //Deleting the element in the middle of the list.
        {
            ListNode* Next;
            to_delete = Prev->next;
            Next = to_delete->next;
            Prev->next = Next;               // Sorry for the confusing mess here.
            Next->prev = Prev;
            to_return = to_delete->data;
            delete to_delete;
            cout<<"Deleting data: "<<to_return<<" at position: "<<position<<endl;
            return to_return;
        }
        else                          // Deleting the last element in the list.
        {
            Prev->next = nullptr;
            to_return = to_delete->data;
            delete to_delete;
            cout<<"Deleting data: "<<to_return<<" at position: "<<position<<endl;
            return to_return;
        }
        
    }
}

void DoublyLinkedList::delete_list()
{
    ListNode* to_delete;
    if(head == nullptr)   //List is empty.
    {
        return;
    }
    else if (head->next == nullptr)   // Deleting if only 1 element is present in the list.
    {
        to_delete = head;
        head = nullptr;
        delete to_delete;
    }
    else             // Deleting list if the list has more than 1 element.
    {
        head = head->next;
        while(head->next != nullptr)
        {
            to_delete = head->prev;
            head->prev = nullptr;
            to_delete->next = nullptr;
            delete to_delete;
            head = head->next;
        }
        to_delete = head;
        head = nullptr;
        delete to_delete;
        cout<<"List Deleted Successfully!!"<<endl;
    }
    
}