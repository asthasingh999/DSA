//insert this array in a link list. int arr[]={9,0,4,5,6,7,0,0,6,4};

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
}*head=NULL;
void create(int a[],int n){
int i;
struct node *t,*tail;
head=(struct node*)malloc(sizeof(struct node));
head->data=a[0];
head->link=NULL;
tail=head;
for(i=1;i<n;i++){
    t=(struct node*)malloc(sizeof(struct node));
    t->data=a[i];
    t->link=NULL;
    tail->link=t;
    tail=t;}
}
void display(){
struct node *p;
p=head;
while(p!=NULL){
printf("%d ",p->data);
p=p->link;}
}
int main(){
int a[]={9,0,4,5,6,7,0,0,6,4};
int n=sizeof(a)/sizeof(a[0]);
create(a,n);
display();
}

