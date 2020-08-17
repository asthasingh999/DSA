//Merge Sort

#include<stdio.h>
void merge(int a[],int l,int mid,int h){
int i,j,k,b[h+1];
i=l,j=mid+1,k=l;
while(i<=mid && j<=h)
{if(a[i]<a[j])
b[k++]=a[i++];
else
b[k++]=a[j++];}
while(i<=mid)
{b[k++]=a[i];
i++;}
while(j<=h)
{b[k++]=a[j];
j++;}
for(i=l;i<=h;i++)
a[i]=b[i];
}
void merge_sort(int a[],int l,int h){
int mid;
if(l<h)
{mid=(l+h)/2;
merge_sort(a,l,mid);
merge_sort(a,mid+1,h);
merge(a,l,mid,h);}}
int main(){
int a[]={6,3,7,10,2,24,55,18};
int n=sizeof(a)/sizeof(a[0]);
merge_sort(a,0,n-1);
printf("Sorted array is: ");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
return 0;}
//Time Complexity:O(nlogn)
//Space Complexity:O(n)
