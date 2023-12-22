#include<stdio.h>
#define MAX 100
struct node
{
   char a[MAX];
   int top;
}s;
void init()
{
    s.top=-1;
}
int isempty()
{
  if(s.top==-1)
  return 1;
  else
  return 0;
}
int isfull()
{
  if(s.top==MAX-1)
  return 1;
  else
  return 0;
}
void push(char ch)
{
  if(isfull())
  printf("stack is full don't push()");
  else
  {
    s.top++;
    s.a[s.top]=ch;
  }
}
char pop()
{
  char val;
  if(isempty())
  {
  printf("stack is empty don't pop()"); 
  }
  else
  {
     val=s.a[s.top];
     s.top--;
     return val;
  }
}
int main()
{
   char s1[20],ch;
   int i,cnto=0,cntc=0;
   init();  
   printf("enter expression:");
   scanf("%s",s1);
   for(i=0; s1[i]!='\0'; i++)
   {
     if(s1[i]=='('||s1[i]==')')
     push(s1[i]);
   } 
   while(!isempty())
   {
     if(pop()=='(')
       cnto++;
     else
       cntc++;
    }
   if(cntc!=cnto)
     printf("\nexpression is not panthasized");
   else
     printf("\nexpression is panthasized");
   
}

