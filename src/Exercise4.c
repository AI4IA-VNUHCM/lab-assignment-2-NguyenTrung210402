/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[])
{
    int len = argc;
    int next, current;
    char *next_s, *current_s, *temp;	
    int half = (len - 1) / 2;

	for (int i = 1; i < len; i++)
	{
		for(int j = 1; j < half; j++)
		{
			current_s = argv[j];
            next_s = argv[j + 1];
            current = atoi(current_s);
            next = atoi(next_s);

	        if(current > next )
	        {
                temp = argv[j];
	            argv[j] = next_s;
	            argv[j+1] = temp;
	        }
		}

		for (int j = half+1; j < len - 1; j++)
		{
			current_s = argv[j];
            next_s = argv[j + 1];
            current = atoi(current_s);
            next = atoi(next_s);

	        if(current < next)
	        {
                temp = argv[j];
	            argv[j] = next_s;
	            argv[j+1] = temp;
	        }
		}
	}
	// printf("After sorting first half in ascending and second half in descending order:\n");
	for(int i = 1; i < len; i++)
	{
		 printf ("%s ", argv[i]);
	}

    printf("\n");
	return 0;
}