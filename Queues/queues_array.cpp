/*
Queue using array Implementation --  C++
Aryan Rastogi
Implementation Date: 7/12/2020
---------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include "queues_array.h"
#include<iostream>

using namespace std;

bool Queue::is_empty()  //Indicates if queue is empty.
{
    return (front == -1);
}

bool Queue::is_full()  //Indicates if queue is full.
{
    return (rear+1)% MAXSIZE == front;
}

int Queue::get_front()  // Returns the element at the front of the queue without removing it.
{
    if(is_empty()) // If queue is empty, return 0.
    {
        cout<<"Queue is empty, returning 0."<<endl;
        return 0;
    }
    else   // Add element to end of queue if queue not empty.
    {
        cout<<"FRONT : "<<A[front]<<endl;
        return A[front];
    }
}

void Queue::print_queue()  // Prints the elements in the queue.
{
    if (A == nullptr)
    {
        cout<<"Queue deleted. Nothing to print."<<endl;
    }
    else
    {
        cout<<"QUEUE: FRONT -->";
        for(int i=front;i<rear+1;i++)
        {
            cout<<A[i%MAXSIZE]<<" ";
        }
        cout<<" <-- REAR"<<endl;
    } 
}

void Queue::delete_queue()  //Deletes the complete queue.
{
    delete A;
    A = nullptr;
    front = -1;
    rear = -1;
    cout<<"Queue deleted successfully!!"<<endl;
}

int Queue::queue_size() // Returns the size of the queue.
{
    return (MAXSIZE - front + rear + 1) % MAXSIZE;
}

void Queue::enqueue(int val)  //inserts element at the end of the queue.
{
    if (is_full())
    {
        cout<<"Queue Overflow. Cannot insert more elements."<<endl;
    }
    else
    {
        rear = (rear+1)% MAXSIZE;
        A[rear] = val;
        if (is_empty())
        {
            front = rear;
        }
        cout<<"Inserted element at the end of the queue with data: "<<A[rear]<<endl;
    }
}

int Queue::dequeue()  // Removes element from the queue.
{
    if(is_empty())
    {
        cout<<"Queue is empty. Returning 0."<<endl;
        return 0;
    }
    else
    {
        int to_return = A[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front+1) % MAXSIZE;
        }
        return to_return;
    }
}