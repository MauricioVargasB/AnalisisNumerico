f=inline('x', 'x'); %Este es el valor a despejar en la funcion g
g=inline('x^3+3*x^2+1', 'x');%Funcion a la cual se le busca el limite


tolerancia = 0.000001;
acum = -4;%valor aproximado a la raiz
inferior = 0;
superior = 0;
distancia2 = 10;




while acum < tolerancia
    p  = feval(f,acum);
    gp  = feval(g,acum);
    distancia = abs(gp-p);



    if(distancia < distancia2)%evaluaos los limites
        distancia2 = distancia;
         inferior = acum;
         superior = acum+0.1;
    end
    acum = acum+0.1;

    %fprintf('p: %d  gp: %d  distancia: %d\n',p,gp,distancia);
    %fprintf('inferior: %d  superior: %d\n',inferior, superior);
end

fprintf('inferior: %d  superior: %d\n',inferior, superior);
