// A Largest Rectangle output = 3

#include<iostream>


int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n,m;
		scanf("%d %d",&n,&m);

		int A[n],B[m];
	
		for(int i=0;i<n;i++)
			scanf("%d",&A[i]);
		
		for(int i=0;i<m;i++)
			scanf("%d",&B[i]);

		int min = A[0], max = A[0];
	
		for(int i=0; i<n ; i++)
		{
			for(int j=0; j<m ;j++)
			{
				if (A[i] == B[j])
				{
					if (min > A[i])
						min = A[i];

					if (max < A[i])
						max = A[i];
					break;
				}
			}
		}
		if (t == 0)
			printf("%d",max-min);
		else
			printf("%d\n",max-min);

	}
}
