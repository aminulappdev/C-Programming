#include<stdio.h>
int main()
{
 int a[10],n,i;
 int pos=-1,count=0;
 printf("How many values :");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 int search;
 printf("Enter the value you want to search :");
 scanf("%d",&search);
   for(i=0;i<n;i++)
 {
     if(search==a[i])
     {
         pos=i+1;
         printf("\nThe value is found at %d position",pos);
         count=count+1;
     }
}
printf("\n Value is present %d times in array ",count);

  if(pos==-1)
  {
      printf("\nValue is not found");
  }
}
