/*
Tạo 2 mảng để so sánh:
        Nếu phần tử trong 2 mảng khác nhau sẽ là Alice
        Giống là Bob
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    //Khai báo 2 mảng
    int arr1[n];    
    int arr2[n];

    //Nhập 2 mảng
    for (i = 0; i <= n; i++)        
    {
        scanf("%d", &arr1[i]);
        for (j; j <= n; j++)
        {
            scanf("%d", arr2[j]);
        }
    }
    if (arr1[i] = arr2[j])      //so sánh 2 mảng
    {
        printf("Bob");
    }else
        printf("Alice");
    return 0;
}