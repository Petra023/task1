http://docs.cs50.net/problems/initials/more/initials.html
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string();
    
    if (s[0] != ' ')
    {
        printf ("%c", toupper(s[0]));
    }
    
    if (s != NULL)
        {
            
        for ( int i = 0, n = strlen(s); i < n; i++)
            {
               
                if (s[i] == ' ')
                {
                    i++;
                    
                    if (s[i] != ' ')
                    {
                       printf("%c", toupper(s[i])); 
                    }
                    
                    else
                    {
                        i--;
                    }
                }
               
            }
        }
    printf("\n");    
}
