#include<stdio.h>

void strRevX(char *str)
{
    char *start = NULL;
    char *End = NULL;

    start = str;

    while (*str != '0')
    {
        str++;
    }

    str--;

    while (start <= str)
    {
        printf("%s \n" ,str);
        str--;
    }
    printf("\n");
    
}


int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String \n");
    scanf("%[^'\n']s" , Arr);

    ReverseDisplay(Arr);


    return 0;
}

//Time Complexity is 2N