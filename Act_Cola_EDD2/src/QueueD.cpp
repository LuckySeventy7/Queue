#include "QueueD.h"

QueueD::QueueD(){
    head=NULL;
    tail=NULL;
}
Node::Node(){
    next=NULL;
}

void QueueD::insertar()
{
    int n;
    Node *temp=new Node();
    cout<<"Ingrese numero :";
    cin>>n;
    temp->num=n;

    if(head==NULL)
    {
        tail=temp;
        head=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
}

void QueueD::eliminar()
{
      if(head!=NULL)
      {
            Node *temp=head;
            cout<<head->num<<"Fue eliminado"<<endl;
            head=head->next;
            delete temp;
            if(head==NULL)
                  tail=NULL;
      }
      else
            cout<<"Cola vacia"<<endl;
}

void QueueD::imprimir()
{
      Node *temp=head;
      while(temp!=NULL)
      {
            cout<<temp->num<<endl;
            temp=temp->next;
      }
}

QueueD::~QueueD()
{
      while(head!=NULL)
      {
            Node *temp=head;
            head=head->next;
            delete temp;
      }
}

