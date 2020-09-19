//Array implementation of queue


#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int queue[CAPACITY],rear=0,front=0;


void insert(){
if(rear==CAPACITY)
    printf("queue is full.\n");
else{
        int ele;
    printf("enter the element\n");
    scanf("%d",&ele);
queue[rear]=ele;
rear++;
}
}

void delete(){
if(rear==front)
    printf("queue is empty\n");
    else{
        printf("deleted %d",queue[front]);
        for(int i=0;i<rear-1;i++)
            queue[i]=queue[i+1];
        rear--;
    }
}


void traverse(){
if(rear==front)
    printf("queue is empty\n");
    else{
        printf("queue element is: ");
        for(int i=0;i<rear;i++)
            printf("%d ",queue[i]);
    }
}

int main(){
int ch;
while(1){
printf("you have following choice.\n");
printf("1. INSERT\n");
printf("2. DELETE\n");
printf("3. TRAVERSE\n");
printf("4. EXIT\n");
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch){
case 1: insert();
        break;
case 2: delete();
         break;
case 3: traverse();
        break;
case 4: exit(0);
default: printf("Invalid input.\n"); }
}}
