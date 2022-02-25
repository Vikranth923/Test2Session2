#include<stdio.h>
int input()
{
  int n;
  printf("enter the term u want\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int x)
{
  int t1=0,t2=1,nextTerm = 0,i;
  if (x==0 || x==1)
  {
    return x;
  }
  else
  {
    nextTerm = t1+t2;
  }
  for (i=3;i<=x;++i)
    {
      t1 = t2;
      t2 = nextTerm;
      nextTerm = t1+t2;
    }
  return nextTerm;
}
void output(int n, int fibo)
{
  printf("the %dth term of the fibonacci is %d",n,fibo);
}
int main()
{
  int n, fib;
  n = input();
  fib = find_fibo(n);
  output(n,fib);
}
