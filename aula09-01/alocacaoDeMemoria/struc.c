#include <stdio.h>
#include <stdlib.h>

// struct data{
//     int dia;
//     int mes;
//     int ano;
// };


// int main(){

//     struct data diaHoje;

//     diaHoje.dia = 01;
//     diaHoje.mes = 9;
//     diaHoje.ano = 2023;

//     printf("O dia de hoje é: %d/%d/%d", diaHoje.dia, diaHoje.mes, diaHoje.ano);


//     return 0;
// }

int main(){

    int *nro =  malloc(sizeof(int));

    printf("%d", nro);

    return 0;
}