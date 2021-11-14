#include <stdio.h>
#include <string.h>

int main()
{
    char passStr[2][10] = {"CSPC2021"};
    char passinput[10];
    int p,i=0;
    for(p = 0; p <= 2;p++)
            {
               printf("\nEnter password:");
               scanf("%s", passinput);
               if (strcmp(passinput, passStr[i]) != 0)
               {
                  if (p >= 2) printf("You have failed. Too many password attempts.");
                  
                  else printf("\nInvalid password, try again.\n");
                
                }
               else {
                    printf("You have successfully logged in");
                    break;
                }
              
            }
return 0;
}
