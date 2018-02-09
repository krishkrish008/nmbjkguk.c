#include<stdio.h>
int main()
{
   int ni,ai[100],i,temp,ji,ki;
   printf("enter the count\nenter the elements");
   scanf("%d",&ni);
   for(i=1;i<=ni;i++)
   {
       scanf("%d",&ai[i]);
   }
   for(ji=1;ji<=ni;ji++)
   {
      for(ki=ji+1;ki<=ni;ki++)
      {
        if(ai[ji]>=ai[ki])
        {
        temp=ai[ji];
        ai[ji]=ai[ki];
        ai[ki]=temp;
            
        }
      }
   
   }
     printf(" %d\t",ai[ji/2]);
}
