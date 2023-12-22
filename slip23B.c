#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,n,a[20],top,bottom,mid,num,flag=0,pass,temp;
  printf("enter limit:");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
      a[i]=rand()%100;
  }
    for(pass=1; pass<n; pass++)
  {
    for(i=0; i<n-pass; i++)
    {
       if(a[i]>a[i+1])
       {
         temp=a[i];
         a[i]=a[i+1];
         a[i+1]=temp;
       }
    }
  }
  printf("\n randome array \n");
  for(i=0; i<n; i++)
  {
     printf("%d\t",a[i]);
  }

  printf("\nenter number to search :");
  scanf("%d",&num);
  top=0;
  bottom=n-1;
  while(top<=bottom)
  {
    mid=(top+bottom)/2;
    if(a[mid]==num)
    {
      flag=1;
      break;
    }
    if(num>a[mid])
     {
      top=(mid+1);
     }  
     else
      bottom=(mid-1);
  }
  if(flag!=1)
   printf("number is not found");
  else
    printf("number is found:");
}
