#include <stdio.h>
#include <stdlib.h>

/*
Tìm tổng
1+ 1/2 + 1/3 + ... 1/n

Tìm tổng
1 + ( 1 + 2 )/ 2 + ( 1 + 2 + 3 ) / 3 + ( 1 + 2 + 3 + 4 ) / 4 + ...
*/

int main()
{
    //Check Prime -> Phiên bản Flag
    int number;
    int isPrime = 1;
    printf("Nhap number: ");
    scanf("%d", &number);

    //Break: Phá vỡ => Dừng dòng for lại
    //Return: Dừng chương trình luôn
    if(number >= 2){
        //chỉ chia hết cho chính nó
            // => không chia hết cho số nào từ 2 -> n - 1
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
        // 12 đi
        // 12 % 3 == 0 isPrime = 0
            // Dừng quy trình kiểm tra này luôn
            // BREAK !!!
        // 12 % 4 == 0 isPrime = 0

        //TRải qua tất cả quy trình khắc nhiệt
            // Giờ là lúc kết luận sản phẩm của mình
            // Có chất lượng hay không
            // Phải là số nguyên tố hay không
        // 0: false, 1: true
        //isPrime sống sót ra khỏi for
        //isPrime = 1
        if(isPrime) {
            //isPrime = 1
            printf("La so nguyen to");
        } else {
            //isPrime = 0
            printf("Khong phai so nguyen to");
        }
    } else {
        printf("Khong phai so nguyen to");
    }

/*
    //Check Prime -> Phiên bản Count
    int number;
    int count = 0;
    printf("Nhap number: ");
    scanf("%d", &number);

    if(number >= 2){
        //chỉ chia hết cho chính nó
            // => không chia hết cho số nào từ 2 -> n - 1
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                count++;
            }
        }
        //TRải qua tất cả quy trình khắc nhiệt
            // Giờ là lúc chứng minh sản phẩm của mình
            // Có chất lượng hay không
            // Phải là số nguyên tố hay không
        if(count == 0) {
            printf("La so nguyen to");
        } else {
            printf("Khong phai so nguyen to");
        }
    } else {
        printf("Khong phai so nguyen to");
    }
*/

    //2 -> 6
    //i = 3 in ra Ko phai so NT
    //i = 4 in ra La so NT
    //i = 5 in ra Khong phai so NT

    // La so Nguyen To
    // Khong phai la so nguyen to -> return

    //1+ 1/2 + 1/3 + ... 1/n
    //1/1 + 1/2 + 1/3 + 1/4 + 1/5 + ...
    // Mẫu sao mà nó tăng dần v ta ? 1 2 3 4 5 => tui sẽ xài dòng for
        // Mẫu sẽ là biến i trong for
        // Khai báo 1 biến tính tổng
        // Khai báo 1 biến để mình nhập
    // Tử thì giữ nguyên

    //1 + ( 1 + 2 )/ 2 + ( 1 + 2 + 3 ) / 3 + ( 1 + 2 + 3 + 4 ) / 4 + ...
    //1/ 1 | ( 1 + 2 )/ 2 | ( 1 + 2 + 3 ) / 3 | ( 1 + 2 + 3 + 4 ) / 4 + ...
        // Mẫu sao mà nó tăng dần v ta ? 1 2 3 4 5 => tui sẽ xài dòng for
        // Tử sao nó tăng dần vậy ta ? => tui sẽ xài dòng for
        // => Bài này chắc chắn xài for
            //Nhưng mà for nào ? Nhiều loại for mà ???
            //=> Bài này quan tâm tới index(số thứ tự) mà
            // Kết luận: xài for truyền thống
        // Qua mỗi vòng lặp sao mà thấy mẫu tăng dần theo i v ta ?
            // => Mẫu này là i á !
        // Qua mỗi vòng lặp sao mà thấy tử giống tổng các i v ta ?
            // => Tử này là sum á !
            //sum = 0
            // i = 1 sum = 0 + 1
            // i = 2 sum = sum (0 + 1) + 2
            // i = 3 sum = sum (0 + 1 + 2) + 3
            // => Sum = sum + i
            // sum += i
        // Một cái Sum nữa để cộng các phần tử lại (tử / mẫu)
        // Khai báo thêm 1 biến n nữa để nhập vô

    /*
    int sum = 0;
    float result = 0;
    int n;

    printf("\nNhap n de: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum = sum + i;
        //printf("\nCheck Sum: ");
        //printf("%d", sum);
        //printf("\nCheck Phan tu: ");
        //printf("%f", (float)sum / i);
        //int sum = 3 int i = 2
        //(float)(sum / i) 3(int)/2(int) = 1.5 => 1 SAI, CHIM CÚT
        //(float)sum / i => Như vầy mới đúng
            //Ép kiểu sum về float ( số thập phân )
            //=> Đây á, là 1 phép toán của thập phân
        result = result + (float)sum / i;
    }
    //sum = 0; result = 0
    //sum = sum + i;
    //result = result + Phan tu (tu/ mau)
    //Tu aka sum, Mau aka i

    //i = 1 Tu aka sum; sum = sum(0) + i(1) va Mau = 1
        // Phan tu ( tu/ mau) sau for1 : ( 0 + 1 ) / 1
        // result = 0 + ( 0 + 1 ) / 1

    //i = 2 Tu aka sum; sum = 0 + 1 + 2 va Mau = 2
        // Phan tu ( tu/ mau) sau for2 : ( 0 + 1 + 2 ) / 2
        // result = 0 + ( 0 + 1 ) / 1 + ( 0 + 1 + 2 ) / 2

    //i = 3 Tu aka sum; sum = 0 + 1 + 2 + 3 va Mau = 3
        // Phan tu ( tu/ mau) sau for3 : ( 0 + 1 + 2 + 3 ) / 3
        // result = 0 + ( 0 + 1 ) / 1 + ( 0 + 1 + 2 ) / 2 + ( 0 + 1 + 2 + 3 ) / 3



    printf("\nKet qua la: ");
    printf("%f", result);
    */

/*
    // Khai báo
    float sum = 0;
    int n;

    //Input đầu vào
    printf("\nNhap n: ");
    scanf("%d", &n);

    //Xử lý logic
    //xài for này khi mình quan tâm tới các index, các số thứ tự
    // 1
    for(int i = 1; i <= n; i++){
        // mỗi phần tử 1/i
        // ví dụ 1/1 | 1/2 | 1/3
        printf("\nCheck: ");
        printf("%f", (float)1/i);
        //không ép kiểu, sử dụng phép chia trong số nguyên => không ra được số phẩy
        sum = sum + (float)1/i;
    }
    printf("\nKet qua la: ");
    printf("%f", sum);

    //do while, while, foreach đủ thứ hết á
        // Chỉ quan tâm: Khi nào mày lặp xong ?

    //Khi làm việc với bài toán thập phân ( phân số )
        //Khai báo float, double
        // %f, %lf
        //Nhớ ép kiểu

    //Kết thúc chương trình chẳng hạn
*/

    return 0;
}
