//Q.2 insert the following string in a stack
//condition: ignore white spaces
//String str="My name is astha singh persuing MCA from BHU"
//output like= mynameisasthasinghpersuingmcafrombhu.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define CAPACITY 100
char stack[CAPACITY],ch;
int top=-1;


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


void push(char ch){
if(isFull())
    printf("stack is overflow\n");
else{
    top++;
    stack[top]=ch;
}
}


void traverse(){
if(isEmpty())
    printf("stack is underflow");
else{
    for(int i=0;i<=top;i++)
        printf("%c",stack[i]);

}}


int main(){
char str[CAPACITY]="My name is astha singh persuing MCA from BHU";
for(int i=0;i<strlen(str);i++){
if(str[i]>='A' && str[i]<='Z'){
str[i]=str[i]+32;
push(str[i]);
}
else if(str[i]==' ')
    continue;
else
    push(str[i]);
}
traverse();
return 0;
      }
