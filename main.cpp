/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{

 int l1,l2;
 int v1,v2,a1,a2;
 
 printf("informe o lado do cubo1: ");
 scanf("%i", &l1);
 
  printf("informe o lado do cubo2: ");
  scanf("%i", &l2);
 
 v1= l1*l1*l1;
 v2= l2*l2*l2;
 
    printf("\n o volume 1 é: %i", v1);
    printf("\n o volume 2 é: %i", v2);
 
 if (l1 > l2) {
        printf("\nO primeiro cubo e maior!\n");
    } else if (l1 < l2) {
        printf("\nO segundo cubo e maior!\n");
    } else {
        printf("\nOs cubos tem o mesmo tamanho!\n");
    }
 
    system("pause > null");

}
