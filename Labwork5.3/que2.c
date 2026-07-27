#include <stdio.h>

main()
{

    int language, choice;

    printf("press 1 for english\n");
    printf("press 2 for hindi\n");
    printf("press 3 for gujarati\n");

    printf("enter your choice: ");
    scanf("%d", &language);

    switch (language)
    {
    case 1:
        printf("\npress 1 for internet recharge");
        printf("\npress 2 for top-up recharge");
        printf("\npress 3 for special recharge");

        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("you have sucessfully done internet recharge");
            break;
        case 2:
            printf("you have sucessfully done top-up recharge");
            break;
        case 3:
            printf("you have sucessfully done special recharge");
        default:
            printf("invalid recharge choice");
        }
        break;

    case 2:
        printf("\ninternet recharge ke liye 1 dabaiye");
        printf("\ntop-up recharge ke liye 2 dabaiye");
        printf("\nspecial recharge k liye 3 dabaiye");

        printf("\nenter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("aapne safalta purvak internet recharge kar liya hai");
            break;
        case 2:
            printf("aapne safalta purvak top-up recharge kar liya hai");
            break;
        case 3:
            printf("aapne safalta purvak special recharge kar liya hai");
        default:
            printf("galat vikalp");
        }
        break;

    case 3:
        printf("\ninternet recharge mate 1 dabavo");
        printf("\ntop-up recharge mate 2 dabavo");
        printf("\nspecial recharge mate 3 dabavo");

        printf("\nenter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("tame safalta purvak internet recharge karyu che");
            break;
        case 2:
            printf("tame safalta purvak top-up recharge karyu che");
            break;
        case 3:
            printf("tame safalta purvak special recharge karyu che");
            break;
        default:
            printf("khoto vikalp");
        }
        break;
    default:
        printf("invalid language choice");
    }
}