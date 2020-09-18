// Insert this array in CLL int arr[]={9,0,4,5,6,7,0,0,6,4};


#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
}*head;

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
void create(int a[],int n){
struct node *t,*last;
head=(struct node*)malloc(sizeof(struct node));
head->data=a[0];
head->link=head;
last=head;
for(int i=1;i<n;i++){
t=(struct node*)malloc(sizeof(struct node));
t->data=a[i];
t->link=last->link;
last->link=t;
last=t;
}}

int main(){
int arr[]={9,0,4,5,6,7,0,0,6,4};
int n=sizeof(arr)/sizeof(arr[0]);
create(arr,n);
display();}
