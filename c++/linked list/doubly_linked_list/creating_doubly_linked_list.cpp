#include<iostream>
using namespace std;

//creating node
struct node
{
    int val;
    node *pre;
    node *nxt;
};
int main()
{
    node *head, *first, *second;    //creating pointer of data type node
    head = new node();              //dynamic memory allocation
    first = new node();             //dynamic memory allocation
    second = new node();            //dynamic memory allocation
    head->val = 1;                  //giving value to head node
    head->pre = nullptr;
    head->nxt = first;              //connecting head node to first node
    first->val = 2;                 //giving value to first node
    first->pre = head;
    first->nxt = second;            //connecting first node to second node
    second->val = 3;                //giving value to second node
    second->pre = first;
    second->nxt = NULL;             //allocating NULL value to last(second) node
    deletion(&head);                //insertion of element
    traverse(head);                 //calling traverse function
    return 0;
}
