#include <stdio.h>
int main()
 {
    int n;
    printf ("nhap so luong phan tu cua mang:");
    scanf ("%d", &n);	
    int arr[n];
    printf ("nhap cac phan tu trong mang:\n");
    for (int i = 0;i < n; i++)
    {
      printf ("nhap phan tu thu n:");
      scanf ("%d", &arr[i]);
    if (arr[i] < 5)
      {
    	printf ("KHONG THOA DIEU KIEN-NHAP LAI\n");
    	printf ("nhap phan tu thu n:");
        scanf ("%d", &arr[i]);
      }
    }   
    for (int i = 0;i < n; i++)
    {
     printf ("nhap gia tri cho tung phan tu %d :", arr[i]);
     scanf ("%d", &arr[i]); 
    }
    printf ("gia tri cua tung phan tu:\n");
    for (int i = 0; i < n; i++)
    {
     	printf ("%d\n", arr[i]);
    }
    printf ("dia chi cua tung phan tu:\n");
    for (int i = 0; i < n; i++)
	{
     	printf ("%d\n", &arr[i]);
    } 
     
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++)
	{
        if (max < arr[i])
            max = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
		if (min > arr[i])
		    min = arr[i];	
	}
      printf ("Phan tu lon nhat co gia tri:%d\n", max);
      printf ("Phan tu be nhat co gia tri:%d\n", min);
      return 0;
}
