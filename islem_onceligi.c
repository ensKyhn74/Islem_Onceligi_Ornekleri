#include <stdio.h>

int main() 

{

 // işlem önceliği örnekleri
 printf("sonuc: %d\n",(6/2)*5 + 17%5 - 5); // 12
 printf("sonuc: %d\n",(10 + 15 + 20) / 3 * 5 + 7 - 6%2); // 82
 printf("sonuc: %.2f\n",(2.5 + 5) - 2 * 3 + 9/2); // 5.50
 printf("sonuc: %.2f",(1.25 * 5 + 0.75) / (15 % 6)); // 2.33

 return 0;

}