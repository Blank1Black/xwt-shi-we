
#include<stdio.h>
int main()
{
    int i = 0;
	int n = 2;
	for (i = 100; i <= 200; i++)
	{
		int sh = 0;
		for (n = 2; n <= i - 1; n++)
			{
				if (i % n == 0)
				{
					sh = 1;
				}

			}

		if (sh == 0)
		
		{
			printf("%d\n", i);
		}
	
	}
	return 0;
}
