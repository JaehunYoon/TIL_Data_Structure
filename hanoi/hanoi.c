#include <stdio.h>
/*
int hanoi(int x);

int main()
{
	int n;
	
	scanf("%d",&n);
	printf("%d ",hanoi(n));
	
	return 0;
}

int hanoi(int x)
{
	if(x==1) return 1;
	
	return hanoi(x-1)+1+hanoi(x-1);
}
*/

void hanoi(int x, char sc, char mc, char dc);

int main()
{
	int n;
	
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	
	return 0;
}

void hanoi(int x, char sc, char mc, char dc)
{
	if(x==0) return;
	
	hanoi(x-1,sc,dc,mc);
	printf("%d : %c -> %c\n", x, sc, dc);
	hanoi(x-1,mc,sc,dc);
}
