 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){
 
 float **arreglo2d;
    int nren,ncol;
    system("cls");
    printf("numero de renglones bro");
    scanf("%d",&nren);
    printf("\nnumero de columnas bro");
    scanf("%d",&ncol);
    
    arreglo2d= (float **)malloc(nren*sizeof(int*));//reservas espacio para el numero de renglones 

    for(int i=0; i<nren; i++)
        arreglo2d[i] = (float *)malloc(ncol*sizeof(int));//usas un ciclo para reservas memoria para tus columnas 
    
    system("cls");//recorta el programa por asi decirlo bro, cuando se ejecuta esta se liminia de la pantalla
    //lo que ya se ejecuto del programa
    for(int i=0;i<nren;i++){//pedir al usuario los valores de tu matriz
        for(int j=0;j<ncol;j++){
            printf("\nDame el valor del espacio[%d][%d]= ",i,j);
            scanf("%f",&arreglo2d[i][j]);
        }
    }
    printf("***************DATOS*****************\n");//imprime tu matriz
    for(int i=0;i<nren;i++){
        for(int j=0;j<ncol;j++){
            printf("%5.2f",arreglo2d[i][j]);
        }
        printf("\n");
    }
    free(arreglo2d);//libera la memoria que reservaste con el malloc
    system("pause");//pone en pausa el programa para que puedas ver k pdo 
    return 0;

    }
    
