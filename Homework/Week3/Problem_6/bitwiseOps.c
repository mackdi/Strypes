#include <stdio.h>
#include <stdint.h>

unsigned studentCheck(uint64_t att)
{
    int here = 0;
    // int notHere = 0;
    if (att == 0)
    {
        printf("All students are missing\n");
        return 0;
    }
    else
    {
        while (att > 0)
        {
            if (att & 1)
                here++;
            att = att >> 1;
        }
        printf("Students attended: %d. Students missing: %d\n", here, 64 - here);
    }
}

int main()
{
    uint64_t attendance = 0;
    int option;
    int studentNum = 0;
    while (1)
    {
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Change attendance\n");
        printf("4. Student info\n");
        printf("5. Number of attended and missing students\n");
        printf("6. Exit\n");
        scanf("%d", &option);

        if (option == 1)
        {
            while (1)
            {
                printf("Enter student number (1-64): \n");
                scanf("%d", &studentNum);
                if (studentNum > 64 || studentNum < 1)
                {
                    printf("Enter a valid number! \n");
                }
                else
                {
                    attendance |= (1 << (studentNum - 1));
                    printf("Attendance set for student No: %d\n", studentNum);
                    break;
                }
            }
        }
        else if (option == 2)
        {
            while (1)
            {
                printf("Enter student number (1-64): \n");
                scanf("%d", &studentNum);
                if (studentNum > 64 || studentNum < 1)
                {
                    printf("Enter a valid number! \n");
                }
                else
                {
                    attendance &= ~(1 << (studentNum - 1));
                    // attendance |= (1<<(studentNum -1));
                    printf("Attendance cleared for student No: %d\n", studentNum);
                    break;
                }
            }
        }
        else if (option == 3)
        {
            while (1)
            {
                printf("Enter student number (1-64): \n");
                scanf("%d", &studentNum);
                if (studentNum > 64 || studentNum < 1)
                {
                    printf("Enter a valid number! \n");
                }
                else
                {
                    attendance ^= (1 << (studentNum - 1));
                    printf("Attendance changed for student No: %d\n", studentNum);
                    break;
                }
            }
        }
        else if (option == 4)
        {
            while (1)
            {
                printf("Enter student number (1-64): \n");
                scanf("%d", &studentNum);
                if (studentNum > 64 || studentNum < 1)
                {
                    printf("Enter a valid number! \n");
                }
                else
                {

                    if (attendance &= (1 << (studentNum - 1)))
                    {
                        printf("Stuent is here!\n");
                    }
                    else
                        printf("Stuent is missing!\n");
                    break;
                }
            }
        }
        else if (option == 5)
        {
            studentCheck(attendance);
        }
        else if (option == 6)
        {
            printf("Exiting.. Bye!\n");
            break;
        }
        else
        {
            printf("Wrong input! Try again!\n");
            break;
        }
    }
    return 0;
}