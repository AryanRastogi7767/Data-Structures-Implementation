/*
Queue using linked list Implementation --  C++
Aryan Rastogi
Implementation Date: 6/12/2020
---------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include "queues_linked_list.h"
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

bool Queue::is_empty()
{
    return front == nullptr;
}

int Queue::get_front()
{
    return front->data;
}

int Queue::queue_size()
{
    ListNode* temp = front;
    int size = 1;
    while (temp != nullptr)
    {   
        size++;
        temp = temp->next;
    }
    return size;
}

void Queue::enqueue(int val)
{
    ListNode* temp = new ListNode(val);
    if (front == nullptr)    // Queue is empty
    {
        front = temp;
        rear = front;
        cout<<"Queue is empty. Enqueueing the first element with data: "<<val<<endl;
    }
    else  // Enqueueing element at  the rear end of the Queue.
    {
        rear->next = temp;
        rear = rear->next;
        cout<<"Enqueueing element with data: "<<val<<" at the end of the queue."<<endl;
    }
}

int Queue::dequeue()
{
    int to_return = 0;
    if (front == nullptr)
    {
        cout<<"Queue Underflow !! Queue is empty, no element to remove. Returning 0."<<endl;
        return to_return;
    }
    else
    {
        ListNode* temp = front;
        front = front->next;
        to_return = temp->data;
        temp->next = nullptr;
        delete temp;
        cout<<"Dequeueing element at front with data: "<<to_return<<endl;
        return to_return;
    }
}

void Queue::print_queue()
{
    ListNode* temp = front;
    cout<<"QUEUE: FRONT --> ";
    while (temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<" <-- REAR"<<endl;
}

void Queue::delete_queue()
{
    while (front != nullptr)
    {
        ListNode*temp = front;
        front = front->next;
        cout<<"Deleting element with data: "<<temp->data<<endl;
        delete temp;
    }
    front = nullptr;
    rear = nullptr;
    cout<<"Queue deleted successfully!!"<<endl;
}