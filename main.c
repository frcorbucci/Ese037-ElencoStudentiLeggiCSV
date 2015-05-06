#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRLEN 30
#define MAX_STDLIB 255

struct s_studente
{
 char nome[MAX_STRLEN+1];
 char cognome[MAX_STRLEN+1];
 unsigned int eta;
 char classe[MAX_STRLEN+1];
};

 typedef struct s_studente studente;

int main(int argc, char** argv) 
{

    studente k;
    int i;
    FILE *puntaFile;
    char nomeFile[MAX_STDLIB+1];
    
    printf("Prego inserire il File d'aprire: ");
    scanf("%s.\n", nomeFile);
    
    puntaFile=fopen("elenco.csv", "rb");
    
    if(puntaFile==NULL)
    {  
	fprintf(stderr,"Spiacenti ma il File non e' aperto.\n");
       return 1;
	}
	
	else
	{
    fprintf(stdout,"Il File e' aperto.\n");
    
    fscanf(puntaFile, "%[^;];%[^;];%[^;];%[^;\n]\n", k.nome, k.cognome, &(k.eta), k.classe);
    
    i=0;
    fscanf(puntaFile, "%[^;];%[^;];%d;%[^;\n]\n", k.nome, k.cognome, &(k.eta), k.classe);
    
    while(!feof(puntaFile))
    	{
    	i++;
        fprintf(stdout,"Studente %d\nNome: %s\nCognome: %s\nEta': %d\nClasse: %s\n\n",
                i,
                k.nome,
                k.cognome,
                k.eta,
                k.classe);
        fscanf(puntaFile, "%[^;];%[^;];%d;%[^;\n]\n", k.nome, k.cognome, &(k.eta), k.classe);
    	}	
	}
    
    fclose(puntaFile);
    return (EXIT_SUCCESS);
}
