/*
*Tesoura corta papel
*Papel cobre pedra
*Pedra esmaga lagarto
*Lagarto envenena Spock
*Spock derrete tesoura
*Tesoura decapita Lagarto
*Lagarto come papel
*Papel refuta Spock
*Spock vaporiza pedra
*Pedra amassa tesoura
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int esc_pc,esc_us;
	char d;
	
	do{
	
	srand(time(NULL));
	esc_pc= rand()%6;
	while(esc_pc == 0){
		esc_pc= rand()%6;
	}
//	printf("%d",esc_pc);
	
	printf("Vamos jogar um jogo?\nPedra Papel Tesoura Lagarto e Spock\nVamos escolha um \n1.Pedra \n2.Papel \n3.Tesoura\n4. Lagarto \n5. Spock \n");
	scanf("%d", &esc_us);
	while(esc_us <1 || esc_us >5){
		printf("Valor inv�lido, digite novamente: ");
		scanf("%d", &esc_us);
	}
	printf("\n------------------------------------------\n");
	
	if(esc_us == 1){
		if (esc_pc == 1){
			printf("Pedra empata com pedra");
		}
		if (esc_pc == 2){
			printf("Papel Amassa pedra \nVoc� Perdeu");
		}
		if (esc_pc == 3){
			printf("Pedra Quebra Tesoura \nVoc� Ganhou, Parab�ns!");
		}
		if (esc_pc == 4){
			printf("Pedra esmaga lagarto \nVoc� Ganhou, Parab�ns!");
		}
		if (esc_pc == 5){
			printf("Spock vaporiza pedra \nVoc� perdeu");
		}
	}
	if(esc_us == 2){
		if (esc_pc == 1){
			printf("Papel Amassa pedra \nVoc� ganhou, Parab�ns! ");
		}
		else if(esc_pc == 2){
			printf("Papel empata com papel");
		}
		else if (esc_pc == 3){
			printf("Tesoura corta Papel \nVoc� perdeu");
		}
		else if(esc_pc == 4){
			printf("Lagarto come papel \nVoc� perdeu");
		}
		else if(esc_pc == 5){
			printf("Papel refuta Spock \nVoc� ganhou,Parab�ns!");
		}
	}
	if (esc_us == 3){
		if (esc_pc == 1){
			printf("Pedra Quebra Tesoura \nVoc� Perdeu");
		}
		if (esc_pc == 2){
			printf("Tesoura corta o Papel \nVoc� ganhou, Parab�ns!");
		}
		if (esc_pc == 3){
			printf("Tesoura empata com tesoura");
		}
		if (esc_pc == 4){
			printf("Tesoura decapita lagarto \nVoc� ganhou,Parab�ns!");
		}
		if (esc_pc == 5){
			printf("Spock derrete tesoura \nVoc� perdeu");
		}
	}
	if (esc_us == 4){
		if(esc_pc == 1){
			printf("Pedra esmaga lagarto \nVoc� perdeu");
		}
		if(esc_pc == 2){
			printf("Lagarto come papel \nVoc� ganhou,Parab�ns!");
		}
		if(esc_pc == 3){
			printf("Tesoura decapita Lagarto \nVoc� perdeu");
		}
		if(esc_pc == 4){
			printf("Lagarto empata com lagarto ");
		}
		if(esc_pc == 5){
			printf("Lagarto envenena Spock \nVoc� ganhou, Parab�ns!");
		}
	}
	if (esc_us == 5){
		if(esc_pc == 1){
			printf("Spock vaporiza pedra \nVoc� ganhou, Parab�ns!");
		}
		if(esc_pc == 2){
			printf("Papel refuta Spock \nVoc� perdeu");
		}
		if(esc_pc == 3){
			printf("Spock derrete tesoura \nVoc� ganhou, Parab�ns!");
		}
		if(esc_pc == 4){
			printf("Lagarto envenena Spock \nVoc� perdeu");
		}
		if(esc_pc == 5){
			printf("Spock empata com Spock");
		}
	}
		
		printf("\n------------------------------------------\n");
		printf("\nVoc� deseja jogar novamente? (S/N)");
		scanf("    %c",&d);
		
		while(d != 'S' && d != 'N'){
			printf("Resposta inv�lida, digite novamente (USE MA�USCULA!)");
			scanf("  %c",&d);
		}
    }while(d == 'S');
    return 0;
}
