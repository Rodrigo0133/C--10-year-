#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	
	int num,votos[23],i,maior=0;
	string nome[23]={"Thibaut Courtois","Andriy Lunin","Dani Carvajal","Trent Alexander-Arnold","Éder Militão","David Alaba","Dean Huijsen","Ferland Mendy","Antonio Rüdiger","Eduardo Camavinga","Federico Valverde","Aurélien Tchouaméni","Arda Güler","Jude Bellingham","Dani Ceballos","Kylian Mbappé","Vinícius Júnior","Rodrygo","Brahim Díaz","Endrick","Luka Modrić","Fran García","Raúl Asencio"};
	for(i=0;i<23;i++){
	    
	    votos[i]=0;
	}
	cout << "Escreve os números dos jogadores votados de 1 a 23\n";
	do{
	   cin>>num;
	   if(num!=0){
	   votos[num-1]=votos[num-1]+1;
	   if(votos[num-1]>maior){
	       maior=votos[num-1];
	   }}
	   
	}while(num!=0);
	
	for(i=0;i<23;i++){
	    if(maior == votos[i]){
	        cout<< "O jogador mais votado foi o " << nome[i] << " com " << maior << " votos, que é a camisa "<< i+1;
	    }
	}
	
	return 0;
}