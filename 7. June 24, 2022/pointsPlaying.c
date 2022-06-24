#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

struct point
{
  double x,y;
};

double areaOfTriangle(double side1,double side2,double side3)
{
  double s=(side1+side2+side3)/2;
  double area=pow(s*(s-side1)*(s-side2)*(s-side3),0.5);
  return area;
}

bool isCollinear(double side1,double side2, double side3)
{

  if(side1+side3==side2 || side1+side2==side3 || side3+side2==side1) return true;
  else return false;
  
}

int main()
{
  struct point P,Q,R;
  scanf("%lf %lf %lf %lf %lf %lf",&P.x,&P.y,&Q.x,&Q.y,&R.x,&R.y);

  double side1=pow(pow(P.x-Q.x,2)+pow(P.y-Q.y,2),0.5);
  double side2=pow(pow(R.x-Q.x,2)+pow(R.y-Q.y,2),0.5);
  double side3=pow(pow(P.x-R.x,2)+pow(P.y-R.y,2),0.5);

  if(isCollinear(side1,side2,side3))
  {
      printf("Points are collinear");
  }
  else
  {
    printf("Area of the triangle is %lf unit",areaOfTriangle(side1,side2,side3));
  }
  return 0;
}