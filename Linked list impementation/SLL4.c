//Create a link list by user and give him these following option
//(i)Delete head node.
//(ii)insert new node at head.
//(iii)delete lastnode
//(iv)insert new node at last.
//(v) delete random node as by user.
//(vi) insert new node at random by user.

#include<stdio.h>
#include<stdlib.h>

struct node
{int data;
struct node *link;
}*head=NULL;

int length(){
struct node *temp;
temp=head;
int count=0;
while(temp!=NULL)
{count++;
temp=temp->link;}
return count;

}

void display(){
struct node *p;
p=head;
while(p!=NULL){
printf("%d ",p->data);
p=p->link;}
}
void delete_headnode(){
struct node *temp;
temp=head;
if(head==NULL)
printf("List is empty.\n");
else
{head=temp->link;
temp->link=NULL;
free(temp);}
display();
}


void delete_lastnode(){
struct node *temp,*p;
temp=head;
if(head==NULL)
printf("List is empty\n");
else
{while(temp->link==NULL){
p=temp;
temp=temp->link;}
p->link=NULL;
free(temp);
}
display();
}


void delete_randomnode(){
struct node *temp,*q;
temp=head;
int i,c=1,len;
len=length();
printf("enter the node you want to delete: ");
scanf("%d",&i);
if(head==NULL);
printf("list is empty\n");
if(i>len){
printf("Invalid location\n");
printf("currently length is %d",len);}
else
{while(c<i-1)
{c++;
temp=temp->link;}
q=temp->link;
temp->link=q->link;
q->link=NULL;
free(q);}
display();
}


void insert_athead(){
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter node data:  ");
scanf("%d",&temp->data);
temp->link=NULL;
if(head==NULL)
head=temp;
else
{temp->link=head;
head=temp;}
display();
}

void insert_atlast(){
struct node *temp,*p;
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
}display();}

void insert_atrandom(){
struct node *temp,*p;
int i,c=1,len;
len=length();
printf("enter the node after which you want to insert: ");
scanf("%d",&i);
if(i>len){
printf("Invalid location\n");
printf("currently length is %d",len);}
else{
temp=(struct node*)malloc(sizeof(struct node));
printf("enter node data: ");
scanf("%d",&temp->data);
temp->link=NULL;
p=head;
while(c<i){
c++;
p=p->link;
}
temp->link=p->link;
p->link=temp;
}
display();
}


int main(){
int ch;
while(1){
printf("you have following options:\n");
printf("1. Delete head node.\n");
printf("2. insert new node at head.\n");
printf("3. Delete last node.\n");
printf("4. insert new node at last.\n");
printf("5. Delete random node.\n");
printf("6. insert new node at random.\n");
printf("7. traverse.\n");
printf("8. exit.\n");
printf("enter your choice: ");
scanf("%d",&ch);
switch(ch)
{case 1: delete_headnode();
   break;
case 2: insert_athead();
break;
case 3: delete_lastnode();
break;
case 4: insert_atlast();
break;
case 5: delete_randomnode();
break;
case 6: insert_atrandom();
break;
case 7: display();
break;
case 8: exit(1);
break;
default:
    printf("wrong choice\n");
}}
}
