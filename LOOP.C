#include<stdio.h>
#include<conio.h>
void loop(int);
void loop1(int);
void loop2(int);

void main()
{
int a;
clrscr();
printf("enter multiplication number ");
scanf("%d",&a);
loop(a);
loop1(a);
loop2(a);
getch();
}

void loop(int a)
{
int i=1,res=0;
int d=a;
printf("While loop\n");
while(i<=3)
{
res=d*i;
printf("%d * %d = %d\n",d,i,res);
i++;
}
}

void loop1(int a)
{
int res=0,i=1;
int c=a;
printf("Do While loop\n");
do
{
res=c*i;
printf("%d * %d = %d\n",c,i,res);
i++;
}while(i<=3);
}

void loop2(int a)
{
int res=0,i;
int b=a;
printf("For loop\n");
for(i=1;i<=3;i++)
{
res=b*i;
printf("%d * %d = %d\n",b,i,res);
}
getch();
}