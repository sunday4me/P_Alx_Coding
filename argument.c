#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i;
  printf("argc = %d\n", argc);
  printf("let's see what is in argv[]\n");
  if(argc > 1)
  {
      for(i = 1; i < argc; i++)
        {

        printf("argv[%d] = %s\n", i, arg[i]);
          sum+= atoi(argv[i]);
        }
     printf("Total = %d\n", sum);
   }
return 0;
}
