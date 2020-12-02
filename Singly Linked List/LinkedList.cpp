/*
Linked List Implementation --  C++
Aryan Rastogi
Implementation Date: 28/11/2020
---------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include "LinkedList.h"
#include<iostream>

using namespace std;

ListNode::ListNode()
{
    data = 0;
    next = nullptr;
}

ListNode::ListNode(int val)
{
    data = val;
    next = nullptr;
}

bool SinglyLinkedList::is_empty()
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

void SinglyLinkedList::insert_element(int value,int position)
{
    // Assuming the input given are always valid.

    ListNode* temp = new ListNode(value); 
    if (head == nullptr)  // If the list is empty.
    {
        head = temp;
        cout<<"Inserting node with data: "<<temp->data<<" at HEAD on empty list."<<endl;
    }
    else if (position == 0)   //Insert at head.
    {
        temp->next = head->next;
        head = temp;
        cout<<"Inserting node with data: "<<temp->data<<" at HEAD"<<endl;
    }
    else
    {
        ListNode* current = head;
        for(int i =0;i<position;i++)
        {
            if (current->next!=nullptr)
            {
                current = current->next;
            }        
        }
        if (current != nullptr)     // Insert in the middle of the list.
        {
            current->next = temp;
            cout<<"Inserting node with data: "<<value<<" at position: "<<position<<endl;
        }
        else                       // Insert at end.
        {
            current = temp;
            cout<<"Inserting node with data: "<<temp->data<<" at the end of the list."<<endl;
        }
    }
}

void SinglyLinkedList::print_list()
{
    if(head == nullptr)
    {
        cout<<"List is empty!"<<endl;
    }
    else
    {
        ListNode* temp = head;
        cout<<"List: ";
        while(temp!= nullptr)
        {
            cout<<temp->data<<"-->";
            temp = temp->next;
        }
    }
    cout<<endl;
}

int SinglyLinkedList::delete_element(int position)
{
    int to_return = 0;
    //Assuming the input is valid.
    if (head == nullptr)    // List is empty.
    {
        cout<<"No element to delete. List is empty."<<endl;
    }
    else
    {
        ListNode* current = head;
        ListNode* prev = head;
        if (position == 0)
        {
            if (head->next!=nullptr)         // If there is only 1 element in the list.
            {
                head = head->next;
                to_return = current->data;
                delete current;
            }
            else     // delete element at head.
            {
                head = nullptr;
                to_return = current->data;
                delete current;
            }      
        }
        else
        {
            for(int i =0;i<position-1;i++)
            {
                prev = prev->next;
            }
            current = prev->next;
            if (current->next == nullptr)  //Delete Last element
            {
                prev->next = nullptr;
                to_return =  current->data;
                delete current;
            }
            else    // Delete element in the middle.
            {
                prev->next = current->next;
                to_return = current->data;
                delete current;
            }
        }
    }
    return to_return;
}

void SinglyLinkedList::delete_list()
{
    ListNode* temp = head;
    while(temp != nullptr)
    {
        ListNode* current;
        current = head;
        temp = temp->next;
        head = head->next;
        delete current;
    }
    cout<<"List Deleted Successfully!"<<endl;
}