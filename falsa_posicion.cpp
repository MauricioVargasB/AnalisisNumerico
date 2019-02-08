#include<iostream> 
#include<cmath>//biblioteca para poder utilizar la funcion pow() 
using namespace std; 

/*para encontrar una raíz de la ecuación f(x)=0 analíticamente, proporcionar la función 
F(X) 
DATOS: 
-->a Y b que forman un intervalo, en donde se halla una raíz 
-->TOL criterio de convergencia//la tolerancia 
-->EXACTITUD criterio de exactitud 
-->MAXIT número máximo de iteraciones 
RESULTADOS: 
-->X la raiz aproximada o mensaje de falla 
*/ 
//función de la cual se quiere hallar una raiz 
double F(double x){ 
     
    return 3*pow(x,2)+4*x-7;//en este caso usamos una función cuadratica
} 
double falsa_posicion(double a, double b,int MAXIT,double TOL,double EXACTITUD){ 
    int cont=1; 
    double fa=F(a); 
    double fb=F(b); 
    double c;//punto entre a y b     
    double fc;//F(c)     
    while(cont<MAXIT){ 
        c=(a*F(b)-b*F(a))/(F(b)-F(a));//formula de la falsa posicion         
        fc=F(c); 
        if(abs(fc)<=EXACTITUD){ 
             
            return c;//raiz encontrada
        } 
        if(abs(b-a)<=TOL){ 
            c=(a+b)/2; 
            return c;//raiz encontrada
        } 
         
        if(fc*fb>0) 
            a=c; 
        if(fa*fc>0) 
            b=c; 
        cont=cont+1; 
    
    }
return c;
} 
int main (int argc, char *argv[]) { 
    //exactitud y tolerancia cercanas a cero     cout<<falsa_posicion(0,2,15,0.00000005,0.0000005);//retorna la raiz     
    return 0;
} 
