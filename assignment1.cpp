#include <iostream>
using namespace std;

class node {
    public:
        int data;
        node* address;
};

node* insertAtBegin(node *head, int n){
    node *p = new node; 
    p->data = n;
    p->address = head;
    head = p;
    return head;
}

void traverse(node* temp){
    while (temp != NULL) {
        cout<<temp->data<<"\t";
        temp = temp->address;
    }
}

void insertAtPosition(node *temp, int n, int position){
    node *p = new node;
    p->data = n;
    int i= 1;
    while (i <position - 1) {
        temp = temp->address;
        i++;
    }
    p->address = temp->address;
    temp->address = p;
}

int main()
{
    node* head = new node;
    head->data = 5;
    head->address = NULL;

    head = insertAtBegin(head, 7);
    traverse(head);
    cout <<endl;

    head = insertAtBegin(head, 17);
    traverse(head);
    cout <<endl;

    head = insertAtBegin(head, 9);
    traverse(head);
    cout <<endl;

    insertAtPosition(head, 56, 3);
    traverse(head);
    cout <<endl;
    return 0;
}