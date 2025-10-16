#include <stdio.h>

int stack[5];
int top = -1;

int pop() {
    
    
    int popped = stack[top];
    top--;
    printf("%d deleted from stack. \n", popped);
    return popped;
    
}

void show() {
    
    for (int i = top; i>=0; i--) {
        printf("%d\n", stack[i]);
        
    }
}

int main () {
    
    int i, choices;
    int size = 5;
    
    printf("Enter %d Elements for the stack : \n ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &stack[i]);
        top++;
    }
    
    do {
        printf("\n--- MENU---\n");
        printf("1. Delete\n");
        printf("2. View\n");
        printf("3. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choices);
        
        switch (choices) {
            case 1:
                pop();
                break;
                
            case 2:
                show();
                break;
                
            case 3:
                printf("Exiting Program \n");
                break;
                
            default:
                printf("Invalid Choice !!!");
        }
        
        
    } while(choices != 3 );
  return 0;
}