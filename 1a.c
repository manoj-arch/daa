#include<stdio.h>
#define stack_size 5
int s[stack_size];
int top=-1;
void push()
{
	int n;
	if(top==stack_size-1)
	printf("stack is empty");
	else
	{
		printf("enter element to add\n");
		scanf("%d",&n);
		s[++top]=n;
	}
}
void pop()
{
	if(top==-1)
	printf("stack is empty\n");
	else
	{
	 printf("%d element is poped\n",s[top--]);
 }
}
void display()
{
	int i;
	if(top==-1)
	printf("stack is empty\n");
	else
	{
		printf("elements in stack\n");
		for(i=top;i>=0;i--)
		printf("%d\n",s[i]);
	}
	
}
int main()
{
	int ch;
	for(;;)
	{
		printf("enter your choice\n");
		printf("\n1.push\t2.pop\t3.display\t4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: return 0;
			default:printf("invalid chooice");
		}
	
	}
}
		
	
