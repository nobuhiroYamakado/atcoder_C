#include <stdio.h>
#include <string.h>

int main(void)
{
    int k;
    int arr[33] = {1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51};
    scanf("%d",&k);
    printf("%d", arr[k+1]);
    return (0);
}