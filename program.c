#include<stdio.h>
int main()
{
    int x;

    do
    {
       printf("podaj liczbe od 1 do 100\n");
       scanf("%i",&x);

    }while(!(x>=0 && x<=100));

     printf("podano liczbe wieksza od 0 i mniejsza od 100");


    getchar();
    return 0;


}
