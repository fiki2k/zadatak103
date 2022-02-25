// Progrma treba naci sumu svih znakova u zadanom stringu.

#include <stdio.h>
#include <string.h>
 
void main()
{
    int suma = 0, i, duljina;
    char string[100];
 
    printf("Unesi string : ");
    scanf("%[^\n]s", string);
        duljina = strlen(string);
    for (i = 0; i < duljina; i++)
    {
        suma = suma + string[i];
    }
    printf("\nSuma od svih znakova u stringu : %d ",suma);
}
