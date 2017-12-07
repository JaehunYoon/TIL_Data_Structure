#include <stdio.h>

int arr[6][6];
char visited[2][6]={'A','B','C','D','E','F',
					'F','F','F','F','F','F'};
				
void dfs(int v);
	
int main()
{
	int i,j,n;
	
	for(i=0;i<6;i++)
		for(j=0;j<6;j++)
			scanf("%d",&arr[i][j]); // scan only 0 or 1
	
	printf("\nStart node => ");
	scanf("%d",&n);
	
	dfs(n);
}

void dfs(int v)
{
	int j;
	// if node is not visited
	// mark that visited
	
	if(visited[1][v] == 'F')
	{
		visited[1][v] = 'T';
		printf("%c ",visited[0][v]);
	}
	for(j=0;j<6;j++)
		if(arr[v][j] == 1 && visited[1][j] == 'F')
			dfs(j);
			
	return;
}

/*
0 1 0 0 1 1
1 0 1 1 0 0
0 1 0 1 0 0
0 1 1 0 0 0
1 0 0 0 0 1
1 0 0 0 1 0
*/
