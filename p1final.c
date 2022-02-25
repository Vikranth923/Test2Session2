#include<stdio.h>
void input(float *x1,float *y1, float *x2, float *y2)
{
  printf("enter the co-ordinates of the form x1 y1 x2 y2\n");
  scanf("%f %f %f %f",x1,y1,x2,y2);
}
float my_sqrt(float distance)
{
  float sqrt;
  float a=distance/2;
  float a2 = distance;
  while(a2!=a)
  {
    a2=a;
    a=(a+(distance/a))/2;
  }
  return a;
}
void find_distance(float x1, float y1, float x2, float y2, float *distance)
{
  float x;
  x =((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
  *distance = my_sqrt(x);
}
void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("the distance between the two points(%f,%f) and (%f,%f) is %f\n",x1,y1,x2,y2,distance);
}
int main()
{ float a,b,c,d,dist;
  input(&a,&b,&c,&d);
  find_distance(a,b,c,d,&dist);
  output(a,b,c,d,dist);
  return 0;
}