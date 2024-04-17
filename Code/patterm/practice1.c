#include<stdio.h>
int main()
{
    
  int a[10][10];
  int i,j;
  int b[10][10];
  int k,l;


   printf("Printf Your A matrix\n");

  for(i=1; i<3; i++)
  {
      for(j=1; j<4; j++)
      {
           printf("A[%d][%d] = ",i,j);
           scanf("%d",&a[i][j]);
      }
         
      printf("\n");
  }


  printf("Your matrix: \n");
   for(i=1; i<3; i++)
 {
    for(j=1; j<4; j++)
    {
        printf("%d ",&a[i][j]);
    }
    printf("\n");
 }

}

 