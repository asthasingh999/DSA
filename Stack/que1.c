//Q.1 Impelemnt a stack and perform following operations
//(i) push
//(ii)pop


#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *link;
}*top=NULL;


void push(){
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("enter the node data\n");
scanf("%d",&temp->data);
temp->link=top;
top=temp;
}

void pop(){
struct node *temp;
if(top==NULL)
printf("no element to pop.\n");
else{
temp=top;
printf("element popped is %d\n",temp->data);
top=top->link;
temp->link=NULL;
free(temp);
}}

void traverse(){
struct node *temp;
if(top==NULL)
printf("stack is empty.\n");
else{
temp=top;
while(temp!=NULL){
printf("%d ",temp->data);
temp=temp->link;
}}}


int main(){
int ch;
while(1){
printf("You have following options.\n");
printf("1. PUSH\n");
printf("2. POP\n");
printf("3. TRAVERSE\n");
printf("4. EXIT\n");
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch){
case 1: push();
        break;
case 2: pop();
        break;
case 3: traverse();
        break;
case 4: exit(0);
default: printf("Invalid input\n");
}}}
