//creating a Linked list
//this program creates linked list with three nodes, inserting node at beginning and traversing it.
//result - prints value 100 1 2 3 on screen
//exception - link should not be empty

#include<iostream>
using namespace std;

//creating node
struct node
{
    int val;
    node *nxt;
};

//creating function to traverse list
//time complexcity = O(n)
//space complexcity = O(1)
void traverse(node *head)
{
 while (head!=NULL)
 {
    cout<<head->val<<endl;
    head = head->nxt;
 }
}

//function to insert element in linked list at begenning
//time complexcity = O(1)
//space complexcity = O(1)
void insert(node **ptr, int val)
{
    node *new_node = new node();     //dynamic memory allocation
    new_node->val = val;
    new_node->nxt = *ptr;            //connecting to next node
    *ptr = new_node;                 //connecting to head node
}

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
    insert(&head, 100);             //insertion of element
    traverse(head);                 //calling traverse function
    return 0;
}
