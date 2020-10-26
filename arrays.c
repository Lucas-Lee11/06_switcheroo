#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    srand(time(NULL));
    int arr[10], arr2[10];
    int i;

    for(i = 0; i < sizeof(arr)/sizeof(int); i++) arr[i] = rand();
    arr[9] = 0;

    for(i = 0; i < sizeof(arr)/sizeof(int); i++) printf("%d ", arr[i]);
    printf("\n");

    int *p1 = &arr[9], *p2 = &arr2[0];
    for(i = 0; i < sizeof(arr)/sizeof(int); i++){
        *p2 = *p1;
        p1--; p2++;
    }

    p2 = &arr2[0];
    for(i = 0; i < sizeof(arr)/sizeof(int); i++) {
        printf("%d ", *p2);
        p2++;
    }
    printf("\n");
    int p[400];
    int *d = p;
    printf("%d and %d\n", sizeof(p), sizeof(d));



    return 0;
}
