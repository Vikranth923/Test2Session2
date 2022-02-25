#include<stdio.h>
void input_triangle (float *x1,float*y1, float*x2,float*y2,float*x3, float*y3)
{
  printf("enter the coordinates of the triangle in the form x1 y1 x2 y2 x3 y3\n");
  scanf("%f %f %f %f %f %f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
  float area;
  area = 0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  if (area == 0)
  {
    return 1;
  }
  else 
  {
    return 2;
  }
}
void output(float x1, float y1, float x2, float y2, float x3, float y3, int istriangle)
{
  if (istriangle == 1)
  {
    printf("the given co-ordinates do not form a triangle.\n");
  }
  else
  {
    printf("the entered co-ordinates forms a triangle\n");
  }
}
int main()
{
  float a,b,c,d,e,f,x;
  input_triangle(&a,&b,&c,&d,&e,&f);
  a = is_triangle(a,b,c,d,e,f);
  output(a,b,c,d,e,f,a);
}