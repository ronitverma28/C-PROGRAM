// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int MAX = 10;
int arr[10];
int top = -1;

bool isFull(){
    return ((top == MAX - 1) ? true : false);
}

bool isEmpty(){
    return ((top == -1) ? true : false);
}

void push(){
    if(!isFull()){
        int n;
        printf("Enter the number: ");
        scanf("%d", &n);
        
        arr[++top] = n;
        printf("%d added successfully!", n);
    }
    else printf("Stack is Full!");
}

void pop(){
    if(!isEmpty()){
        top--;
        printf("Element has been poped!");
    }
    else printf("Stack is empty!");
}
int peek(){
    return arr[top];
}
void display(){
    for(int i = top;i>=0;i--){
        printf("%d\t", arr[i]);
    }
}

int main() {
    bool out = false;
    while(!out){
        int option;
        printf("\n\n\n**** Select the option ****\n1. Push\n2. Pop\n3. Peek\n4. isFull\n5. isEmpty\n6. Display\n7. Exit\n");
        printf("Select:- ");
        scanf("%d", &option);
        
        switch(option){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("Peek: %d", peek());
                break;
            case 4:
                printf((isFull()) ? "Yes" : "No");
                break;
            case 5:
                printf((isEmpty()) ? "Yes" : "No");
                break;
            case 6:
                display();
                break;
            case 7:
                out = true;
                printf("Thanks for visit STACK");
                break;
            default:
                printf("Invalid option!");
        }
    }

    return 0;
}
