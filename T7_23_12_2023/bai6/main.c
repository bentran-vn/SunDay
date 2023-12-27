#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    int count = 0;
    int sum = 0;
    int dau = 1;
    for(int i = 1; i <= n; i++){
        if(count == 2){
            dau *= -1;
            count = 0;
        }
        sum += i * dau;
        count++;
    }
    printf("\nSum la: %d", sum);
    return 0;
}
