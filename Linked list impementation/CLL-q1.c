// Create a CLL of 6 nodes insert inputs in your code.


#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
}*head;

void insert(int n){
struct node *temp,*p;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=n;
if(head==NULL)
{head=temp;
head->link=head;}
else
{   p=head;
while(p->link!=head)
   p=p->link;
    p->link=temp;
    temp->link=head;
    }
}

void display(){
struct node *p;
p=head;
if(head==NULL)
printf("list is empty\n");
else{do
{printf("%d ",p->data);
p=p->link;
}while(p!=head);
}
}


int main(){
insert(2);
insert(8);
insert(20);
insert(6);
insert(45);
insert(110);
display();
return 0;}
