#include<stdio.h>

double fatorialRec1(int num1){
  if (num1 == 0) {
    return 1;
  }
  else {
    return num1 * fatorialRec1(num1 - 1);
  }
}

double fatorialRec2(int num2){
  if (num2 == 0) {
    return 1;
  }
  else {
    return num2 * fatorialRec2(num2 - 1);
  }
}

double fatorialSemRec(int num1, int num2)
{
  double f, i, j;
  if (num1 == 0 && num2 == 0) {
    return 1;
  }
  else {
   f = 1;
   for(i= num1; i > 1; i--){
     f = f * i;
   }     
    return f;
    
    j = 1;
    for(j= num2; i > 1; i--){
     j = j * i;
   }     
    return j;
  }
}

int main() {
  int num1 = 10, num2 = 15;
  printf("Fatorial c/ recursividade(%d)= %.0lf\n Fatorial(%d)= %.0lf\n\n", num1, fatorialRec1(num1), num2, fatorialRec2(num2));
  printf("Fatorial s/ recursividade(%d e %d) = %.0lf --- %.0lf", num1, num2, fatorialSemRec(num1, num2));

}