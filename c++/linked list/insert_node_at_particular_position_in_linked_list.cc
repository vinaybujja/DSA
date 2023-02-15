//creating a Linked list
//this program creates linked list with three nodes, inserting node at the end and traversing it.
//result - prints value 1 100 2 3 on screen

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

//function to insert element in linked list at the end
//time complexcity = O(n)
//space complexcity = O(1)
void insert(node **ptr, int val, int position)
{
    node *head, *pre;
    head = *ptr;
    int i = 1;
    //finding node at position value
    while (i != position)
    {
        i++;
        pre = head;
        head = head->nxt;
    }     
    node *new_node = new node();     //dynamic memory allocation
    new_node->val = val;
    new_node->nxt = head;  
    pre->nxt = new_node;             //connecting to next node
    if(position == 1)
    *ptr = new_node;
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
    insert(&head, 100,2);           //insertion of element
    traverse(head);                 //calling traverse function
    return 0;
}
