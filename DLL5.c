//Q.5 Create a method which returns number of nodes in DLL.

#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left;
struct node *right;
}*root=NULL;


int length(){
struct node *temp;
temp=root;
int count=0;
while(temp!=NULL){
count++;
temp=temp->right;
}
return count;
}
