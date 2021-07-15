#include<stdio.h>
#include<math.h>

void pide(const char*name)
{
  int a, b, c;
  printf("introduzca sus 3 valores: ");
  scanf("%d %d %d", &a, &b, &c);
  res1(a, b, c);
  res2(a, b, c);
  return 0;
}

int res1(int a, int b, int c)
{
  float total;
  float sqr; 
  sqr = (b*b)-(4*a*c);
  sqr = sqrt(sqr);
  total= (-b+sqr)/(2*a);
  printf("%f", total);
  sqr = (b*b)-(4*a*c);
  sqr = sqrt (sqr);
  total= (-b-sqr)/(2*a);
  printf("%f", total);
  syste("pause");
} 

int res2(int a, int b, int c)
{
  float total;
  float sqr; 
  sqr = (b*b)-(4*a*c);
  total= (-b+sqr)/(2*a);
  printf("%f \n", total);
  sqr = (b*b)-(4*a*c);
  total= (-b-sqr)/(2*a);
  printf("%f \n", total);
} 
