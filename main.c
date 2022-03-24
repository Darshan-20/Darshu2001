#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pin=1234,acc;

    printf("enter your pin");
    scanf("%d",&pin);

    if (pin!=1234)
    {
        printf("please enter your valid pin");
    }
    else if(pin==1234)
    {
        printf("*******welcome*******");
        printf("1.savings\n 2.current\n");
        printf("enter the type of account\n");
        scanf("%d",& acc);
        switch(acc)
        {
            case 1:
                    printf("%d",acc);
                    break;

            default: printf("Ïnvalid Choice\n");
        }
    }

    return 0;
}
