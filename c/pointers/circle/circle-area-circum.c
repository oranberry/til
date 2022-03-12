#include <stdio.h>
#define PI 3.1416926

void area_circum(double radius, double *area, double *circum);
int main(){
  double radius;
  double circle_area = 0, circle_circumference = 0;
  printf("Please enter the radius of the circle: ");
  scanf("%lf", &radius);

  area_circum(radius, &circle_area, &circle_circumference);
  
  printf("The area of the circle is: %.3lf\n", circle_area);
  printf("The circumference of the circle is %.3lf\n", circle_circumference);

  return 0;
}
void area_circum(double radius, double *area, double *circum){
  *area = PI * radius * radius;
  *circum = 2 * PI * radius;
}