#include<stdio.h>
int main()
{
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Welcome, %s! We are excited to have you as an intern.\n", name);
    return 0;
}