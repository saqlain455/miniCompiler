#include <stdio.h>
void main(void){
float a;
float b;
float s;
a = 5;
b = 1;
s = 0;
while(b<=a){
s = s+b;
b = b+1;
}
printf("Sum of first 5 natural no.s: \n");
printf("%.2f\n", (float)(s));
printf("Average of first 5 natural no.s: \n");
printf("%.2f\n", (float)(s/a));
return;
}
