/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int n = argc;
	int test_array[n],i;
	for(i=0; i<n;i++){
		test_array[i] = atoi(argv[i+1]);
	}
	//Your codes here
{
    int len = argc;
    int next, current;
    char *next_s, *current_s, *temp;
  
    for (int i = 1; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
	    {
            current_s = argv[i];
            next_s = argv[j];
            current = atoi(current_s);
            next = atoi(next_s);

	        if(next < current)
	        {
                temp = argv[i];
	            argv[i] = next_s;
	            argv[j] = temp;
	        }
	    }
    }
    printf ("Sorted Array ");

    for (int i = 1; i < len; i++)
    {
        printf ("%s ", argv[i]);
    }
    printf("\n");
  
    //printing first half of the array
    for (int i = 1; i <= (len - 1) / 2; i++)
    {
        printf ("%s ", argv[i]);
    }

    //printing second half of the array
    for (int i = len - 1; i > (len - 1) / 2; i--)
    {
        printf ("%s ", argv[i]);
    }

    printf("\n");
    
    return 0;
}
}
