#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *Lec;
	char Nom[50],Ed[5],Ba[50],Ca[50],Ge[50];
	int N;
	Lec=fopen("N.txt","r"); fscanf(Lec,"%d",&N); fclose(Lec);
	printf("\tCuestionario de gustos musicales\n\nNumero de encuestado: %d\n\nCuestionario",N);
	printf("\nNombre completo: ");
	scanf("%[^\n]",&Nom); fflush(stdin);
	printf("Edad: ");
	scanf("%s",&Ed); fflush(stdin);
	printf("Banda favorita: ");
	scanf("%[^\n]",&Ba); fflush(stdin);
	printf("Cancion favorita: ");
	scanf("%[^\n]",&Ca); fflush(stdin);
	printf("Genero favorito: ");
	scanf("%[^\n]",&Ge); fflush(stdin);
	N++;
	Lec=fopen("N.txt","w"); fprintf(Lec,"%d",N); fclose(Lec);
	Lec=fopen("Registro.txt","a"); fprintf(Lec,"\nN° de encuestado: %d",N);
	fprintf(Lec,"\nNombre: %s\nEdad: ",Nom);
	fputs(Ed,Lec);
	fprintf(Lec,"\nBanda Favorita: %s\n",Ba);
	fprintf(Lec,"Cancion Favorita: %s\n",Ca);
	fprintf(Lec,"Genero Favorita: %s\n",Ge);
	fclose(Lec);
	system("cls");
	printf("\n\n\n\tGracias por responder\n\n\n");
	getch();
	return 0;
}



