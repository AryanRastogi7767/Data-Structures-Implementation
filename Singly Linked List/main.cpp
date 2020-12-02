/*
Linked List Implementation --  C++
Aryan Rastogi
Implementation Date: 28/11/2020
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/


#include<iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"

using namespace std;
int main(void)
{
    // cout<<"Aryan Rastogi 1234"<<endl;
    SinglyLinkedList test;
    test.insert_element(1,0);
    test.print_list();
    test.insert_element(2,1);
    test.insert_element(3,2);
    test.insert_element(4,3);
    test.insert_element(5,4);
    test.print_list();
    test.delete_element(0);
    test.print_list();
    test.delete_element(3);
    test.print_list();
    cout<<test.is_empty()<<endl;
    test.delete_list();
    cout<<test.is_empty()<<endl;

    return 0;
}