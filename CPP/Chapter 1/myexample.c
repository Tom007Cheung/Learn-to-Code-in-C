#include <stdio.h>
int main(void)
{
	int dogs;
	
	printf("How many dogs do you have?\n");
	scanf("%d", &dogs);
	
	/* My modifications */
	if ( dogs >= 0 )
	{
		if ( dogs == 0 )
		{
			printf("So you have no dogs!\n");
		}
		else if ( dogs == 1)
		{
			printf("So you have only 1 dog!\n");
		}
		else
		{
			printf("So you have %d dogs!\n", dogs);
		} 
	}
	else
	{
		printf("Please check your numbers!\n");
	}

	 
	return 0;
}
