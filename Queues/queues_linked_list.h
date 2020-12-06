#ifndef __QUEUES_LINKED_LIST__
#define __QUEUES_LINKED_LIST__

class ListNode
{
    public:
        int data;
        ListNode* next;

        ListNode();
        ListNode(int val);
};
class Queue
{
    private:
        ListNode* front = nullptr;
        ListNode* rear = nullptr;
    public:
        void enqueue(int val);
        int dequeue();
        int get_front();
        bool is_empty();
        int queue_size();   
        void print_queue();
        void delete_queue(); 
};  

#endif