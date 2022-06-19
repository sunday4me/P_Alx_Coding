#include <stdio.h>

/**
 * main - solving our assignment
 * description - A program for school grading system
 * 80 - 100 == A
 * 70 - 79  == B
 * 65 - 69  == C
 * 60 - 64  == D
 * 50 - 59  == E
 * Below 50 == F
 * return 0
 */

int main(void) {
  int score;

  /* Tell your user to type their score */
  printf("What was your score:\n");

  /* Accept the user's input */
  scanf("%d", &score);

  switch (score)
  {
    case 80 ... 100:
      printf("A \n");
      break;
    case 70 ... 79:
      printf("B \n");
      break;
    case 65 ... 69:
      printf("C \n");
      break;
    case 60 ... 64:
       printf("D \n");
       break;
    case 50 ... 59: 
       printf("E \n");
      break;
    case 0 ... 49:
       printf("F \n");
       break;
    default:
       printf("Invalid score");
       break;
}


  return 0;
}
