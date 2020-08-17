//Selection Sort

#include<stdio.h>
void selection_sort(int a[],int n){
int i,j,k,temp;
for(i=0;i<n-1;i++)
{for(j=k=i;j<n;j++)
{if(a[j]<a[k])
k=j;}
temp=a[i];
a[i]=a[k];
a[k]=temp;
}}
int main(){
int a[]={11,13,7,12,16,9,24,5,10,3};
int n=sizeof(a)/sizeof(a[0]);
printf("Sorted array is: ");
selection_sort(a,n);
for(int i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
//Time Complexity:O(n*n)
//Space Complexity:O(1)
