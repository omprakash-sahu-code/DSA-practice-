#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void display(node* head){
    if(head==nullptr){
        cout<< "Empty LL"<< endl;
        return;
    }

    node*temp=head;
    while(temp!=nullptr){
        cout<< temp->data << endl;
        temp=temp->next;
    }
    return;
}

node* reverse(node*& head){
    node* prev=nullptr;
    node* current=head;
    node* next=nullptr;

    while(current!=nullptr){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }

    return prev;

}

int main(){
    node* head=nullptr;
    int n;
    cout<< "Enter no. of nodes: " << endl;
    cin>> n;

    for(int i=0; i<n; i++){
        node* newnode= new node;
        node* temp;
        int val;
        cout<< "node: " ;
        cin >> val;

        newnode->data=val;
        newnode->next=nullptr;

        if(head==nullptr){
            head=newnode;;
            temp=head;
        }else{
            temp->next=newnode;
            temp=newnode;

        }
    }

    head=reverse(head);
    display(head);

    return 0;
}