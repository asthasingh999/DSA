//create link list of node 5 of integer insert data in code not by user.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
}*head=NULL;

void insert(int a){
struct node *temp,*p;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=a;
temp->link=NULL;
if(head==NULL)
head=temp;
else
{p=head;
while(p->link!=NULL){
p=p->link;}
p->link=temp;
}
}


void display(){
struct node *p;
p=head;
while(p!=NULL){
printf("%d ",p->data);
p=p->link;}
}

int main(){
insert(10);
insert(20);
insert(30);
insert(40);
insert(50);
display();}

