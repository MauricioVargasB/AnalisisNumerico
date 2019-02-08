#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <time.h>
//vetor grado 3 posiciones, grado 5 -5 posiciones 

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <time.h>

double funcion (double x);
double derivadaf (double x);

main()
{
int Nit, i;
double cota,xi,xsol,error;

printf("Metodo de Newton-Raphson\n");
printf("Cota de error maxima: ");
scanf ("%lf",&cota);
printf ("Numero maximo de iteraciones: ");
scanf ("%d",&Nit);
printf ("Punto inicial: ");
scanf ("%lf",&xi);

i = 1; /* Contador de iteraciones */
error = cota + 1 ; /* Para asegurar que error > cota al ppio */

while (i<= Nit && error > cota)
{
/* Aplicamos formula Newton-Raphson */
xsol = xi - funcion (xi) / derivadaf(xi);
error = fabs (xsol-xi);
i++;
/* En la siguiente iteracion xsol es xi */
xi = xsol;
}

printf ("La solucion es %lf\n", xsol);
printf ("El valor de la funcion es %g\n",funcion(xsol));
printf ("El error alcanzado es %g\n", error);
if (i>=Nit)
printf ("Se ha alcanzado el maximo n. de iteraciones\n");
else
printf ("El n. de iteraciones ha sido %d\n",i);
getch();
}
double funcion(double x)
{
int i=0, g=0; 
double f, j[100], v=0;
printf ("digite el grado de la ecuacion: \n" );
scanf("%d", &g );
g++;
for(i=0; i<=g; i++)
{
printf ("digite el valor de variable: \n" ); 
scanf("%f", &v); 
j[i]=j[i]+v;
}

//	f = x*x + 2*x - 35;
return (f);

}
double derivadaf(double x)
{
double fp;
fp = 2*x + 2;
return (fp);

}
