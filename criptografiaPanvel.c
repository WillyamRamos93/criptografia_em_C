#include<stdio.h>
#define MAX_CHARS 200
 
char* criptografar(char mensagem[MAX_CHARS], int cifra);
 
int main(){	
	char texto[MAX_CHARS];
	int i, rotacoes;
	
	
	printf("Digite uma mensagem secreta: ");
	gets(texto);
	printf("Digite o numero de rotacoes: ");
	scanf("%d", &rotacoes);
	
	criptografar(texto, rotacoes);
	
	printf("Mensagem criptografada: %s", texto);
	return 0;
}



char* criptografar(char mensagem[MAX_CHARS], int cifra){
	int i;
	char c;
	
	for(i = 0; mensagem[i] != '\0'; i++){
		c = mensagem[i];
		
		if(c >= 'a' && c <= 'z'){
			c = c + cifra;
			
			if(c > 'z'){
				c = c - 'z' + 'a' - 1;
			}
			mensagem[i] = c;
		}
		else if(c >= 'A' && c <= 'Z'){
			c = c + cifra;
			
			if(c > 'Z'){
				c = c - 'Z' + 'A' - 1;	
			}
			mensagem[i] = c;
		}
	}
	return (mensagem);
}

