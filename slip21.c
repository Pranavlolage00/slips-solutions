#include<stdio.h>
int main()
{
   int a[100],n,i,num;
   printf("enter limit:");
   scanf("%d",&n);
   printf("enter n elements in an array :");
   for(i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
   printf("enter number to search:");
   scanf("%d",&num);
    for(i=0; i<n; i++)
    {
       if(a[i]==num)
       {
         break;
       }
    }
    if(i==n)
    printf("number is not found");
    else
    printf("number is found");
}

