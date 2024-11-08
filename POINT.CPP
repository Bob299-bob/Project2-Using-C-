//Array of pointer
#include<stdio.h>
#include<conio.h>
void one();
int two();
int three();
void main()
{
 clrscr();
 one();
 two();
 three();
 getch();
}
 void one()
 {
 int *a[3];
 int b[3]={1,2,3};
 for(int i=0;i<3;i++)
 {
  a[i]=&b[i];
 }
 for(i=0;i<3;i++)
 {
  printf("*a[%d]=%u\t",i,a[i]);
  printf("*a[%d]=%d\n",i,*a[i]);
  printf("\n");
 }
 }
 int two()
 {
 int *a[3];
 int i,b=3,c=5,d=6;
 a[0]=&b;
 a[1]=&c;
 a[2]=&d;
 for(i=0;i<3;i++)
 {
 printf("*a[%d]=%u\t",i,a[i]);
 printf("*a[%d]=%d\n",i,*a[i]);
 }
 printf("\n");
 return 0;
 }
 int three()
 {
 int *a[3];
 int i,j,b[3][4]={1,2,3,4,5,6};
 for(i=0;i<3;i++)
 {
  a[i]=b[i];
 }
 return 0;
 }