#include <stdio.h>



/**
* main - prints all possible different combinations of two digits
* Return: ALways 0 (Success)
*/
int main(void)

{

    

	for (int i = 0; i <= 9; i++)

	{

	    for (int j = i + 1; j <= 9; j++)

	    {

	        putchar(i + '0');

	        putchar(j + '0');

	        if (((i * 10) + j) < 89)

	        {

	            putchar(',');

                putchar(' ');



	        }

	    }

	}

	putchar('\n');

    return 0;

}
