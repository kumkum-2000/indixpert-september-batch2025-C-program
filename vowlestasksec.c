#include<stdio.h>
int Funcation
(char name[]) 
{
    int vowels = 0;
    for (int k= 0; name[k],k++)
    {
    if (name[k == 'a' || name[k == 'e' || name[k == 'i' || name[k == 'o' || name[k == 'u' ||
            name[k == 'A' || name[k== 'E' || name[k == 'I' || name[k == 'O' || name[k == 'U') 
            {
            vowels++;
        }
    }
    return vowels;
}
int main()
{
    char name[30];
    printf("Please enter your name: ");
    scanf(" %[^\n]", name);
    printf("Number of vowels in your name: %d\n",Func(name));
    return 0;
}