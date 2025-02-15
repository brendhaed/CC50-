#include <cs50.h>
#include <stdio.h>

int main(void)
{   //pega o 1º numero do usuário
    int x = get_int("x: ");
    //pega o 2º numero do usuário
    int y = get_int("y: ");

    //divide os numeros
    float z = (float) x / (float) y;
    printf("%f\n", z);
}
