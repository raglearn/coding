#include<stdio.h>
int main() {
  int x;
  scanf("%d",&x);
  (x&1==0)? printf("Even Number\n"):printf("Odd Number\n");
}
