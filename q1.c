#include<stdio.h>

void sort(int a[],int n)
{
int i,j,temp;

for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
}

int main()
{
int n,capacity;
int items[50];
int bins[50];
int count=0;

printf("Enter number of items: ");
scanf("%d",&n);

printf("Enter item sizes:\n");

for(int i=0;i<n;i++)
scanf("%d",&items[i]);

printf("Enter bin capacity: ");
scanf("%d",&capacity);


sort(items,n);


for(int i=0;i<n;i++)
{
int placed=0;

for(int j=0;j<count;j++)
{
if(bins[j]+items[i]<=capacity)
{
bins[j]+=items[i];
placed=1;
break;
}
}

if(!placed)
{
bins[count]=items[i];
count++;
}

}


printf("Number of bins used: %d",count);


return 0;
}
Input
Enter number of items: 5

Enter item sizes:
4
8
1
4
2

Enter bin capacity: 10
Output
Number of bins used: 2
