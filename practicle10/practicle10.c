#include<stdio.h>
void main()
{
    int ch,total=0;
    printf("Foodies Restorant\n");
    printf("Menu:\n");
    printf("1. Burger - ₹150 \n");
    printf("2. Pizza - ₹200  \n");
    printf("3. Pasta - ₹120  \n");
    printf("4. Sandwich - ₹100\n");
    printf("5. French Fries - ₹80\n");
    printf("Enter 0 to finish ordering.");
    while(1){
    printf("\nEnter choice:");
    scanf("%d",&ch);


    if(ch==0){
        break;
    }
    switch(ch)
    {
    case 1:
        total+=150;
        printf("Burger added to your order.\n");
        break;
    case 2:
        total+=200;
        printf("Pizza added to your order.\n");
        break;
    case 3:
        total+=120;
        printf("Pasta added to your order.\n");
        break;
    case 4:
        total+=100;
        printf("Sandwich added to your order.\n");
        break;
    case 5:
        total+=80;
        printf("French Fries added to your order.\n");
        break;
    default:
        printf("Invalid choice. please select from menu.");
    }
    printf("\nTotal amount to pay: %d",total);
    }
}

