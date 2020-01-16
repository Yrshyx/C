#include <stdio.h>

int main ()
{
	int i , j , s[3][3] , sum = 0;
	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j< 3 ; j++)
		{
			scanf("%d" , &s[i][j]);
			if (i+j==2)
				sum+=s[i][j];
		}
	}
	printf("%d\n" , sum);
	return 0;
}

