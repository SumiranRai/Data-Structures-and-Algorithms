// Towers of Hanoi
#include<stdio.h>

void towerOfHanoi(int n, char rod_A, char rod_B, char rod_C)
{
    if(n == 0) 
    {
        return;
    }
    towerOfHanoi(n - 1, rod_A, rod_C, rod_B);
    printf("Move disk %d from rod %c to rod %c\n", n, rod_A, rod_C);
    towerOfHanoi(n -1, rod_B, rod_C, rod_A);
}

// Main code
int main() 
{
    int N = 3;

    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}