#include<stdio.h>
int main()
{
    char C;
    scanf("%c",&C);
    if(C=='A' || C=='E'|| C=='I' || C=='O'|| C=='U')
    {
        printf("Vowel");  
    }
    else if(C=='a' || C=='e' || C=='i' || C=='o' || C=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}