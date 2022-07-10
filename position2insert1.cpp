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

void insert10AtTheEnd(node** head, int newNumber){
    node* p = new node;
    p->data = newNumber;
    p->address = NULL;

    node*temp = *head;
    while(temp->address != NULL){ 
        temp = temp->address;
    }
    temp->address = p;
    
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
    int i= 2;
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
    head->data = 8;
    head->address = NULL;

    head = insertAtBegin(head, 7);
    traverse(head);
    cout <<endl;

    insert10AtTheEnd(&head, 10);
    traverse(head);
    cout << endl;

  

    insertAtPosition(head, 1, 2);
    traverse(head);
    cout <<endl;
    return 0;
}