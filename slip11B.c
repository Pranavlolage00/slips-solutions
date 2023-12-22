#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
}*front,*rear;
void init()
{
  front=NULL;
  rear=NULL;
}
int isempty()
{
  if(front==NULL)
   return 1;
   else
  return 0;
}
void insert(int num)
{
   struct node *newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=num;
   newnode->next=NULL;
   if(isempty())
   {
     rear=front=newnode;
     printf("inserted value=%d",num);
   }
   else
   {
      rear->next=newnode;
      rear=newnode;
      printf("inserted value=%d",num);
   }
}
int delq()
{
   int val;
   struct node *temp;
   if(isempty())
   printf("queue is underflow:");
   else
   {
      temp=front;
      val=temp->data;
      front=front->next;
      free(temp);
      return val;
    }

}
void disp()
{
  struct node *temp;
  for(temp=front; temp!=NULL; temp=temp->next)
  {
     printf("%d\t",temp->data);
  }
}
int main()
{
   int num,ch;
   init();
   do
   {
   printf("\n 1-insert \n 2-delete \n 3-display \n 4-exit");
   printf("\nenter choice:");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1:printf("enter number:");
             scanf("%d",&num);
             insert(num);
             break;
      case 2:printf("deleted value=%d",delq());
             break;
      case 3:disp();
             break;
   }
}while(ch<4);   
}

