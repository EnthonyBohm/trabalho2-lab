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
	
	printf("\n\nVamos jogar um jogo?\nPedra Papel Tesoura Lagarto e Spock\nVamos escolha um \n1.Pedra \n2.Papel \n3.Tesoura\n4. Lagarto \n5. Spock \n");
	scanf("%d", &esc_us);
	while(esc_us <1 || esc_us >5){
		printf("Valor inv�lido, digite novamente: ");
		scanf("%d", &esc_us);
	}
	printf("\n------------------------------------------\n");
	
	switch (esc_us){
	
	case 1:
		switch (esc_pc){
			case 1:
			printf("Pedra empata com pedra");
			break;
			
			case 2:
			printf("Papel Amassa pedra \nVoc� Perdeu");
			break;
			
			case 3:
			printf("Pedra Quebra Tesoura \nVoc� Ganhou, Parab�ns!");
			break;
			
			case 4:
			printf("Pedra esmaga lagarto \nVoc� Ganhou, Parab�ns!");
			break;
			
			case 5:
			printf("Spock vaporiza pedra \nVoc� perdeu");
			break;
		}
	break;

	case 2:
		switch (esc_pc){
			case 1:
			printf("Papel Amassa pedra \nVoc� ganhou, Parab�ns! ");
			break;
			
			case 2:
			printf("Papel empata com papel");
			break;
			
			case 3:
			printf("Tesoura corta Papel \nVoc� perdeu");
			break;
			
			case 4:
			printf("Lagarto come papel \nVoc� perdeu");
			break;
			
			case 5:
			printf("Papel refuta Spock \nVoc� ganhou,Parab�ns!");
			break;
		}
	break;
	
	case 3:
		switch (esc_pc){
			case 1:
			printf("Pedra Quebra Tesoura \nVoc� Perdeu");
			break;
			
			case 2:
			printf("Tesoura corta o Papel \nVoc� ganhou, Parab�ns!");
			break;
			
			case 3:
			printf("Tesoura empata com tesoura");
			break;
			
			case 4:
			printf("Tesoura decapita lagarto \nVoc� ganhou,Parab�ns!");
			break;
			
			case 5:
			printf("Spock derrete tesoura \nVoc� perdeu");
			break;
		}
	break;
	
	case 4:
		switch (esc_pc){
			case 1:
			printf("Pedra esmaga lagarto \nVoc� perdeu");
			break;
			
			case 2:
			printf("Lagarto come papel \nVoc� ganhou,Parab�ns!");
			break;
			
			case 3:
			printf("Tesoura decapita Lagarto \nVoc� perdeu");
			break;
			
			case 4:
			printf("Lagarto empata com lagarto ");
			break;
			
			case 5:
			printf("Lagarto envenena Spock \nVoc� ganhou, Parab�ns!");
			break;
		}
	break;
	
	case 5:
		switch (esc_pc){
			case 1:
			printf("Spock vaporiza pedra \nVoc� ganhou, Parab�ns!");
			break;
			
			case 2:
			printf("Papel refuta Spock \nVoc� perdeu");
			break;
			
			case 3:
			printf("Spock derrete tesoura \nVoc� ganhou, Parab�ns!");
			break;
			
			case 4:
			printf("Lagarto envenena Spock \nVoc� perdeu");
			break;
			
			case 5:
			printf("Spock empata com Spock");
			break;
		}
	}
		
		printf("\n------------------------------------------\n");
		printf("\nVoc� deseja jogar novamente? (S/N)");
		scanf("    %c",&d);
		
		while(d != 'S' && d != 'N' && d != 's' && d!= 'n'){
			printf("Resposta inv�lida, digite novamente ");
			scanf("  %c",&d);
		}
    }while(d == 'S' || d== 's');
    return 0;
}
