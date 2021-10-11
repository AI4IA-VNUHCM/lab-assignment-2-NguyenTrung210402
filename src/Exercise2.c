/*
2. Write a function to calculate the factorial with given integer n,
which satisfies the following:
	if n is odd, factorial = 1 * 3 * 5 * … * n
	if n is even, factorial = 2 * 4 * 6 * … * n
Ex:
______________________________________
| Input: 11                          |
| Output: 10395                      |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int main(int argc, char *argv[]){
    int num = atoi(argv[1]);
    int total = 1;

    if (num > 0){
        int i = num % 2 == 0 ? 2 : 1;
        while(i <= num){
            total *= i;
            i += 2;
        }
    }

    printf("%d %d", num, total);
    return 0;
}