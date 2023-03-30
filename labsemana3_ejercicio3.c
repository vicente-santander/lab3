#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct jugador { //estructura del jugador
	char name[50];
	int nivel;
	int salud;
	int p_ataque;
	int puntaje;
	
} jugador;


void detallesEquipo1(int opcion, struct jugador *equipo[5], struct jugador *equipo2[5], int max){
	int eleccion;
	int i=0,j=0;
	
	while(j==0){
	
		printf("De que equipo es el jugador:");
		scanf("%d",&eleccion);	//determinar el equipo al que pertenece el jugador
		
		if(eleccion < 1 || eleccion > 2){
			printf("opcion invalida\n");
		}
		
		if(eleccion==1){
			
			for(i=0; i<max; i++){	 
				printf("[%d] nombre: %s\n",i,equipo[i]->name);	//mostrar numero asignado a los jugadores para que sepa cual seleccionar
			}
			printf("cual es el numero del jugador:\n");
			scanf("%d",&i);
			printf("---------\n");
			printf("nombre: %s\nnivel: %d\nsalud: %d\nataque: %d\npuntaje: %d\n\n",equipo[i]->name, equipo[i]->nivel, equipo[i]->salud,equipo[i]->p_ataque, equipo[i]->puntaje);
			j++;
		}
		
		if(eleccion==2){
			for(i=0; i<max; i++){	 
				printf("[%d] nombre: %s\n",i,equipo2[i]->name);
			}
			printf("cual es el numero del jugador:\n");
			scanf("%d",&i);
			printf("---------\n");
			printf("nombre: %s\nnivel: %d\nsalud: %d\nataque: %d\npuntaje: %d\n\n",equipo2[i]->name, equipo2[i]->nivel, equipo2[i]->salud,equipo2[i]->p_ataque, equipo2[i]->puntaje);
			j++;
		}
	}
}

int cambiostats(struct jugador *equipo[5], struct jugador *equipo2[5], int max){
	int eleccion;
	int i=0,j=0;
	int stat=0;
	int act;
	

		printf("De que equipo es el jugador:");
		scanf("%d",&eleccion);	//determinar el equipo al que pertenece el jugador
		
		if(eleccion < 1 || eleccion > 2){
			printf("opcion invalida\n");
			printf("se seleccioma opcion 1\n");
			eleccion=1;
		}
		
		if(eleccion==1){
			
			for(i=0; i<max; i++){	 
				printf("[%d] nombre: %s\n",i,equipo[i]->name);	//mostrar numero asignado a los jugadores para que sepa cual seleccionar
			}
			
			printf("cual es el numero del jugador:\n");
			scanf("%d",&i);
			
			printf("---------\n");
			printf("nombre: %s\nnivel: %d\nsalud: %d\nataque: %d\npuntaje: %d\n",equipo[i]->name, equipo[i]->nivel, equipo[i]->salud,equipo[i]->p_ataque, equipo[i]->puntaje);
			printf("---------\n");
			printf("Opciones\n");
			printf("[1]	nivel\n");
			printf("[2]	salud\n");
			printf("[3]	ataque\n");
			printf("[4]	puntaje\n");
			printf("Cual estadistica desea cambiar:");
			scanf("%d",&stat);
			
			if(stat == 1){
				printf("A cuanto desea cambiar el nivel:");
				scanf("%d",&act);
				equipo[i]->nivel = act;	
			}
			
			if(stat == 2){
				printf("A cuanto desea cambiar la salud");
				scanf("%d",&act);
				equipo[i]->salud=act;
			}
				if(stat == 3){
				printf("A cuanto desea cambiar el ataque:");
				scanf("%d",&act);
				equipo[i]->p_ataque=act;
			}
				if(stat == 4){
				printf("A cuanto desea cambiar el puntaje:");
				scanf("%d",&act);
				equipo[i]->puntaje=act;
			}
		}
		if(eleccion==2){
			
			for(i=0; i<max; i++){	 
				printf("[%d] nombre: %s\n",i,equipo2[i]->name);	//mostrar numero asignado a los jugadores para que sepa cual seleccionar
			}
			
			printf("cual es el numero del jugador:\n");
			scanf("%d",&i);
			
			printf("---------\n");
			printf("nombre: %s\nnivel: %d\nsalud: %d\nataque: %d\npuntaje: %d\n",equipo2[i]->name, equipo2[i]->nivel, equipo2[i]->salud,equipo2[i]->p_ataque, equipo2[i]->puntaje);
			printf("---------\n");
			printf("Opciones\n");
			printf("[1]	nivel\n");
			printf("[2]	salud\n");
			printf("[3]	ataque\n");
			printf("[4]	puntaje\n");
			printf("Cual estadistica desea cambiar:");
			scanf("%d",&stat);
			
			if(stat == 1){
				printf("A cuanto desea cambiar el nivel:");
				scanf("%d",&act);
				equipo2[i]->nivel = act;	
			}
			
			if(stat == 2){
				printf("A cuanto desea cambiar la salud");
				scanf("%d",&act);
				equipo2[i]->salud=act;
			}
				if(stat == 3){
				printf("A cuanto desea cambiar el ataque:");
				scanf("%d",&act);
				equipo2[i]->p_ataque=act;
			}
				if(stat == 4){
				printf("A cuanto desea cambiar el puntaje:");
				scanf("%d",&act);
				equipo2[i]->puntaje=act;
			}
		}
	
	return 0;
}

void calcularptj(struct jugador *equipo[5], struct jugador *equipo2[5], int max){
	int i;
	int sum=0, sumtot=0;
	int sum2=0,sumtot2=0;
	
	for(i=0; i < max; i++){	 
		sum = equipo[i]->puntaje;
		sumtot = sumtot + sum;
	}
	printf("puntaje total equipo 1: %d\n",sumtot);

	for(i=0; i < max; i++){	 
		sum2 = equipo2[i]->puntaje;
		sumtot2 = sumtot2 + sum2;
	}
	printf("puntaje total equipo 2: %d\n",sumtot2);
	
	if(sumtot > sumtot2){
		printf("gano el equipo 1");
	}
	if(sumtot < sumtot2){
		printf("gano el equipo 2");
	}
	if(sumtot == sumtot2){
		printf("empate");
	}
}

int main(){
	int i=0;
	int max;//maximo de integrantes
	int opcion; 
	
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
		printf("ha excedido el maximo de integrantes de 5\n");
		printf("se le a asignado como maximo de integrantes 5\n");
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
	
	i=0;
	while(i==0){
		printf("--------\n");
		printf("Opciones\n");
		printf("--------\n\n");
		
		printf("[1] Ver estadisticas de un jugador\n");
		printf("[2] Cambiar estadisticas\n");
		printf("[3] Comenzar partida\n");
		printf("Que accion va a realizar:");
		scanf("%d",&opcion);
		
		if(opcion < 1 || opcion > 3){
			printf("Opcion invalida");
		}
		
		if(opcion == 1){
			detallesEquipo1(opcion, equipo, equipo2, max);
		
		}
		
		if(opcion== 2){
			cambiostats(equipo, equipo2, max);
			
		}
		
		if(opcion == 3){
			calcularptj(equipo, equipo2, max);
			
			i = 2;
		}
	}
	
	
	
	
	
	
	
	
	return 0; 
}
