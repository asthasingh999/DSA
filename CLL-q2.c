// Create a CLL take  input from users.


#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
}*head;


void insert(int n){
struct node *temp,*p;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=n;
if(head==NULL)
{head=temp;
head->link=head;}
else
{   p=head;
while(p->link!=head)
   p=p->link;
    p->link=temp;
    temp->link=head;
    }
}

void display(){
struct node *p;
p=head;
if(head==NULL)
printf("list is empty\n");
else{do
{printf("%d ",p->data);
p=p->link;
}while(p!=head);
}
}


int main(){
int i,k;
printf("enter the number of nodes you want to insert: ");
scanf("%d",&i);
for(int j=1;j<=i;j++){
printf("enter node data ");
scanf("%d",&k);
insert(k);}
display();}
