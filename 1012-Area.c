#include<stdio.h>
int main()
{
  double a,b,h,triangle,circle,trapezium,square,rectangle;
  scanf("%lf%lf%lf",&a,&b,&h);
  triangle=(0.5)*a*h;
  circle=(3.14159)*h*h;
  trapezium=(a+b)*0.5*h;
  square=b*b;
  rectangle=a*b;
  printf("TRIANGULO: %.3lf\n",triangle);
  printf("CIRCULO: %.3lf\n",circle);
  printf("TRAPEZIO: %.3lf\n",trapezium);
  printf("QUADRADO: %.3lf\n",square);
  printf("RETANGULO: %.3lf\n",rectangle);
return 0;
}
