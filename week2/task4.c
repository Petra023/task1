#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int Alp = 26; //кол-во букв в алфавите
const int A = 65; //номер заглавной буквы "А" в ASCII
const int a = 97; //номер прописной буквы "а" в ASCII

int Caesar(char p, int j, char c, string s, int i) 

{
    if (isupper(c))
            {
                
                c = c - 65;
                c = ((c + p) % 26) + 65;
                printf("%c", c);
                return j + 1;
            }
            
            else if (islower(c))
            {
                c = c - 97;
                c = ((c + p) % 26) + 97;
                printf("%c", c);
                return j + 1;
            }
            
            else
            {
                printf("%c", s[i]);
                return j;
            }
}  

int main(int argc, string argv[])
{
    
    if (argc != 2) //проверка корректности ввода
    {
        printf("error, enter K\n");
        return 1;
    }
        
    for (int j = 0, n = strlen(argv[1]); j < n; j++)
    {
        char c = argv[1][j]; //выбор нужного символа и проверка на его корректность
        if (!isalpha(c))
        {
            printf("error\n");
            return 1;
        }    
    }
    
    string s = get_string();
    
    if (s != NULL)
    {
        int i = 0; //счетчик для работы со строкой
        int n = 0; //вспомогательная переменная
        char c = s[i]; //выбор определенного символа строки
        int j = 0; //счетчик для перебора ключа
        char p = argv[1][j]; //выбор символа ключа
        int l = strlen (argv[1]); 
        
        for (i = 0, n = strlen(s); i < n; i++)
        {
            c = s[i];
            j = j % l;
            p = argv[1][j];
            
            if (isupper(p))
            {
                p = p - 65;
                j = Caesar(p, j, c, s, i);
            }
            
            if (islower(p))
            {
                p = p - 97;
                j = Caesar(p, j, c, s, i);
            }
        }    
    }   
    printf("\n");
