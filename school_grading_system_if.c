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

  /* check if the score is between 80 and 100 then print the 
   * grade if it is   
   */

  if (score >= 80 && score <= 100 )
  {
    printf("A");
  }
  /* check if the score is between 70 and 79 then print the 
   * grade if it is   
   */
   else if (score >= 70 && score <= 79 )
   {  
     printf("B");
   }  

  /* check if the score is between 65 and 69 then print the 
   * grade if it is   
   */
   else if (score >= 65 && score <= 69)
   {
     printf("C");
   }
  /* check if the score is between 60 and 64 then print the 
   * grade if it is   
   */

  else if (score >= 60 && score <=64)
  {
    printf("D");
  }
  /* check if the score is between 50 and 59 then print the 
   * grade if it is   
   */
  else if (score >= 50 && score <= 59)
    printf("E");

    /* check if the score is below 50 then print the 
   * grade if it is   
   */
  else if (score >= 0 && score <= 50)
  {
    printf("F");
  }

  else
  {
    printf("You entered an invalid score");
  }
  return 0;
}
