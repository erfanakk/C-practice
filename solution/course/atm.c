#include <stdio.h>

void main()
{
    int balance, amount, oprator , password, count = 1;
    
    // first write the stock of account 
    balance = 1500;
    printf("enter your password : ");
    scanf("%d" , &password);
    while (password != 1234)
    {
        printf("\nyour password is not match");
        printf("\nenter the correct password : ");
        scanf("%d" , &password);
    }
    
    while (count == 1)
    {
        
        printf("\nfor the balance of account enter : 1 \nfor the withdraw from the account enter : 2  \n");
        scanf("%d",&oprator);
        
        
        switch (oprator)
        {
        case (1):
            printf("the balance of account is : %d" , balance );
            break;
        case(2):
            printf("enter the amount of money do you want ? "  );
            scanf("%d", &amount);
            if (amount > balance)
            {
                printf("\nyou dont have that money");

            }
            else
            {
                balance = balance - amount;
                printf("\ntake your money");
                printf("\nyour balance of account is : %d " , balance);
            }
            break;
        default:
            printf("we dont support that oprator");
            break;
        }
        printf("\ndo you want to continue \n 1 : yes \n 0 = No \n");
        scanf("%d" , &count);
    
    }   
}