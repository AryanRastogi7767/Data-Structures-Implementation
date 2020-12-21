/*
Binary Tree Implementation --  C++
Aryan Rastogi
Implementation Date: 20/12/2020
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#ifndef __BINARY_TREE__
#define __BINARY_TREE__

class BinaryTreeNode
{
    public:
        int data;
        BinaryTreeNode *left;
        BinaryTreeNode *right;

        BinaryTreeNode();
        BinaryTreeNode(int val);
};

class BinaryTree
{
    private:
        BinaryTreeNode *root = nullptr;

        void destroy_tree(BinaryTreeNode* leaf); 
        void insert(int val, BinaryTreeNode *leaf); 
        void inorder_print(BinaryTreeNode *leaf);  
        void postorder_print(BinaryTreeNode *leaf);  
        void preorder_print(BinaryTreeNode *leaf); 

    public:
        void insert_element(int val); 
        bool is_empty(); 
        int get_root();
        void destroy_tree();  
        void inorder_print();  
        void preorder_print();  
        void postorder_print();   
};

#endif