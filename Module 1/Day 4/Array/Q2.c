#include<stdio.h>

int min(int num,int a[]){
    int min=a[0];
    for(int i=0;i<num;i++)
    {
        if (a[i]<min)
        min=a[i];
       
    }
    return min;
}
int max(int num,int a[]){
    int max=a[0];
    for(int i=0;i<num;i++)
    {
        if (a[i]>min)
        max=a[i];
       
    }
    return max;
}
int main()
{
    int num, a[50];
    printf("enter length of number");
  scanf("%d", &num);
  for (int i = 0; i < num; i++) {
    scanf("%d", &a[i]);
  }
  int minimum=min(num,a);
  int maximum=max(num, a);
  printf("minimum -%d, maximum-%d  ",minimum,maximum);
}