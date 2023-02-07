#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  int a,b,c;
  float s,d,area;
  printf("enter the three sides");
  scanf("%d%d%d",&a,&b,&c);
  s=(a+b+c)/2;
  d=(s*(s-a)*(s-b)*(s-c));
  area=sqrt(d);
  printf("area od the triangle=%f sq units \n",area);
  return 0;
}
