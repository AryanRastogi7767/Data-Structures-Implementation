/*
Stacks using Linked List Implementation --  C++
Aryan Rastogi
Implementation Date: 1/12/2020
---------------------------------------------------------------------------------------------------------------------------------------------------------
*/


#include<iostream>
#include "stacks_array.h"

using namespace std;

Stack::Stack()
{
    top = -1;
}

bool Stack::is_full()   //To check of stack is full.
{
    return (top == MAXSIZE - 1);
}

bool Stack::is_empty()    //To check of stack is empty.
{
    return (top == -1);
}

void Stack::push(int val)    //Insert element on the top.
{
    if (is_full() == true)  //If stack is full.
    {
        cout<<"Stack Overflow: Stack is full, cannot push more elements."<<endl;
    }
    else     //If there is space for element on the stack, putting the element on the top.
    {
        A[++top] = val;
        cout<<"Pushing on the top of stack with data: "<<val<<endl;
    }
}

int Stack::pop()  //Remove the top element.
{
    if (is_empty() == true)   // Checking is the stack is empty.
    {
        cout<<"Stack is empty. Nothing to pop."<<endl;
        return 0;
    }
    else      // Removing the element at the top.
    {
        cout<<"Popped out element from top with data: "<< A[top--]<<endl;
        return A[top];
    }
    
}

int Stack::get_top()   // To chack the element at the top.
{
    cout<<"TOP: "<<A[top]<<endl;
    return A[top];
}

void Stack::print_stack()  // Print the stack.
{
    cout<<"STACK: ";
    for(int i=0;i<=top;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<" <-- TOP"<<endl;
}

void Stack::delete_stack()   //Delete the whole stack.
{
    delete A;
    top = -1;
    cout<<"Stack deleted successfully!"<<endl;
}