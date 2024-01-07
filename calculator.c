
#include<stdio.h> 
#include<stdlib.h>
 #include<ctype.h>
 int stack[100],n=100,top=-1;
 void push(int x)
 {
 stack[++top]=x;
 }
 int pop()
 {
 return(stack[top--]);
 }
 void operation(char x)
 {
int n=pop();
 switch(x)
 { 
case '+':
 stack[top]+=n;
 break;
case '-':
 stack[top]-=n; 
break;
 case '*':
 stack[top]*=n; 
break;

case '/':
stack[top]/=n;
 	break;
case '%': 
stack[top]%=n; 
break; 
default: 
printf("THERE IS AN INVALID CHARACTER %c IS PRESENT IN EXPRESSION\n",x);
 exit(0);
}
}
 int main() 
{
 char exp[100],*e;
 printf("enter\n the postfix of the expression:\n");
 scanf("%s",exp); e=exp;
while(*e!='\0')
 {
 if(isdigit(*e))
 push(*e-48); 
else 
operation(*e);
 e++; 
}
 printf("THE EVALUATED RESULT=%d\n",pop());
 return 0; 
}
