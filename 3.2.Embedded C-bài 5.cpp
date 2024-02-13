#include<stdio.h>
#include<stdint.h>
struct infor
{
  char name[32];
  char mssv[8];
  uint8_t course_c[2];
};
typedef struct infor struct_infor; 
void infor_input (struct_infor *stu_infor)
{ 
  printf ("Ho va ten:");	
  scanf ("%s", &stu_infor->name);
  printf ("Mssv:");
  scanf ("%s", &stu_infor->mssv);
  printf ("Khoa C:");
  scanf ("%s,", &stu_infor->course_c);
}
void infor_print (struct_infor stu_infor)
{
  printf ("%s %s %s\n", stu_infor.name, stu_infor.mssv, stu_infor.course_c);
}
int main()
{
  int n;
  printf ("nhap so luong sinh vien:");
  scanf ("%d", &n);
  struct_infor a[n];
for (int i = 0; i < n; i++) 
  infor_input(&a[i]);
for (int i = 0; i < n; i++)
  infor_print(a[i]);
return 0;	
}
