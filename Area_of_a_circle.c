#include <stdio.h>
#include <math.h>
int main()
{
  float radius, area;
  scanf("%f", &radius);

  area = 3.14*radius*radius;

  printf("%.2f
", area); 

  return 0;
}