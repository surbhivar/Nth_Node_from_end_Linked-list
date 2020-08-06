#include<iostream>
using namespace std;

  struct node{
 int num;
 struct node *next;
 };

void create (struct node *head, int n)
{
    struct node *p;
    struct node *temp=new node();
    temp->num=n;
    p=head;
    while(p->next)
        p=p->next;
    p->next=temp;
    temp->next=NULL;
}
 void displayList(struct node *head)
{
    struct node *tmp;
    if(head == NULL)
    {
       cout<<" List is empty.";
    }
    else
    {
        tmp = head;
        while(tmp != NULL)
        {
            cout<<"   "<< tmp->num;
                        tmp = tmp->next;
        }
    }
}

int getNthFromLast(struct node *head, int N)
{
    struct node *first;
    struct node *second;
    first=head;
    second=head;

    int x=N;
    while(x--)
        first=first->next;
    while(first)
    {
        first=first->next;
        second=second->next;
    }
    return second->num;

}
 int main()
 {
    struct node *head=NULL,*p;
    head=new node();
    head->num=1;
    create (head,2);
    create (head,3);
    create (head,4);
    create (head,5);
    create (head,6);
    create (head,7);
    create (head,8);

    displayList(head);
    int N;
    cin>>N;
    int x=getNthFromLast(head,N);

    cout<<x;
 }
