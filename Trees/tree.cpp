/*
Binary Tree Implementation --  C++
Aryan Rastogi
Implementation Date: 20/12/2020
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include "tree.h"
#include<iostream>

using namespace std;

BinaryTreeNode::BinaryTreeNode()  //Initializing a node with 0 if no value is specified.
{
    int data = 0;
    left = nullptr;
    right = nullptr;
}

BinaryTreeNode::BinaryTreeNode(int val) //Initializing a new node with the given value.
{
    data = val;
    left = nullptr;
    right = nullptr;
}

void BinaryTree::destroy_tree(BinaryTreeNode *leaf) //Delete all the nodes in a binary tree.
{
    if (leaf != nullptr)
    {
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }
}

void BinaryTree::destroy_tree() // Delete tree and set root to null.
{
    destroy_tree(root);
    root = nullptr;
}

bool BinaryTree::is_empty() //Check if tree is empty.
{
    return (root == nullptr);
}

void BinaryTree::insert(int val, BinaryTreeNode *leaf) //Insert a node in binary tree at appropriate position.
{
    if (val < leaf->data) 
    {
        if (leaf->left != nullptr)
        {
            insert(val,leaf->left);
        }
        else
        {
            leaf->left = new BinaryTreeNode(val);
        }
    }
    else if(val >= leaf->data)
    {
        if(leaf->right != nullptr)
        {
            insert(val,leaf->right);
        }
        else
        {
            leaf->right = new BinaryTreeNode(val);
        }   
    } 
}

void BinaryTree::insert_element(int val) //Insert element
{
    if(root != nullptr)
    {
        insert(val,root);
    }
    else
    {
        root = new BinaryTreeNode(val);
    }
}

void BinaryTree::preorder_print(BinaryTreeNode *leaf) //Print elements with preorder traversal.
{
    if (leaf != nullptr)
    {
        cout<<leaf->data<<" ";
        preorder_print(leaf->left);
        preorder_print(leaf->right);
    }
    
}

void BinaryTree::preorder_print()
{
    cout<<"Preorder Traversal: ";
    preorder_print(root);
    cout<<endl;
}

void BinaryTree::inorder_print(BinaryTreeNode *leaf) //Print elements with ineorder traversal.
{
    if (leaf != nullptr)
    {
        inorder_print(leaf->left);
        cout<<leaf->data<<" ";
        inorder_print(leaf->right);
    }
}

void BinaryTree::inorder_print()
{
    cout<<"Inorder Traversal: ";
    inorder_print(root);
    cout<<endl;
}

void BinaryTree::postorder_print(BinaryTreeNode *leaf) //Print elements with postorder traversal.
{
    if (leaf != nullptr)
    {
        postorder_print(leaf->left);
        postorder_print(leaf->right);
        cout<<leaf->data<<" ";
    }    
}

void BinaryTree::postorder_print()
{
    cout<<"Postorder Traversal: ";
    postorder_print(root);
    cout<<endl;
}

int BinaryTree::get_root() // Return the data at root of the tree.
{
    if (root != nullptr)
    {
        return root->data;
    }
    else
    {
        return 0;
    }
    
}