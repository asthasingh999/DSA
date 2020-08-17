//Quick Sort

#include<stdio.h>
void swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;}
int partition(int a[],int l,int h){
int i=l,j=h;
int pivot_item=a[l];
do{
do{i++;}while(a[i]<=pivot_item);
do{j--;}while(a[j]>pivot_item);
if(i<j)
swap(&a[i],&a[j]);
}while(i<j);
swap(&a[l],&a[j]);
return j;
}
void quick_sort(int a[],int l,int h){
int pivot;
if(l<h)
{pivot=partition(a,l,h);
quick_sort(a,l,pivot);
quick_sort(a,pivot+1,h);}
}
int main(){
int a[]={11,13,7,12,16,9,24,5,10,3};
int n = sizeof(a)/sizeof(a[0]);
quick_sort(a,0,n);
printf("Sorted array is:");
for(int i=0;i<10;i++)
printf("%d ",a[i]);
printf("\n");
return 0;}
//Time Complexity:O(nlogn)
//Space Complexity:O(1)
