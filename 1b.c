#include<stdio.h>
#define sz 20
#include<string.h>
void push(char s[sz],int *top,char ch)
{
*top=*top+1;
s[*top]=ch;
}
void pop(int *top)
{
*top=*top-1;
}
int main()
{
char in[sz],ch,s[sz];
int i,top=-1;
printf("enter the expression");
scanf("%s",in);
push(s,&top,'#');
for(i=0;i<strlen(in);i++)
{
 ch=in[i];
 if(ch=='(')
 push(s,&top,ch);
 if(ch==')')
 {
 if(s[top]!='#')
 pop(&top);
 else
 {
  printf("closiing parentheses are not balanced\n");
  return(0);
  }
  }
  }
  if(s[top]=='#')
  printf("parantheses are balanced");
  else
  printf("opening parentheses are not balanced");
}
