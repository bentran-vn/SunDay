#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
-	Nhập vào 1 số nguyên xịn,
 Kiểm tra số đó có phải là số nguyên tố hay không,
  và in ra tổng và số lượng các số nguyên tố đã đếm được.
   NHập số 0 thì dừng chương trình (  6p )
*/
int main()
{
    int start;
    int end;
    int countP = 0;
    int countO = 0;
    int countE = 0;
    int countS = 0;

    printf("\nNhap vao start: ");
    scanf("%d", &start);
    printf("\nNhap vao end: ");
    scanf("%d", &end);

    for(int numeber = start; numeber <= end; numeber++){
        int isPrime = 1;
        if(numeber >= 2){
            for(int i = 2; i <= numeber - 1; i++){
                if(numeber % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                countP++;
            }
            //Nếu bỏ trong đây là cút
        }//Nếu else ở đây thì cũng cút luôn
        if(numeber % 2 == 0) countE++;
        if(numeber % 2 != 0) countO++;
        if(sqrt(numeber) == (int)sqrt(numeber)) countS++;
    }
    printf("\n%d - %d - %d - %d", countE, countO, countP, countS);

    return 0;
}
