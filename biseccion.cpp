#include<iostream> 
#include<math.h> 
using namespace std; 

const double EULER = 2.71828182845904523536;
const double PI = 3.14159265358979323846;

double F(double valor){
    double exp=pow(EULER,valor);
    double res=(valor*exp)-PI;
    return res;
}
double biseccion(double a,double b,int MAXIT,double TOL,double EX){ 
    int cont=1; 
    double c; 
    double fc; 
    while(cont<MAXIT){ 
        c=(a+b)/2; 
        fc=F(c); 
        if(abs(b-a)<TOL) 
            return c; 
        if(abs(fc)<EX) 
            return c; 
        if(F(a)*fc<0) 
            b=c; 
        if(fc*F(b)<0) 
            a=c; 
        cont=cont+1;
    } 
    return c;
} 

int main (int argc, char *argv[]) { 
    cout<<biseccion(0,2,100,0.0005,0.00005); 
    return 0; 
} 
