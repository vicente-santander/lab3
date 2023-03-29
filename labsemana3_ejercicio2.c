#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct {
	char name[50];
	int nivel;
	int salud;
	int p_ataque;
	int puntaje;
	
} jugador;

int main(){
	int i;
	int max;
	

	
	jugador jugador1 = {"",12,20,10,1}, jugador2 = {"",5,10,5,10}, jugador3 = {"",1,1,1,1}, jugador4 = {"",1,1,1,1}, jugador5 = {"",1,1,1,1};
	
	jugador *equipo1[5] = {malloc(sizeof(jugador1)), malloc(sizeof(jugador2)), malloc(sizeof(jugador3)),malloc(sizeof(jugador4)),malloc(sizeof(jugador5))};
	
	printf("indique el tamaño de los equipos");
	scanf("%d",&max);
	
	for(i=0;i<max;i++){
		printf("ingrese el nombre:");
		scanf("%s",&equipo1[i]->name);
		/*printf("ingrese el nivel:");
		scanf("%d",&jugadores[i]->nivel);
		printf("ingrese la salud:");
		scanf("%d",&jugadores[i]->salud);
		printf("ingrese el puntaje:");
		scanf("%d",&jugadores[i]->puntaje);*/
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0; i<max; i++){
		printf("jugador %d\n",i);
		printf("nombre: %s\nnivel: %d\nsalud: %d\npuntaje: %d\n\n",equipo1[i]->name, equipo1[i]->nivel, equipo1[i]->salud, equipo1[i]->puntaje);
	}
	
	return 0; 
}
