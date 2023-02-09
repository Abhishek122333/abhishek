#include <stdio.h>
int main()
{
    int age;
    printf("enter a age");
    scanf("%d",&age);
    if (age>=1&&age<=50)
    {
    printf(" eligible");
    
    }
    else{
        printf(" not eligible");
    }
    return 0;
}
