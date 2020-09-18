//Q.3 Insert this array in DLL int arr[]={9,0,4,5,6,7,0,0,6,4}

#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left;
struct node *right;
}*root=NULL;


void create(int arr[],int a){
struct node *temp;
for(int i=0;i<a;i++){
temp=(struct node*)malloc(sizeof(struct node));
temp->data=arr[i];
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
}}}

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
int arr[]={9,0,4,5,6,7,0,0,6,4};
int n=sizeof(arr)/sizeof(arr[0]);
create(arr,n);
display();
}
