//Q.4 Create a DLL list by user and give him these following option
//(1) delete random node as by user(AS INPUT PERFORM OPEARTION AT HEAD TAIL ALSO).
//(2) insert new node at random by user.(AS INPUT PERFORM OPEARTION AT HEAD TAIL ALSO).

#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left;
struct node *right;
}*root=NULL;

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


void delete_randomnode(){
int ch,len;
printf("enter the node you want to delete \n");
scanf("%d",&ch);
len=length();
if(ch>len){
    printf("Invalid location\n");
    printf("current length is %d\n",len);
}
else{
    struct node *p=root;
    if(ch==1){
        root=root->right;
        root->left=NULL;
        free(p);
    }
    else{
        int i=0;
        while(i<ch-1){
            p=p->right;
            i++;
        }
        p->left->right=p->right;
        if(p->right!=NULL)
            p->right->left=p->left;
        p->right=NULL;
        free(p);
    }
display();}
}


void insert_atrandom(){
struct node *temp;
int len,loc;
printf("enter the location: ");
scanf("%d",&loc);
len=length();
if(loc>len){
printf("Invalid location\n");
printf("Current length is %d\n",len);
}
else{
temp=(struct node*)malloc(sizeof(struct node));
printf("enter node data: ");
scanf("%d",&temp->data);
temp->left=NULL;
temp->right=NULL;
if(loc==0){
if(root==NULL)
root=temp;
else{
temp->right=root;
root->left=temp;
root=temp;
}}
else{
int i=1;
struct node *p;
p=root;
while(i<loc){
p=p->right;
i++;
}
temp->right=p->right;
if(p->right!=NULL)
p->right->left=temp;
temp->left=p;
p->right=temp;
}
display();
printf("\n");
}}


int main(){
while(1){
printf("You have following options-\n");
printf("1. Delete random node.\n");
printf("2. Insert new node at random.\n");
printf("3. Traverse.\n");
printf("4. exit.\n");
int n;
printf("Enter your choice: ");
scanf("%d",&n);
switch(n){
case 1: delete_randomnode();
break;
case 2: insert_atrandom();
break;
case 3: display();
break;
case 4: exit(1);
break;
default:
printf("wrong choice\n");
}
}}
