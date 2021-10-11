/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
bool isPrime(int n)
{
    // Neu n < 2 thi khong phai la SNT
    if (n < 2){
        return false;
    }

    // Neu n = 2 la SNT
    if (n == 2){
        return true;
    }

    // Neu n la so chan thi ko phai la SNT
    if (n % 2 == 0){
        return false;
    }

    // Lap qua cac so le
    for (int i = 3; i < (n - 1); i += 2){
        if (n % i == 0){
            return false;
        }
    }

    return true;
}

int main(int argc, char *argv[]){
    // printf("Input: %s\n", argv[1]);
    // printf("Output: ");
    int n = atoi(argv[1]);

    for(int i = 2; i <= n; i ++){
        if(isPrime(i)){
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
}
