#include <stdio.h>
int main() 
 {
    int n;
    printf("nhap so luong phan tu cua mang:");
    scanf("%d", &n);	
    int arr[n];
    printf("nhap cac phan tu trong mang:\n");
    for(int i = 0; i < n; i++)
    {
     printf("nhap phan tu thu n:");
     scanf("%d", &arr[i]);
    if(arr[i] < 5)
      {
    	printf("KHONG THOA DIEU KIEN-NHAP LAI\n");
    	printf("nhap phan tu thu n:");
        scanf("%d", &arr[i]);
      } 
    }   
    for(int i = 0; i < n; i++)
    {
     printf("nhap gia tri cho tung phan tu %d :", arr[i]);
     scanf("%d", &arr[i]); 
    }
    printf("gia tri cua tung phan tu:\n");
    for(int i = 0; i < n; i++)
     {
      printf("%d\n", arr[i]);
     }
    printf("dia chi cua tung phan tu:\n");
    for(int i = 0; i < n; i++)
	 {
       printf("%d\n", &arr[i]);
     }
    int sum = 0;
    for(int i = 0; i<n ; i++)
    {
      sum = sum + arr[i];
    }
    printf("Gia tri trung binh cua mang la: %.3f", (float) sum /n );
    return 0;
}
