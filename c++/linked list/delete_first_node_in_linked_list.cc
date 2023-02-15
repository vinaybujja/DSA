//creating a Linked list
//this program creates linked list with three nodes, deleting first node at the end and traversing it.
//result - prints value 2 3 on screen

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

//function to delete first element in linked list
//time complexcity = O(1)
//space complexcity = O(1)
void deletion(node **ptr)
{
    node * del_node;
    del_node = *ptr;
    *ptr = del_node->nxt;
    delete del_node;
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
    deletion(&head);                //insertion of element
    traverse(head);                 //calling traverse function
    return 0;
}
