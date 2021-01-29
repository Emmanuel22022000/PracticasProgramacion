#include<stdio.h>

int main(){
	printf("Caracter\tValor del caracter en ASCII\n");
	for(int n=65;n<=73;n+=4){
		printf("    %c   \t             %d\n",n,n);
	}
	for(int n=79;n<=85;n+=6){
		printf("    %c   \t             %d\n",n,n);
	}
	printf("\n    %c   \t             181\n",181);
	printf("    %c   \t             144\n",144);
	printf("    %c   \t             214\n",214);
	printf("    %c   \t             224\n",224);
	printf("    %c   \t             233\n\n",233);
	for(int n=97;n<=105;n+=4){
		printf("    %c   \t             %d\n",n,n);
	}
	for(int n=111;n<=117;n+=6){
		printf("    %c   \t             %d\n",n,n);
	}
	printf("\n");
	for(int n=160;n<=163;n++){
		printf("    %c   \t             %d\n",n,n);
	}
	printf("    %c   \t             130\n",130);
	return 0;
}
