#include<stdio.h>
void main()
{
    int n,i,j,a[10],temp;
    printf("Enter the no. of elements you want in array:");
    scanf("%d", &n);

    printf("Enter the array elements:");
    for(i=0; i<n; i++){
    scanf("%d",&a[i]);
    }
   
    printf("Array elements are:");
    for(i=0; i<n; i++){
    printf("%d\n", a[i]);
 }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp; 
            }
        }
    }
  
    printf("Array after sorting the element:");
    for(i=0; i<n; i++){
        printf("%d\n", a[i]);
    }
}