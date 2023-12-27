#include <stdio.h>
#include <stdlib.h>
/*
-	Nhập vào start và end,
 tìm các số nguyên tố trong khoảng từ start đến end
  sao cho đảo ngược của số đó cũng là số nguyên tố ( 6p )
*/
int main()
{
    int start, end;

    printf("\nNhap Start: ");
    scanf("%d", &start);
    printf("\nNhap End: ");
    scanf("%d", &end);

    for(int num = start; num <= end; num++){
        int isPrime = 1;
        if(num >= 2){
            for(int i = 2; i <= num - 1; i++){
                if(num % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                printf("\n%d", num);
                int tmp = num;
                int rev = 0;
                int prime = 1;
                while(tmp > 0){
                    int a = tmp % 10;
                    rev += rev * 10 + a;
                    tmp /= 10;
                }
                if(rev >= 2){
                    for(int i = 2; i <= rev - 1; i++){
                        if(rev % i == 0){
                            prime = 0;
                            break;
                        }
                    }
                    if(prime){
                        printf("\n%d", num);
                    }
                }
            }
        }
    }
    return 0;
}
