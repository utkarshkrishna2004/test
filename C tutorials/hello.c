#include<stdio.h>
int main()
{
    char day;
    printf("Enter grade:");
    scanf("%s", &day);

    switch(day){
        case 'a': printf("90-100");
                break;
        case 'b': printf("80-90");
                break;
        case 'c': printf("70-80");
                break;
        default : printf("error");     
    }
    return 0;
}