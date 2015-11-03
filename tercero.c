#include <stdlib.h>
#include <stdio.h>
#include "nodo.h"
#include "operaciones.h"

int main(){
	struct nodo *cabecera;
	int valor,despues;
	cabecera = (struct nodo*) malloc(sizeof(struct nodo));

	printf("ingresa datos, pulsa -1 para dejar de ingresar datos \n");
	while(1){
		printf("ingresa un numero: ");
		scanf("%d",&valor);
		if(valor == -1)
			break;
		insertar_al_principio(cabecera,valor);
	}
	imprimir_lista(cabecera);
	printf("despues de que numero quieres agregar algo");
	scanf("%d",&despues);
	printf("dime que dato quieres agregar despues de %d",despues);
	scanf("%d",&valor);
	insertar_despues_de(cabecera,valor,despues);
	imprimir_lista(cabecera);
	borrar_lista(cabecera);
	return 0;
	
}
