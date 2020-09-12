//Q.1 Create a DLL of 6 nodes insert inputs in your code.


#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *left;
struct node *right;
}*root=NULL;


void append(int a){
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=a;
temp->left=NULL;
temp->right=NULL;
if(root==NULL)
root=temp;
else
{struct node *p;
p=root;
while(p->right!=NULL)
p=p->right;
p->right=temp;
temp->left=p;
}}

void display(){
struct node *temp;
temp=root;
if(temp==NULL)
printf("list is empty\n");
else{
while(temp!=NULL){
printf("%d ",temp->data);
temp=temp->right;
}
}}

int main(){
append(5);
append(10);
append(15);
append(20);
append(25);
append(30);
display();
}
