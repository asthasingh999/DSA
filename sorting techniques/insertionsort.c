//Insertion Sort

#include<stdio.h>
void insertion_sort(int a[],int n){
for(int i=1;i<n;i++)
{int x=a[i];
int j=i;
while(a[j-1]>x &&j>=1)
{a[j]=a[j-1];
j--;}
a[j]=x;}}
int main(){
int a[]={11,13,7,1,16,9,24,5,10,3};
int n=sizeof(a)/sizeof(a[0]);
insertion_sort(a,n);
printf("Sorted array : ");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
return 0;
}
//Time Complexity:O(n*n)
//Space Complexity:O(1)
