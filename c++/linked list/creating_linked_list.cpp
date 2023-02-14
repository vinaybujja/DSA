//creating a Linked list
//this program creates linked list with two nodes in it.
//result - first(head) node holding value 1 and address of second(first) node
//second(first) node holding value 2 and address of third(second) node
//third(second) node which is last node in the list holding value 3 and NULL in pointer as it is last node

#include<iostream>
using namespace std;

//creating node
struct node
{
    int val;
    node *nxt;
};

// Main function
int main()
{
    node *head, *first, *second;    //creating pointer of data type node
    head = new node();              //dynamic memory allocation
    first = new node();             //dynamic memory allocation
    second = new node();            //dynamic memory allocation
    head->val = 1;                  //giving value to head node
    head->nxt = first;              //connecting head node to first node
    first->val = 2;                 //giving value to first node
    first->nxt = second;            //connecting first node to second node
    second->val = 3;                //giving value to second node
    second->nxt = NULL;             //allocating NULL value to last(second) node
    return 0;
}
