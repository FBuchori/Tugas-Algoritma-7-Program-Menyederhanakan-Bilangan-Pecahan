#include <stdio.h>

int pecahan();
int main()
{
	pecahan();
}
int pecahan()
{
	int a,b,l,t;
	printf("Program Menyederhanakan Bilangan Pecahan\n\n");
	printf("Masukkan Pembilang :");
	scanf("%d",&a);
	printf("Masukkan Penyebut :");
	scanf("%d",&b);
	t=a/b;
	l=a%b;
	if(a%b==0)
		printf("Bilangan(%d/%d)\nDisederhanakan Menjadi %d",a,b,t);
	else if (a%b !=0)
		printf("Bilangan(%d/%d)\nDisederhanakan Menjadi (%d %d-%d)",a,b,t,l,b);
		
}
