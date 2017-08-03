http://docs.cs50.net/problems/caesar/caesar.html
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char c; //number in ASCII
int y = 0; 
const int Alp = 26; //number of letters in alphabet
const int A = 65; //number of A in ASCII
const int a = 97; //number of a in ASCII

int main (int argc, string argv[])
{   
    if (argc != 2)
    {
        printf("error, enter K\n");
        return 1;
    }
    
    int k = atoi(argv[1]);
    k = k % Alp;
    
    if (k <= 0)
    {
        printf("K should be greater then 0 \n");
        return 1;
    }
    
    string s = get_string();
    
    if (s != NULL)
    {
        for ( int i = 0, n = strlen(s); i < n; i++)
        {
            c = s[i];
            if (isupper(c))
            {
                y = (int) c - A;
                y = ((y + k) % Alp) + A;
                printf("%c", y);
            }
            
            else if (islower(c))
            {
                y = (int) c - a;
                y = ((y + k) % Alp) + a;
                printf("%c", y);
            }
            
            else
            {
                printf("%c", s[i]);
            }
        }
    printf("\n");
    return 0;    
    }
}
