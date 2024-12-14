#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Change hello world !!");

    for (int i = 0; i < 10; i++)
    {
        printf("Number: %d ",i);
        sleep(1);
    }
    
    return 0;
}