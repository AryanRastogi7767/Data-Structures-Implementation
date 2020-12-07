/*
Queue Implementation --  C++
Aryan Rastogi
Implementation Date: 7/12/2020
---------------------------------------------------------------------------------------------------------------------------------------------------------
*/

// #include "queues_linked_list.h"
// #include "queues_linked_list.cpp"
#include "queues_array.h"
#include "queues_array.cpp"
#include<iostream>

using namespace std;

int main(void)
{
    Queue test;
    cout<<test.is_empty()<<endl;
    test.enqueue(1);
    test.enqueue(2);
    test.enqueue(3);
    test.enqueue(4);
    test.enqueue(5);
    cout<<test.queue_size()<<endl;
    cout<<test.is_empty()<<endl;
    test.print_queue();
    test.dequeue();
    test.print_queue();
    test.dequeue();
    cout<<test.queue_size()<<endl;
    cout<<test.is_empty()<<endl;
    test.print_queue();
    test.delete_queue();
    test.print_queue();
    cout<<test.is_empty()<<endl;
    cout<<test.queue_size()<<endl;    
    return 0;
}