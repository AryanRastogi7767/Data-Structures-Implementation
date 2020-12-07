/*
Queue using array Implementation --  C++
Aryan Rastogi
Implementation Date: 7/12/2020
---------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#ifndef __QUEUES_ARRAY__
#define __QUEUES_ARRAY__
#define MAXSIZE 10

class Queue
{
    private:
        int front = -1;
        int rear = -1;
        int *A = new int[MAXSIZE];
    public:
        void enqueue(int val);
        int dequeue();
        int get_front();
        bool is_empty();
        bool is_full();
        int queue_size();   
        void print_queue();
        void delete_queue(); 
};

#endif