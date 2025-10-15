#include <stdio.h>

int add(int k,int s)
{
    printf("add:%d",k+s);
}

int sub(int k,int s)
{
    printf("sub:%d",k-s);

}
int multiply(int k,int s)
{
    printf("multiply:%d",k*s);
}
int division(int k,int s)
{
    float division ;
    division=k/s;

    printf("division:%f",division);
}

int main() 
{
    int first, second, choice, result;
    
    printf("Enter first numbers: ");
    scanf("%d",&first);
    
    printf("Enter second numbers: ");
    scanf("%d",&second);
    
        printf("\n######################## CALCULATOR ##################################\n");
        printf("1. Addition");
        printf("2. Subtraction");
        printf("3. Multiplication");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
         
        if (choice == 1)
    {
        add(first, second);
    }

    else if (choice == 2)
    {
        sub(first, second);
    }

    else if (choice == 3)
    {
        multiply(first, second);
    }
    else if (choice == 4)
    {
        division(first, second);
    }

        
        
         return 0;
}