#include <stdio.h>

int main() {
    int stream, interest, medicine;

    printf("Choose your stream:\n");
    printf("1 = Science\n");
    printf("2 = Commerce\n");
    printf("3 = Arts\n");
    printf("Enter your choice: ");
    scanf("%d", &stream);

    switch (stream) {

        case 1:
            printf("\nChoose your interest:\n");
            printf("1 = Biology\n");
            printf("2 = Physics\n");
            printf("3 = Chemistry\n");
            printf("Enter your choice: ");
            scanf("%d", &interest);

            switch (interest) {
                case 1:
                    printf("Are you interested in Medicine? (1 = Yes, 0 = No): ");
                    scanf("%d", &medicine);

                    if (medicine == 1) {
                        printf("Recommended Course: MBBS\n");
                    }
                    else if (medicine == 0) {
                        printf("Recommended Course: Biotechnology\n");
                    }
                    else {
                        printf("Invalid choice.\n");
                    }
                    break;

                case 2:
                    printf("Recommended Course: Physics\n");
                    break;

                case 3:
                    printf("Recommended Course: Chemistry\n");
                    break;

                default:
                    printf("Invalid choice.\n");
            }
            break;

        case 2:
            printf("\nChoose your interest:\n");
            printf("1 = Accounting\n");
            printf("2 = Marketing\n");
            printf("Enter your choice: ");
            scanf("%d", &interest);

            switch (interest) {
                case 1:
                    printf("Recommended Course: Accounting and Finance\n");
                    break;

                case 2:
                    printf("Recommended Course: Marketing\n");
                    break;

                default:
                    printf("Invalid choice.\n");
            }
            break;

        case 3:
            printf("\nChoose your interest:\n");
            printf("1 = Literature\n");
            printf("2 = History\n");
            printf("3 = Psychology\n");
            printf("Enter your choice: ");
            scanf("%d", &interest);

            switch (interest) {
                case 1:
                    printf("Recommended Course: Literature\n");
                    break;

                case 2:
                    printf("Recommended Course: History\n");
                    break;

                case 3:
                    printf("Recommended Course: Psychology\n");
                    break;

                default:
                    printf("Invalid choice.\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}