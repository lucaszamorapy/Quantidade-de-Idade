/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<locale.h>
main()
{
    setlocale(LC_ALL,"");
    int k,id,soma=0,cont=0;
    printf("Digite a quantidade a idades.\n");
    printf("Este valor deve ser maior que zero.\n");
    scanf("%d",&k);
    while(k<=0)
    {
        printf("Digite apenas valores maiores que zero\n");
        scanf("%d",&k);
    }
    do
    {
        printf("Digite a idade que deve ser maior que zero\n");
        scanf("%d",&id);
        while(id<=0)
        {
            printf("Digite apenas valores positivos para as idade\n");
            scanf("%d",&id);

        }
        soma=soma+id;
        cont=cont+1;
    }while(cont!=k);
    printf("A somatória das idades é %i\n",soma);
    }

