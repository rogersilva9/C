#include<stdio.h>
#include<stdlib.h>	
#define AlturaMaxima 225

typedef struct{

	int peso; //peso em quilogramas
	int altura; //altura em centímetros
}PesoAltura;


typedef struct aux{

//"aux" é um nome temporário, que permite estabelecer, dentro da estrutura, um ponteiro para ela mesma, antes dela receber seu nome "oficial".

	long cpf;
	int idade;
	struct aux * conjuge; //Aponta para outra instância dessa mesma estrutura.
}PESSOA;


//////Programa que manipula a estrutura PESSOA, mais complexa, por possuir um ponteiro//////


//Função que recebe como parâmetro uma CÓPIA de uma variável do tipo PESSOA, isto é, uma estrutura.

void imprimeCPFs(PESSOA p){
	
	if(p.conjuge != NULL){
		printf("CPF do titular: %ld, CPF do cônjuge: %ld\n", p.cpf, p.conjuge->cpf); 
		//Vai na memória apontada por "p.conjuge", no campo "cpf" e imprime este valor.
	}
	
	else printf("CPF do titular: %ld. Titular não possui cônjuge.\n", p.cpf);

}

//Função recebe uma CÓPIA de uma variável do tipo PESSOA.

void envelhecer1(PESSOA p){
	
	p.idade++;
	//Acrescenta uma unidade ao valor no campo idade da CÓPIA da variável do tipo PESSOA, isto é, não modifica o valor da variável original
}


void envelhecer2(PESSOA * p){ //Função recebe o ENDEREÇO para um espaço de memória do tipo PESSOA.

	p->idade++;
	//Vai ao ENDEREÇO apontado por p e aumenta em uma unidade o valor do campo "idade", isto é, modifica o valor na variável original.
}


void envelhecer3(PESSOA p){ //Função que recebe uma CÓPIA de uma variável do tipo PESSOA.

	p.conjuge->idade++;
	//Vai ao ENDEREÇO apontado pelo campo p.conjuge (que está na CÓPIA da variável) e aumenta em uma unidade o valor no campo "idade", isto é, vai ao ENDEREÇO ORIGINAL da estrutura que representa o cônjuge e altera o campo "idade". Altera, portanto, um campo numa variável original.
}


void envelhecer4(PESSOA * p){ //Função recebe o ENDEREÇO para um espaço de memória do tipo PESSOA.

	p->conjuge->idade++;
	//Vai ao ENDEREÇO apontado por p, no campo "conjuge" e, em seguida, vai ao ENDEREÇO apontado por este campo e adiciona uma unidade ao campo idade, isto é, vai ao ENDEREÇO ORIGINAL da estrutura que representa o cônjuge e altera o campo "idade".
}


int main(){

	PESSOA pessoa1; //instância da estrutura PESSOA.
	PESSOA pessoa2;
	PESSOA solteira;
	
	pessoa1.cpf = 34713613835;
	pessoa1.idade = 36;
	pessoa1.conjuge = &pessoa2;
	
	pessoa2.cpf = 39557202840;
	pessoa2.idade = 31;
	pessoa2.conjuge = &pessoa1;
	
	solteira.cpf = 12345678901;
	solteira.idade = 25;
	solteira.conjuge = NULL;
	
	imprimeCPFs(pessoa1);
	imprimeCPFs(pessoa2);
	imprimeCPFs(solteira);
	
	envelhecer1(pessoa1);
	envelhecer2(&pessoa1);
	//quando a função tem como parâmetro um ponteiro, ela deve receber um endereço de memória.

	envelhecer3(pessoa1);
	envelhecer4(&pessoa1);
	
	return 0;	
}


//////Programa que manipula a estrutura PesoAltura utilizando ponteiros//////

/*int main(){

	PesoAltura * pessoa1 = (PesoAltura *) malloc(sizeof(PesoAltura));
	pessoa1->peso = 80;
	pessoa1->altura = 185;
	
	printf("Peso: %i, altura: %i. ", pessoa1->peso, pessoa1->altura);
	
	if(pessoa1->altura > AlturaMaxima) printf("Altura acima da máxima.\n");
	else printf("Altura abaixo da máxima.\n");

	return 0;
}*/


//////Programa que manipula a estrutura PesoAltura//////

/*int main(){

	PesoAltura pessoa1; // Criou-se a instância "pessoa1" da estrutura PesoAltura.
	pessoa1.peso = 80;
	pessoa1.altura = 185;
	
	printf("Peso: %i, altura: %i. ", pessoa1.peso, pessoa1.altura);
	
	if(pessoa1.altura > AlturaMaxima) printf("Altura acima da máxima.\n");
	else printf("Altura abaixo da máxima.\n");

	return 0;
}*/
