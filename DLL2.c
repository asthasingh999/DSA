//Q.2 Create a DLL take  input from users.

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
int n,a;
printf("Enter the no. of nodes you want to insert ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("enter the node data-");
scanf(" %d",&a);
append(a);
}
display();
}
