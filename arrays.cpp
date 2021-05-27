

#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<unordered_map>


class Node
{
    public:
    int data;
    Node * next;

    Node(int value)
    {
        this->data=value;
        this->next=NULL;
    }
};


//1->2->3

//4

void printList(Node * head)
{

    Node * temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
//create a function that inserts a node at the end of a linked list
Node *  insertAtEnd(Node *head , int newValue)
{
    Node * newNode=new Node(newValue);

    if(head==NULL)
    {
        head=newNode;
        return head;
    }

    Node * temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=newNode;
    return head;
}


Node * insertAtBegining(Node * head,int newValue)
{
    Node * newNode=new Node(newValue);

    if(head==NULL)
    {
      head=newNode;
      return head;   
    }

    newNode->next=head;
    head=newNode;

    return head;
}




Node * insertAtGivenPosition(Node * head,int newValue,int pos)
{
    if(pos==1)
       return insertAtBegining(head,newValue);


       Node * temp=head;

       int count=pos-2;

       while(count--)
       {
           temp=temp->next;
       }

       Node * newNode=new Node(newValue);

       Node * temp2=temp->next; 

       temp->next=newNode;
       newNode->next=temp2;

       return head;
}

Node * deleteFromFront(Node * head)
{
    if(head==NULL)
    {
        return head;
    }

    Node * temp=head;
    delete(temp);

    head=head->next;
    return head;
}

Node * deleteFromEnd(Node * head)
{

    if(head==NULL)
    {
        return head;
    }

    if(head->next==NULL)
    {
        delete(head);
        return NULL;
    }


    Node * temp=head;

    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }

    delete(temp->next);
    temp->next=NULL;

    return head;
}


int main()
{
    

    Node * head=NULL;
    head=insertAtEnd(head,1);
        head=insertAtEnd(head,2);
    head=insertAtEnd(head,3);
    head=insertAtEnd(head,4);
    head=insertAtBegining(head,5);
    head=insertAtBegining(head,7);
    head=insertAtGivenPosition(head,890,4);
    head=insertAtGivenPosition(head,10,3);
    head=insertAtGivenPosition(head,80,1);

  printList(head);

    head=deleteFromEnd(head);

    cout<<"\n";

  printList(head);



   


   
}