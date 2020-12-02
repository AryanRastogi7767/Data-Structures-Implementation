/*
Stacks using Linked List Implementation --  C++
Aryan Rastogi
Implementation Date: 1/12/2020
---------------------------------------------------------------------------------------------------------------------------------------------------------
*/


#include<iostream>
// #include "stacks_linked_list.h"
// #include "stacks_linked_list.cpp"
#include "stacks_array.h"
#include "stacks_array.cpp"

using namespace std;

int main(void)
{
    Stack test;
    cout<<test.is_empty()<<endl;
    test.push(1);
    test.push(2);
    test.push(3);
    test.push(4);
    test.push(5);
    test.get_top();
    cout<<test.is_empty()<<endl;
    // cout<<test.is_full()<<endl;
    test.print_stack();
    test.pop();
    test.get_top();
    test.print_stack();
    test.pop();
    test.print_stack();
    cout<<test.is_empty()<<endl;
    test.delete_stack();
    cout<<test.is_empty()<<endl;
    test.print_stack();
    return 0;
}