#include<stdio.h>
#include<math.h>
int input_array_size()
{
  int x;
  printf("enter the size of array\n");
  scanf("%d",&x);
  return x;
}
void init_array(int n, int a[n])
{
  int i;
  for (i=0;i<n;i++)
    {
      a[i]=i;
      a[0]=0;
      a[1]=1;
    }
}
void  erotosthenes_seive(int n, int a[n])
{
  int i=2;
  while (i< sqrt(n))
    {
      while (a[i]==0) i++;
      for(int k = i+i;i<n;k+=i)
        {
          a[k]=0;
        }
    }
}
void output(int n, int a[n])
{
  for (int i = 0; i<n; i++)
    {
      if (a[i] !=0)
        printf("%d ", a[i]);
    }
  printf("\n");
}
int main()
{
  int n;
  n = input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_seive(n,a);
  output(n , a);
}