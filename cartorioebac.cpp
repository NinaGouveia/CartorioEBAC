# include <stdio.h>
# include <stdlib.h>
# include <locale.h> 
# include <string.h>

int registro()
{
	char arquivo[40];
	char cpf [40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf ("Digite o CPF a ser cadastrado: ");
	scanf ("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;
	file= fopen(arquivo, "w");
	fprintf(file, cpf);
	fclose(file);
	
	file= fopen(arquivo, "a");
	fprintf(file, "," );
	fclose(file);
	
	printf ("Digite o nome a ser cadastrado: ");
	scanf ("%s", nome);

	file= fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file= fopen(arquivo, "a");
	fprintf(file, "," );
	fclose(file);
	
	printf ("Digite o sobrenome a ser cadastrado: ");
	scanf ("%s", sobrenome);
	
	file= fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file= fopen(arquivo, "a");
	fprintf(file, "," );
	fclose(file);
	
	printf ("Digite o cargo a ser cadastrado: ");
	scanf ("%s", cargo);
	
	file= fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system ("pause");
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
    char cpf[40];
    char conteudo[100];
	
    printf("Digite o CPF a ser consultado: ");
    scanf("%s",cpf);
  	
    FILE *file;
    file = fopen(cpf,"r");
  	
    if(file == NULL)
{
	printf("Não foi possivel abrir o arquivo, não localizado!.\n");
}
	
    while(fgets(conteudo, 200, file) != NULL)
{
	  printf("\nEssas são as informações do usuário: ");
	  printf("%s", conteudo);
	  printf("\n\n");
}
  	
system ("pause");
}

int deletar()
{
	char cpf[40];
	printf("Digite o CPF a ser deletado.\n");
	scanf ("%s", cpf);
	
	remove (cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if (file == NULL)
	{
		printf("Usuário não se encontra no sistema.\n");
		system("pause");
	}
	
	
	
    system("pause");
}

int main()
{   
    int opcao=0;
    int laco=1;
    
    for(laco=1; laco=1;)
    {
	
	    setlocale (LC_ALL, "Portuguese");
	
	    system("cls");
	 
	    printf("### Cartório da EBAC ###\n\n");
	
	    printf("Escolha a opção desejada do menu:\n\n");
    	printf("\t1 - Registrar um nome:\n");
    	printf("\t2 - Consultar um nome:\n");
    	printf("\t3 - Deletar um nome\n\n");
    	printf("Opção: ");
	
    	scanf("%d", &opcao);
	
	    system("cls");
	    
	    switch(opcao)
	    {
	    	case 1:
	        registro();
	    	break;	
	    	
	    	case 2:
	    	consulta();
		    break;
		    
		    case 3:
		    deletar();
        	break;
        	
        	default:
        	printf("opção não está disponível.\n");
		    system("pause");
		    break;
		}
	
	   
		    
	    }
	
}
	

