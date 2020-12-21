/*
Binary Tree Implementation --  C++
Aryan Rastogi
Implementation Date: 20/12/2020
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include<iostream>
#include "tree.h"
#include "tree.cpp"

using namespace std;

int main(void)
{
    BinaryTree test;
    cout<<test.is_empty()<<endl;
    // test.insert_element(1);
    // test.insert_element(2);
    // test.insert_element(3);
    // test.insert_element(4);
    // test.insert_element(5);
    // test.insert_element(6);
    test.insert_element(4);
    test.insert_element(2);
    test.insert_element(6);
    test.insert_element(1);
    test.insert_element(3);
    test.insert_element(5);
    test.insert_element(7);
    cout<<test.get_root()<<endl;
    cout<<test.is_empty()<<endl;
    test.preorder_print();
    test.inorder_print();
    test.postorder_print();
    test.destroy_tree();
    cout<<test.get_root()<<endl;
    cout<<test.is_empty()<<endl;
    return 0;
}
