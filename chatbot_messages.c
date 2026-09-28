#include <stdio.h>

int main() {
    int category, subtype,delayed;

    printf("Choose a category:\n");
    printf("1 = Greeting\n");
    printf("2 = Query\n");
    printf("3 = Complaint\n");
    printf("4 = Feedback\n");
    printf("Enter your choice: ");
    scanf("%d", &category);

    switch (category) {

        case 1:
            printf("\nChoose a sub-type:\n");
            printf("1 = Morning\n");
            printf("2 = Evening\n");
            printf("Enter your choice: ");
            scanf("%d", &subtype);

            switch (subtype) {
                case 1:
                    printf("Good morning! How can I help you today?\n");
                    break;

                case 2:
                    printf("Good evening! How can I help you today?\n");
                    break;

                default:
                    printf("Invalid selection.\n");
            }
            break;

        case 2:
            printf("\nChoose a sub-type:\n");
            printf("1 = Product\n");
            printf("2 = Billing\n");
            printf("3 = Technical\n");
            printf("Enter your choice: ");
            scanf("%d", &subtype);

            switch (subtype) {
                case 1:
                    printf("Here is the information about our product.\n");
                    break;

                case 2:
                    printf("Here is the information about your billing.\n");
                    break;

                case 3:
                    printf("Our technical team will help you with your issue.\n");
                    break;

                default:
                    printf("Invalid selection.\n");
            }
            break;

        case 3:
            printf("\nChoose a sub-type:\n");
            printf("1 = Delivery\n");
            printf("2 = Quality\n");
            printf("Enter your choice: ");
            scanf("%d", &subtype);

            switch (subtype) {
                case 1:
                    printf("Is your order delayed? (1 = Yes, 0 = No): ");
                    scanf("%d", &delayed);

                    if (delayed == 1) {
                        printf("We sincerely apologize for the delay in your order.\n");
                    }
                    else if (delayed == 0) {
                        printf("We apologize for the inconvenience caused with your delivery.\n");
                    }
                    else {
                        printf("Invalid selection.\n");
                    }
                    break;

                case 2:
                    printf("We apologize for the quality issue.\n");
                    break;

                default:
                    printf("Invalid selection.\n");
            }
            break;

        case 4:
            printf("\nChoose a sub-type:\n");
            printf("1 = Positive\n");
            printf("2 = Negative\n");
            printf("Enter your choice: ");
            scanf("%d", &subtype);

            switch (subtype) {
                case 1:
                    printf("Thank you for your positive feedback!\n");
                    break;

                case 2:
                    printf("Thank you for your feedback. We will work on improving.\n");
                    break;

                default:
                    printf("Invalid selection.\n");
            }
            break;

        default:
            printf("Invalid selection.\n");
    }
}