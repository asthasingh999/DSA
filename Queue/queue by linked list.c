// Implement queue by dynamic memory allocation and perform following operation i)enque ii)deque
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
}*front=NULL,*rear=NULL;


void enqueue(){
struct node *t;
t=(struct node*)malloc(sizeof(struct node));
if(t==NULL)
    printf("queue is full.\n");
else{
    printf("enter the data: ");
    scanf("%d",&t->data);
    t->link=NULL;
    if(front==NULL)
        front=rear=t;
    else{
        rear->link=t;
        rear=t;
    }
}
}


void dequeue(){
struct node *p;
if(front==NULL)
    printf("queue is empty.\n");
else{
    p=front;
    printf("%d is dequeued",front->data);
    front=front->link;
    p->link=NULL;
    free(p);
}
   }


void display(){
struct node *p;
if(front==NULL)
    printf("queue is empty.\n");
else{
 p=front;
 while(p!=NULL){
    printf("%d ",p->data);
    p=p->link;
 }
}}


int main(){
int ch;
while(1){
    printf("you have following options.\n");
    printf("1. ENQUEUE.\n");
    printf("2. DEQUEUE.\n");
    printf("3. DISPLAY.\n");
    printf("4. EXIT.\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch){
    case 1: enqueue();
            break;
    case 2: dequeue();
            break;
    case 3: display();
            break;
    case 4: exit(0);
    default: printf("Invalid choice.\n");
}
}}
