#include<stdio.h>
#include<conio.h>
int pat1();
int pat2(int r);
int pat3();
int pat4();
void main()
{
clrscr();
pat1();
printf("Next pattern (pat1)\n");
pat2(4);
printf("Next pattern (pat3) \n");
pat3();
printf("Next pattern (pat4) \n");
pat4();
getch();
}
int pat1()
{
int i,j,r=5;
for(i=0;i<r;i++)
{
for(j=0;j<i;j++)
{
printf("* ");
}
printf("\n");
}
return 0;
}
int pat2(int r)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<=i;j++)
{
printf("%d\t",j+1);
}
printf("\n");
}
return 0;
}
int pat3()
{
 int i,j;
 for(i=4;i>=1;i--)
 {
  for(j=1;j<=i;j++)
  {
   printf("* ");
  }
  printf("\n");
 }
return 0;
}
int pat4()
{
int i,j,k;
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
printf(" ");
}
for(k=i;k<=4;k++)
{
printf("*");
}
printf("\n");
}
return 0;
}