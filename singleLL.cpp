/*
CONCLUDES SINGLY LINKED LIST
*/




#include <bits/stdc++.h>
using namespace std;


class Node{
    public:

    int data;
    Node* next;

    Node(int data1){
        this->data = data1;
        this->next = NULL;
    }

    ~Node (){

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

    }


};



void insertathead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

void insertattail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next=temp;
    tail=temp;

}


void insertatmid(Node* &head,Node* &tail,int pos,int d)
{
    
    if (pos==1)
    {
        insertathead(head,d);
        return;
    }

    int c=1;
    Node* temp = head;
  
    while (c<pos-1){
        
        temp = temp->next;
        c++;
    }

    if (temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    }
    
    Node* toadd = new Node(d);
    toadd->next = temp->next;
    temp->next=toadd;

    



    


}


void deleteNode(Node* &head,Node* &tail,int pos){
    

    if (pos==1)
    {
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
        return;
    }


    Node* curr = head;
    Node* prev = NULL;

    int c=1;
    while(c<pos)
    {
        prev = curr;
        curr = curr->next;
        c++;
        
    }

    if (curr->next == NULL)
    {

        prev->next=NULL;
        tail = prev;
        delete curr;
        return;

    }

    prev->next=curr->next;
    tail=prev;
    curr->next = NULL;
    delete curr;



}



void print(Node* &head)
{
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;


}





int main()
{
    Node* og = new Node(5);
    Node* head = og;
    Node* tail = og;
    insertathead(head,10);
    insertathead(head,20);
    insertathead(head,30);
    insertattail(tail,50);
    insertatmid(head,tail,6,55);
    insertatmid(head,tail,3,45);
    deleteNode(head,tail,7);
    print(head);

    cout<<"head"<<head->data<<endl;
     cout<<"tail"<<tail->data<<endl;
 
  return 0;
}


