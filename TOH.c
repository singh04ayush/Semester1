#include <stdio.h>
#include<time.h>
#include<direct.h>
#include<math.h>

void towerOfHanoi(int n, char FR, char TR, char AR) {
    if (n == 1) {
        printf("\nMove disk 1 from rod %c to rod %c", FR, TR);
        return;
    }
    towerOfHanoi(n - 1, FR, AR, TR);
    printf("\nMove disk %d from rod %c to rod %c", n, FR, TR);
    towerOfHanoi(n - 1, AR, TR, FR);
}

int main() {
    clock_t start,end;
    double time;
    int n,m,f;
    printf("No. of Disk-> ");
    scanf("%d",&n);
    start=clock();
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B, and C are the names of the rods
    end=clock();
    m=pow(2,n)-1;
    f=pow(2,n+1)-1;
    time=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTaken %d moves, invoked function %d times and taken %f seconds.",m,f,time);
    return 0;
}
