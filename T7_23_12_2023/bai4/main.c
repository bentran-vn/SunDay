#include <stdio.h>
#include <stdlib.h>
/*
-	Nhập vào 1 số nguyên xịn,
 Kiểm tra số đó có phải là số nguyên tố hay không,
  và in ra tổng và số lượng các số nguyên tố đã đếm được.
   NHập số 0 thì dừng chương trình (  6p )
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
        if(n == 0) {
            printf("\n count: %d, sum: %d", count, sum);
            return;
        }
        if(c == 10){
            int isPrime = 1;
            if(n >= 2){
                for(int i = 2; i <= n - 1; i++){
                    if(n % i == 0){
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime){
                    count++;
                    sum += n;
                    printf("\n count: %d, sum: %d", count, sum);
                }
            }
        }
    }while(1);
    return 0;
}
