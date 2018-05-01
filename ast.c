#include <stdio.h>
char frase[] = 
"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras euismod orci ac\
sit amet faucibus ultrices. Sed pharetra vel erat et ornare. Duis eu lorem non leo dictum\
egestas. Integer diam arcu, volutpat ut elit vitae, finibus molestie risus. Vivamus sagittis\
commodo risus vel finibus. Vestibulum vehicula tortor ut ante tincidunt, non tincidunt\
turpis sodales. Nam orci diam, pulvinar in ante a, dignissim pulvinar magna. Mauris massa\
tortor, fermentum pretium lobortis sed, luctus vitae tortor. Suspendisse sagittis augue sit\
amet risus molestie, sed dapibus enim vulputate. Sed tempus risus vel dolor ornare, eget\
imperdiet ligula aliquam. Mauris ac auctor lacus. Quisque suscipit interdum rutrum. Sed\
placerat sit amet urna in vulputate. Nulla facilisis mi nisi, vel pulvinar odio auctor\
posuere";
int cuentaLetra(char x);
void pintaAsteriscos(int n);
int main()
{
char vocales[5] = {'a', 'e', 'i', 'o', 'u'};
int i, nLetra[5]; //Vector de resultados
// Cuenta las apariciones de cada letra, y almacena resultados en un
// vector
for (i = 0; i < 5; i++)
nLetra[i] = cuentaLetra(vocales[i]);
for (i = 0; i < 5; i++)
{ // Recorre el vector de resultados, y pinta asteriscos
// correspondientes a cada letra
//2
printf(" %c: ", vocales[i]);
pintaAsteriscos(nLetra[i]);
printf("\n");
}
return 0;
}
int cuentaLetra(char x)
{

int i, n = 0;
i = 0;
while (frase[i] != '\0')
{
if (frase[i] == x)
n++; // Contador de apariciones
i++;
}
return n;
}
void pintaAsteriscos(int n)
{
int i;
if (n > 0)
for (i = 1; i <= n; i++)
printf("*");
}
