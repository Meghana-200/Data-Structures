#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *head,*tail=NULL;
void create(int item)
{
struct node *newnode=(struct node*)malloc(sizeof(newnode));
newnode->data=item;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
tail=newnode;
}
else
{
tail->next=newnode;
tail=tail->next;
}
return;
}
void display()
{
struct node*current=head;
if(head==NULL)
{
printf("Single linkedlist is empty\n");
return;
}
printf("Nodes of single linked list:\n");
while(current!=NULL)
{
printf("%d\n",current->data);
current=current->next;
}
}
void main()
{
create(10);
create(20);
create(30);
create(40);
display();
return;
}
