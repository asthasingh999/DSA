//Bubble Sort

#include<stdio.h>
void bubble_sort(int a[],int n)
{
int flag=0,temp;
for(int i=n-1;i>=0;i--)
{flag=0;
for(int j=0;j<=i-1;j++)
{if(a[j]>a[j+1])
{temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
flag=1;
}}
if(flag==0)
break;
}}
int main(){
int a[]={3,7,9,10,6,5,12,4,11,2};
int n=sizeof(a)/sizeof(a[0]);
bubble_sort(a,n);
printf("Sorted array is: ");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
return 0;
}
//Time Complexity:O(n*n)
//Space Complexity:O(1)
