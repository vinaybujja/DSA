/*
creating btree
*/
#include<iostream>
using namespace std;

class btree
{
public:
    int val;
    btree *lft;
    btree *rgt;
public:
    btree(int value, btree *lt = nullptr, btree *rt = nullptr)
    {
        val = value;
        lft = lt;
        rgt = rt;
    };
    void left_connect(int value)
    {
        btree *ltree = new btree(value);
        lft = ltree;
    }
    void right_connect(int value)
    {
        btree *rtree = new btree(value);
        rgt = rtree;
    }
};

int main()
{
    btree *root;
    root = new btree(5);
    root->left_connect(4);
    root->right_connect(6);
    cout<<root->lft->val;
    return 0;
}
