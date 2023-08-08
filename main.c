#include <stdio.h>

int Calc , Opc, a, b;

int main(int argc, char* argv[]){
    printf("Hello, from terceiro!\n");

    do
    {
        printf("$ Digite 1 para fazer soma;");
        printf("\n");
        printf("$ Digite 2 para fazer subtração;");
        printf("\n");
        printf("$ Digite 3 para fazer multiplicação;");
        printf("\n");
        printf("$ Digite 4 para fazer divisão;");
        printf("\n");

        printf("Digite: ");
        scanf("%d", &Opc);
        if (Opc == 1)
        {
            Calc =  a + b;
        }
        else if (Opc == 2) 
        {
            Calc = a - b;
        }

        
    } while (0);
    
    return 0;
}
