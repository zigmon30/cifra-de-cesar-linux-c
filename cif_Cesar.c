#include <stdio.h>
int main()
{
    char palavra[30], aux[30];
    int chave=1, i, esc;

    printf("\nOpções:\n 1 criptografar \t 2 descriptografar\n\t");
    scanf(" %d", &esc);

    printf("\nPalavra:");
    scanf(" %s", palavra);

    printf("\n");
    printf("chaves com mensagem cifrada:\n");

 	switch(esc){
 		case 1:
 		    while(chave < 26)
    		{
        i = 0;
        while(palavra[i] != '\0')
        {
            aux[i] = palavra[i] + chave;
            if((palavra[i] + chave) > 122)
            {
                aux[i] -=26;
            }
            if((palavra[i] + chave) < 97)
            {
                aux[i] += 26;
            }
            i++;
        }
        aux[i] = '\0';
        printf("chave %d = palavra cifrada: %s \n", chave, aux);
 
        /*if(chave%5 == 0)
        {
            printf("\n\n");
        }*/
        chave++;
    }

    printf("\n");
    	break;

    	case 2:
    	    while(chave < 26)
    {
        i = 0;
        while(palavra[i] != '\0')
        {
            aux[i] = palavra[i] - chave;
            if((palavra[i] - chave) > 122)
            {
                aux[i] -=26;
            }
            if((palavra[i] - chave) < 97)
            {
                aux[i] += 26;
            }
            i++;
        }
        aux[i] = '\0';
        printf("chave %d = palavra cifrada: %s \n", chave, aux);
 
        /*if(chave%5 == 0)
        {
            printf("\n\n");
        }*/
        chave++;
    }
        break;
 	}





       
    return 0;
}
