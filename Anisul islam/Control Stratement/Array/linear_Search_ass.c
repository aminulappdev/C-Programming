#include<stdio.h>
int main()
{
int i,n,num[]={8,9,7,8,3,2};
int pos=-1,value,count=0;


     for(i=0; i<6; i++)
  {
      if(8==num[i])
      {
        pos= i+1;
        printf("Your Position is = %d ",pos,i)  ;
        printf("\n");

      }
      if(8==num[i])
      {
           count++;
      }
  }
       printf("Your Value Count is = %d",count);

      if(pos==-1)
      {
          printf("Value is not Found\n");
      }

}


