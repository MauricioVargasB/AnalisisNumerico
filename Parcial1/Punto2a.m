funcion='tan(3,14159*x)-sin(3,14159*x)';

fprintf('Valores para la funcion\n\n\n\n');
f=sym(funcion);
tolerancia=0.0001;



xnAnterior1=0;
xn1=1;

i=0;
xnFinal1=0;
while(i<2)
    num1=xn1-xnAnterior1;
    den1=subs(f, 'x', xn1) - subs(f, 'x', xnAnterior1);
    f01=subs(f, 'x', xn1);

    xnFinal1 = xn1 + eval(xnAnterior1-f01*((num1)/(den1)));
    
    xnAnterior=xn1;
    xn1=xnFinal1;
    i=i+1;
    
    disp(xnFinal1);

end

%fprintf('evaluacion : %10.4f\n', xnFinal1);



