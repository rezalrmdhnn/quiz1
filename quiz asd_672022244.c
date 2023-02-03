#include <stdio.h> 
#include <stdlib.h>

int main(){

int n, i , j, a, b, c;
menu:
printf ("-----menu----- \n");
printf ("1. LEVEL 1 \n");
printf ("2. LEVEL 2 \n");
printf ("3. LEVEL 3 \n");
printf ("4. EXIT   \n");
printf ("masukkan pilihan anda : \n");
scanf ("%d", &n);

switch (n){

case 1 :
    printf ("masukkan angka :");
    scanf ("%d", &n);
    printf ("\n");
        for (i=0; i<=n; i++){
                for (j=0; j<=i; j++){
                    printf ("%3d", i+j);
                }
            printf ("\n");  
        }
		getch();  
		system("cls");
		goto menu;
		printf (" press anykey to continue");
        break;
    case 2 :
    printf ("masukkan angka :");
    scanf ("%d", &n);
    printf ("\n");
        for (i=0; i<=n; i++){
                for (j=1; j<=i; j++){
                    printf ("%3d", i*j);
                }
            printf ("\n");
        }
		getch();  
		system("cls");
		goto menu;
		printf (" press anykey to continue");
        break;
        case 3 :	
    printf ("Program belah ketupat \n");

printf ("Masukkan batas Nilai:");scanf("%d",&n);


for (a=1; a<=n; a++)
{         printf("\n");
for (c=1; c<=(n-a); c++)
{
printf(" ");
}
for (b=1; b<=a;b++)
{
printf("%d",b);
}
for (b=a-1; b>=1;b--)
{
printf("%d",b);
}
}
for (a=n-1; a>=1; a--)
{
printf("\n");
for (c=1; c<=(n-a); c++)
{
printf(" ");
}
for (b=1; b<=a;b++)
{
printf("%d",b);
}
for (b=a-1; b>=1; b--)
{
printf("%d",b);
}	
}
}
	getch();  
	system("cls");
	goto menu;
	printf (" press anykey to continue");
}







