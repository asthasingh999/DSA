// Array implementation of stack

#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int stack[CAPACITY],top=-1;


int isFull(){
if(top==CAPACITY-1)
    return 1;
else
    return 0;
    }


int isEmpty(){
if(top==-1)
    return 1;
else
    return 0;
}


void push(int ele){
if(isFull())
    printf("stack is overflow\n");
else{
    top++;
    stack[top]=ele;
    printf("%d is pushed\n",ele);
}
}


int pop(){
if(isEmpty())
    return 0;
else
    return stack[top--];
}


void peek(){
if(isEmpty())
    printf("stack is underflow\n");
else
    printf("peek element is %d\n",stack[top]);
}


void traverse(){
if(isEmpty())
    printf("stack is underflow");
else{
    for(int i=0;i<=top;i++)
        printf("%d ",stack[i]);
}
}


int main(){
int ch,ele,item;
while(1){
printf("You have following options\n");
printf("1. PUSH\n");
printf("2. POP\n");
printf("3. PEEK\n");
printf("4. TRAVERSE\n");
printf("5. EXIT\n");
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch){
case 1:printf("enter the element:");
        scanf("%d",&ele);
        push(ele);
        break;
case 2:item= pop();
      if(item==0)
      printf("stack is underflow\n");
      else
      printf("%d is popped item",item);
      break;
case 3: peek();
        break;
case 4: printf("stack elements are: \n");
        traverse();
        break;
case 5: exit(0);
default: printf("invalid input\n");
}}}
