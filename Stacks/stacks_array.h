/*
Stacks using Linked List Implementation --  C++
Aryan Rastogi
Implementation Date: 1/12/2020
---------------------------------------------------------------------------------------------------------------------------------------------------------
*/


#ifndef __STACKS_ARRAY__
#define __STACKS_ARRAY__
#define MAXSIZE 10

class Stack
{
    private:
        int top;
        int *A = new int[MAXSIZE];

    public:
        Stack();
        void push(int val);
        int pop();
        bool is_empty();
        bool is_full();
        int get_top();
        void print_stack();
        void delete_stack();
};

#endif