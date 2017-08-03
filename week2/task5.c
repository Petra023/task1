http://docs.cs50.net/problems/crack/crack.html
#include <unistd.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <crypt.h>

#define _XOPEN_SOURCE


int main(int argc, string argv[]){
    
    if (argc != 2) {
        printf(error, enter hashsumn);
        return 1;
    }
    
    char hash = argv[1];
    char salt[] = 50;   
    char n[5] = {'A', 0, 0, 0, 0};
    
    for (;n[0]  'z';n[0]++) { //перебирает все возможные значения комбинаций ключа
        for (n[1] = 'A' ;n[1]  'z';n[1]++) {
            for (n[2] = 'A';n[2]  'z';n[2]++) {
                for (n[3] = 'A';n[3]  'z';n[3]++) {
                    if (strcmp(crypt(n, salt), hash) == 0) {
                        printf(%sn, n);
                        return 0;
                    }
                } 
            }
        }
    } 
return 1; 
}
