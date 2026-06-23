#include<stdio.h>

int graph[10][10];
int edges[50][2];
int color[50];

int e,c;


int isSafe(int index,int col)
{

for(int i=0;i<e;i++)
{
if(color[i]==col)
{
if(edges[i][0]==edges[index][0] ||
edges[i][0]==edges[index][1] ||
edges[i][1]==edges[index][0] ||
edges[i][1]==edges[index][1])
return 0;
}
}

return 1;
}


int solve(int index)
{

if(index==e)
return 1;


for(int i=1;i<=c;i++)
{

if(isSafe(index,i))
{

color[index]=i;

if(solve(index+1))
return 1;

color[index]=0;

}

}

return 0;

}



int main()
{

printf("Enter number of edges: ");
scanf("%d",&e);

printf("Enter edges:\n");

for(int i=0;i<e;i++)
scanf("%d%d",&edges[i][0],&edges[i][1]);


printf("Enter number of colors: ");
scanf("%d",&c);


if(solve(0))
{

printf("Edge Colors:\n");

for(int i=0;i<e;i++)
printf("Edge %d = Color %d\n",i+1,color[i]);

}

else
printf("No solution");


return 0;
}
Input
Enter number of edges: 3

Enter edges:
1 2
2 3
3 1

Enter number of colors: 3
Output
Edge Colors:

Edge 1 = Color 1
Edge 2 = Color 2
Edge 3 = Color 3
