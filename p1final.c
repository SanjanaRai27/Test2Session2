#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter the values of x1,x2,y1,y2\n");
  scanf("%f %f %f %f",x1,x2,y1,y2);
}
void find_distance(float x1, float y1,float x2, float y2,float *area)
{
  area=sqrt((x2-x1)(x2-x1)+(y2-y1)*(y2-y1));
}
void output(float x1, float y1,float x2, float y2, float area)
{
  printf("the distance between x1=%f y1=%f x2=%f and y2=%f is %f\n",x1,y1,x2,y2,area);

}
int main()
{
  float x1,x2,y1,y2,area;
  input (&x1,&x2,&y1,&y2);
  find_distance(x1,x2,y1,y2,&area);
  output(x1,x2,y1,y2,area);
  return 0;
}
