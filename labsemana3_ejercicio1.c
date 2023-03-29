#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct {
	char name[50];
	int nivel;
	int salud;
	int puntaje;
	
} jugador;

int main(){
	int i;
	
	jugador jugador1 = {"",0,0,0}, jugador2 = {"",0,0,0}, jugador3 = {"",0,0,0};
	jugador *jugadores[3] = {malloc(sizeof(jugador1)), malloc(sizeof(jugador2)), malloc(sizeof(jugador3))};
	
	for(i=0;i<3;i++){
		printf("ingrese el nombre:");
		scanf("%s",&jugadores[i]->name);
		printf("ingrese el nivel:");
		scanf("%d",&jugadores[i]->nivel);
		printf("ingrese la salud:");
		scanf("%d",&jugadores[i]->salud);
		printf("ingrese el puntaje:");
		scanf("%d",&jugadores[i]->puntaje);
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0; i<3; i++){
		printf("jugador %d\n",i);
		printf("nombre: %s\nnivel: %d\nsalud: %d\npuntaje: %d\n\n",jugadores[i]->name, jugadores[i]->nivel, jugadores[i]->salud, jugadores[i]->puntaje);
	}
	
	return 0; 
}
