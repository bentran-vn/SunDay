#include <stdio.h>
#include <stdlib.h>
/*
- Viết 1 chương trình nhận vào số có 2 chữ số,
 nếu số đó là số nguyên tố và tổng 2 chữ số chia hết cho 2 thì kết thúc,
  còn không thì nhập lại đến chết ( 4p )
*/
int main()
{
    int n;
    char c;
    int count = 0;
    int sum = 0;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &c);
        fflush(stdin);
        /*
        if(n == 0) {
            printf("\n count: %d, sum: %d", count, sum);
            return;
        }*/
        if(c == 10 && n >= 10 && n < 100){
            int isPrime = 1;
            if(n >= 2){
                for(int i = 2; i <= n - 1; i++){
                    if(n % i == 0){
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime){
                    int tmp = n;
                    int sum = 0;
                    while(tmp > 0){
                        sum += tmp % 10;
                        tmp /= 10;
                    }
                    if(sum % 2 == 0){
                        return;
                    }
                }
            }
        }
    }while(1);
}
