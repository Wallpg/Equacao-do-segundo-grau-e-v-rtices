#include <stdio.h>
#include <math.h>
#include <locale.h>

float a,b,c,D,S,S2,xv,yv;
int main ( ) {
	setlocale ( LC_ALL, "Portuguese");

printf(" -------------------------------------\n");
printf(" ------EQUAÇÃO DO SEGUNDO GRAU--------\n");
printf(" -------------------------------------\n");

printf(" Digite o valor de a,b e c\n");
scanf ( "%f %f %f", &a,&b,&c);
D= sqrt ( pow (b,2)-(4* a *c));
S= ((-b)+D)/(2.0*a);
S2= ((-b)-D)/(2.0*a);
printf (" O valor do x1 é %.1f e do x2 é %.1f\n", S,S2);
xv= (-b)/(2.0*a);
yv= (-D)/(4.0*a);
printf ( " E o valor do Xv é %.1f e do Yv é %.1f\n",xv,yv);


return 0;

}
