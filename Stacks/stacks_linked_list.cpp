/*
Stacks using Linked List Implementation --  C++
Aryan Rastogi
Implementation Date: 1/12/2020
---------------------------------------------------------------------------------------------------------------------------------------------------------
*/


#include<iostream>
#include "stacks_linked_list.h"

using namespace std;

ListNode::ListNode()
{
    next = nullptr;
}

ListNode::ListNode(int val)
{
    data = val;
    next = nullptr;
}

void Stack::push(int val)   //Inserting elements on the stack.
{
    ListNode* temp = new ListNode(val);
    if (head == nullptr)   // Checking if the stack is empty. Inserting first element
    {
        head = temp;
        top = head;
        cout<<"Stack is empty. Inserting data: "<<val<<" at head."<<endl;
    }
    else    // Pushing element on the top of the stack.
    {
        top->next = temp;
        top = top->next;
        cout<<"Pushing data: "<<val<<" on the stack."<<endl;
    }
}

int Stack::pop()
{
    if(head == nullptr)  // Checking if the stack is empty.
    {
        cout<<"Stack is empty. Returning 0."<<endl;
        return 0;
    }
    else   // Deleting the element on the top and returning its value.
    {
        int to_return = 0;
        if(head == top)  // If there is only 1 element in the stack.
        { 
            ListNode* temp = top;
            to_return = temp->data;
            head = nullptr;
            top = nullptr;
            delete temp;
            cout<<"Popping the top of stack with data: "<<to_return<<endl;
            return to_return;
        }
        else  // if there are more than 1 elements in the stack.
        {
            ListNode* temp = head;
            while(temp->next != top)
            {
                temp = temp->next;
            }
            top = temp;
            temp = temp->next;
            to_return = temp->data;
            delete temp;
            top->next = nullptr;
            cout<<"Popping the top of stack with data: "<<to_return<<endl;
        }
    }
}

int Stack::get_top()   // Return the value at the top of the stack.
{
    if (top == nullptr)
    {
        cout<<"Top is NULL, returning 0."<<endl;
        return 0;
    }
    else
    {
        cout<<"Top: "<<top->data<<endl;
        return top->data;
    }
}

bool Stack::is_empty()    //Check if the stack is empty.
{ 
    return (top == nullptr);
}

void Stack::print_stack()   //Printing the stack.
{
    ListNode* temp = head;
    cout<<"STACK: ";
    while(temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<" <-- TOP "<<endl;
}

void Stack::delete_stack()  //Delete the complete stack.
{
    if (head == nullptr)
    {
        cout<<"Stack is empty. Nothing to delete."<<endl;
    }
    else
    {
        while(head != nullptr)
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }   
        cout<<"Stack deleted successfully!!"<<endl;
    }
}