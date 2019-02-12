#include <iostream>

using namespace std;

int main(int argc, char** argv){
 
	//Valor de x
	float valorX=8;
	//Coeficientes del polinomio
	float coeficientes[]={4,7,3,6,2};
	float resultado=0;
	int i;
	int cont=0;
 
	//Recorrer los coeficientes
	for(i=0;i<(sizeof(coeficientes)/sizeof(float));i++){
	  //Multiplicar al valor parcial el valor de x mC!s el coeficiente
	  resultado= resultado * valorX + coeficientes[i];
	  cont++;
	}
 
	printf("Resultado %f\n",resultado);
	cout<<"Cantidad: "<<cont<<endl;
	return 0;
}
