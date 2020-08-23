// Create a CLL list by user and give him these following option
// (1) delete random node as by user.
// (2) insert new node at random by user

#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
}*head;

void display(){
struct node *p;
p=head;
if(head!=NULL)
{do
{printf("%d ",p->data);
p=p->link;
}while(p!=head);
}}

int length(){
struct node *p;
p=head;
int count=0;
if(head==NULL)
    return count;
else{
do
{count++;
p=p->link;
}while(p!=head);
return count;}
}

void insert_atrandom(){
struct node *temp,*p;
int i,c=1,len;
len=length();
printf("enter the node after which you want to insert: ");
scanf("%d",&i);
if(i>len){
printf("Invalid location\n");
printf("Currently length is %d\n",len);
}
else{
temp=(struct node*)malloc(sizeof(struct node));
printf("enter node data");
scanf("%d",&temp->data);
p=head;
while(c<i){
c++;
p=p->link;}
temp->link=p->link;
p->link=temp;
}
display();}

void delete_atrandom(){
struct node *p,*temp;
int i,c=1,len;
len=length();
temp=head;
printf("enter the node you want to delete ");
scanf("%d",&i);
if(head==NULL)
printf("list is empty\n");
else{
        if(i>len){
printf("Invalid location\n");
printf("currently length is %d\n",len);
}
else{
while(c<i-1){
temp=temp->link;
c++;}
p=temp->link;
temp->link=p->link;
p->link=NULL;
free(p);
}}
display();}

int main(){
int ch;
while(1){
printf("You have following options\n");
printf("1. delete random node.\n");
printf("2. insert at random.\n");
printf("3. traverse\n");
printf("4. exit\n");
printf("enter your choice ");
scanf("%d",&ch);
switch(ch)
{
case 1: delete_atrandom();
      break;
case 2: insert_atrandom();
       break;
case 3: display();
        break;
case 4: exit(1);
       break;
default:
    printf("wrong choice\n");
}}
return 0;}
