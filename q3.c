#include<stdio.h>

int main()
{

int n,m;
int universe[50];
int sets[20][50];

int covered[50]={0};

printf("Enter number of elements: ");
scanf("%d",&n);


printf("Enter number of subsets: ");
scanf("%d",&m);


printf("Enter subset values:\n");

for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&sets[i][j]);
}


int count=0;


while(count<n)
{

int best=-1;
int maxGain=0;


for(int i=0;i<m;i++)
{

int gain=0;

for(int j=0;j<n;j++)
{

if(sets[i][j]&&!covered[j])
gain++;

}


if(gain>maxGain)
{
maxGain=gain;
best=i;
}

}


if(best==-1)
break;


printf("Selected Set: %d\n",best+1);


for(int j=0;j<n;j++)
{

if(sets[best][j])
{
if(!covered[j])
count++;

covered[j]=1;
}

}

}


return 0;

}
Input
Enter number of elements: 5

Enter number of subsets: 3

Enter subset values:

1 1 0 0 0
0 1 1 1 0
0 0 0 1 1
Output
Selected Set: 2

Selected Set: 3
