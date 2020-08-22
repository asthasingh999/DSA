//create link list insert data by user upto nodes user want.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
}*head=NULL;

void insert(int a){
struct node *temp,*p;
for(int i=1;i<=a;i++){
temp=(struct node*)malloc(sizeof(struct node));
printf("enter node data: ");
scanf("%d",&temp->data);
temp->link=NULL;
if(head==NULL)
head=temp;
else
{p=head;
while(p->link!=NULL){
p=p->link;}
p->link=temp;
}}
}

void display(){
struct node *p;
p=head;
while(p!=NULL){
printf("%d ",p->data);
p=p->link;}
}

int main(){
int a;
printf("enter the number of nodes: ");
scanf("%d",&a);
insert(a);
display();}
