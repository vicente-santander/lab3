#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct { //estructura del jugador
	char name[50];
	int nivel;
	int salud;
	int p_ataque;
	int puntaje;
	
} jugador;

int main(){
	int i;
	int max;//maximo de integrantes 
	
	srand(time(NULL));

	
	jugador jugador1, jugador2 , jugador3 , jugador4, jugador5;
	jugador jugador6,jugador7 , jugador8 , jugador9, jugador10;
	
	jugador *equipo[5] = {malloc(sizeof(jugador1)), malloc(sizeof(jugador2)), malloc(sizeof(jugador3)),malloc(sizeof(jugador4)),malloc(sizeof(jugador5))};
	jugador *equipo2[5] = {malloc(sizeof(jugador6)), malloc(sizeof(jugador7)), malloc(sizeof(jugador8)),malloc(sizeof(jugador9)),malloc(sizeof(jugador10))};
	
	printf("indique el maximo de integrante de los equipos:");
	scanf("%d",&max);
	
	if(max <= 0){	//en caso de ser una cifra menor o igual a 0 se establece maximo de integrantes como 1
		printf("el numero de integrantes no puede ser menor o igual a cero");
		printf("se le a asignado como maximo de integrantes de 1");
		max = 1;
	}
	if(max > 5){	//en caso de ser una cifra mayor a 5 se establece maximo de integrantes como 5
		printf("ha excedido el maximo de integrantes de 5");
		printf("se le a asignado como maximo de integrantes 5");
		max = 5;
	}
	
	printf("equipo 1\n");	//asignacion equipo 1
	for(i=0;i<max;i++){
		printf("ingrese el nombre del integrante %d:",i);
		scanf("%s",&equipo[i]->name);
		equipo[i]->nivel = (rand()%100+1);	//se asigna el nivel desde el 1 al 100
		equipo[i]->salud = (rand()%50+1);	//la salud se asigna desde el 1 al 50
		equipo[i]->p_ataque = (rand()%10+1)+10;	//el ataque va del 11 al 20
		equipo[i]->puntaje = (rand()%10+1);	//el puntaje comienza de 1 a 10
		
		printf("\n");
	}
	
	printf("equipo 2\n");	//asignacion equipo 2
	for(i=0;i<max;i++){
		printf("ingrese el nombre del integrante %d:",i);
		scanf("%s",&equipo2[i]->name);
		equipo2[i]->nivel = (rand()%100+1);
		equipo2[i]->salud = (rand()%50+1);
		equipo2[i]->p_ataque = (rand()%10+1)+10;
		equipo2[i]->puntaje = (rand()%10+1);
		
		printf("\n");
	}
	
	printf("\n");
	
	
	for(i=0; i<max; i++){	 
		printf("----------equipo 1----------\n");
		printf("jugador %d\n",i);
		printf("nombre: %s\nnivel: %d\nsalud: %d\nataque: %d\npuntaje: %d\n\n",equipo[i]->name, equipo[i]->nivel, equipo[i]->salud,equipo[i]->p_ataque, equipo[i]->puntaje);
	}
	
	for(i=0; i<max; i++){
		printf("----------equipo 2----------\n");
		printf("jugador %d\n",i);
		printf("nombre: %s\nnivel: %d\nsalud: %d\nataque: %d\npuntaje: %d\n\n",equipo2[i]->name, equipo2[i]->nivel, equipo2[i]->salud,equipo2[i]->p_ataque, equipo2[i]->puntaje);
	}
	
	return 0; 
}
