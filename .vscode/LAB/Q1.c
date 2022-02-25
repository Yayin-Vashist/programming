#include<stdio.h>
 
int main(){
    char string[100];
    gets(string);
    int V_count=0, C_count=0;
    for (int i = 0; i < 100; i++)
    {
        if ((string[i]=='a')||(string[i]=='A'))
        {
            V_count++;
        }
        else if ((string[i]=='e')||(string[i]=='E'))
        {
            V_count++;
        }
        else if ((string[i]=='i')||(string[i]=='I'))
        {
            V_count++;
        }
        else if ((string[i]=='o')||(string[i]=='O'))
        {
            V_count++;
        }
        else if ((string[i]=='u')||(string[i]=='U'))
        {
            V_count++;
        }
        else if((string[i]=='b')||(string[i]=='B'))
        {
            C_count++;
        }
        else if((string[i]=='c')||(string[i]=='C'))
        {
            C_count++;
        }
        else if((string[i]=='d')||(string[i]=='D'))
        {
            C_count++;
        }
        else if((string[i]=='f')||(string[i]=='F'))
        {
            C_count++;
        }
        else if((string[i]=='g')||(string[i]=='G'))
        {
            C_count++;
        }
        else if((string[i]=='h')||(string[i]=='H'))
        {
            C_count++;
        }
        else if((string[i]=='j')||(string[i]=='J'))
        {
            C_count++;
        }
        else if((string[i]=='k')||(string[i]=='K'))
        {
            C_count++;
        }
        else if((string[i]=='l')||(string[i]=='L'))
        {
            C_count++;
        }
        else if((string[i]=='m')||(string[i]=='M'))
        {
            C_count++;
        }
        else if((string[i]=='n')||(string[i]=='N'))
        {
            C_count++;
        }
        else if((string[i]=='p')||(string[i]=='P'))
        {
            C_count++;
        }
        else if((string[i]=='q')||(string[i]=='Q'))
        {
            C_count++;
        }
        else if((string[i]=='r')||(string[i]=='R'))
        {
            C_count++;
        }
        else if((string[i]=='s')||(string[i]=='S'))
        {
            C_count++;
        }
        else if((string[i]=='t')||(string[i]=='T'))
        {
            C_count++;
        }
        else if((string[i]=='v')||(string[i]=='V'))
        {
            C_count++;
        }
        else if((string[i]=='w')||(string[i]=='W'))
        {
            C_count++;
        }
        else if((string[i]=='x')||(string[i]=='X'))
        {
            C_count++;
        }
        else if((string[i]=='y')||(string[i]=='Y'))
        {
            C_count++;
        }
        else if((string[i]=='z')||(string[i]=='Z'))
        {
            C_count++;
        }
    }
    printf("no of vowel =%d\n", V_count);
    printf("no of consonant =%d", C_count);

    
    return 0;
}