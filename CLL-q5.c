// Create a method which returns number of nodes in CLL. return size of list not print that also discuss its time and space complexety.

#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
}*head;

int lengthof_CLL(){
struct node *p;
p=head;
int count=0;
if(head==NULL)
printf("list is empty\n");
else{
do
{p=p->link;
count++;
}while(p!=head);
return count;}
}
// Time Complexity: O(n), for scanning the complete list of size n.
// Space Complexity: O(1), for temporary variable.
