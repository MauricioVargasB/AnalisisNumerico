#include <iostream.h>
#include <conio.h>
#include <math.h>

main ( )
 {
      int n, i, m, t, k;

    cout << "\n\n\t\t METODO DE HORNER PARA EVALUAR POLINOMIOS ";
    cout << "\n\n\t Ingrese el grado del polinomio ";
    cin >> n;

    int a[n], b[n];
    cout << "\n\n Ingrese los coeficientes con su signo correspondiente \n";
    for(i=0; i<=n; i++)
    {
           m = n-i;
           cout << "\n a("<< m <<") : > ";
           cin >> a[n-i];
     }

     cout << "\n\n ingrese el polinomio: \n\n P(x) = ";
     for(i=0; i<=n; i++)
     {
           m=n-i;
           if(i!=n)
           {
                cout << " " << a[m] << " x' " << m << " + ";
            }
           else
            {
               cout << " " << a[m] << " ";
             }
      }

cout << "\n\n\n Coloque el valor para evaluar el P(x): ";
cin >> t;

b[n] = a[n];
for(k=(n-1); k>=0; k--)
{
     b[k] = t*b[k+1]+a[k];
}

cout << "\n\n\t La raiz es:  " << b[0];
cout << endl << endl;
system("PAUSE");
return 0;
}
