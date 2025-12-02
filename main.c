#include <stdio.h>

int main(void) {
char a ;
 printf ("do you agree?\n");
scanf("%c", &a);
 if (a=='y' || a=='Y') {
  printf("you agreed\n");
 }
 else if (a=='n'|| a=='N') {
  printf("you not agree!");
 }
 else {
  printf("error please enter y/n");
 }




}