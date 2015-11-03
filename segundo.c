#include "nodo.h"
#include "operaciones.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	struct nodo *cabecera;
	int dato;
	cabecera = (struct nodo*) malloc(sizeof(struct nodo));
	inicializar(cabecera);
	while(1){
		printf("ingresa un numero, pulsa -1 para salir:?\n ");
		scanf("%d",&dato);
		if(dato == -1)
			break;
		insertar_al_principio(cabecera,dato);
	}
	imprimir_lista(cabecera);
	borrar_lista(cabecera);
	return 0;
}
