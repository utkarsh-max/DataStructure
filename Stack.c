/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("\n Enter the size of STACK[MAX=100] :");
    scanf("%d",&n);
    printf("Stack operation using array");
    printf("\n\t 1.push \n 2.pop \n 3.display \n4.exit");
    do{
        printf("\n Enter the choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                push();
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                printf("\n\t Exit points");
                break;
            }
            default:
            {
                printf("Enter a valid choice");
            }
            
        }
        
        
    }
    while(choice!=4);
    return 0;
}

void push()
{
    if(top>=n-1)
    {
        printf("Stack is overflow");
    }
    else
    {
        printf("Enter a value to be pushed");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}


void pop()
{
    if(top<=-1){
        printf("Stack is under flow");
    }
    else
    {
        printf("The poped element is %d ",stack[top]);
        top--;
    }
    
}

void display()
{
    if(top>=0)
    {
        printf("The element in STACK\n");
        for(i=top;i>=0;i--)
        {
            printf("\n%d",stack[i]);
        }
        
    }
    else
    {
        printf("The stack is Empty");
    }
}