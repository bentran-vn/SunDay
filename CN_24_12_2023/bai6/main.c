#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào n, tìm số nguyên tố lớn nhất trong khoảng từ từ 1 -> n sao cho nó có tổng
là các số nguyên tố liên tiếp trước nó ! ( 7p )
*/
int main()
{
    int n;
    int max = 0;
    int sum = 0;
    printf("\nNhap n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i >= 2){
            int isPrime = 1;
            for(int j = 2; j <= i - 1; j++){
                if(i % j){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                printf("\n%d", i);
                sum += i;
                int isPrimeS = 1;
                for(int z = 2; z <= sum - 1; z++){
                    if(sum % z){
                        isPrimeS = 0;
                        break;
                    }
                }
                if(isPrimeS && sum > max && sum < n){
                    max = sum;
                }
            }
        }
    }
    printf("\nMax la: %d", max);
    return 0;
}
