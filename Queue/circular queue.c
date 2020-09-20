#include<stdio.h>
#include<stdlib.h>
#define size 5
int cqueue[size],rear=-1,front=-1;


void enqueue(int ele){
if((rear==size-1 && front==0) || front==rear+1)
    printf("queue is full.\n");
    else if(front==-1 && rear==-1){
        front=rear=0;
        cqueue[rear]=ele;
    }
    else if(rear==size-1){
        rear=0;
        cqueue[rear]=ele;
    }
    else{
        rear++;
        cqueue[rear]=ele;
    }
}


void dequeue(){
    int ch;
if(front==-1 && rear==-1)
    printf("queue is empty.\n");
else if(front==rear){
    ch=cqueue[front];
    front=rear=-1;
    printf("%d is deleted.\n",ch);
}
else if(front==size-1){
    ch=cqueue[front];
    front=0;
    printf("%d is deleted.\n",ch);
}
else{
    ch=cqueue[front];
    front++;
    printf("%d is deleted.\n",ch);
}
}


void display(){
if(front==-1 && rear==-1)
    printf("queue is empty.\n");
else if(rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ",cqueue[i]);
    }
    else
    {
        for (int i = front; i < size; i++)
            printf("%d ", cqueue[i]);

        for (int i = 0; i <= rear; i++)
            printf("%d ", cqueue[i]);
    }
}

int main(){
int ch,q;
while(1){
    printf("you have following options.\n");
    printf("1. ENQUEUE.\n");
    printf("2. DEQUEUE.\n");
    printf("3. DISPLAY.\n");
    printf("4. EXIT.\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch){
    case 1: printf("enter the data: ");
            scanf("%d",&q);
            enqueue(q);
            break;
    case 2: dequeue();
            break;
    case 3: display();
            break;
    case 4: exit(0);
    default: printf("Invalid choice.\n");
}
}}
