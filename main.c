#include <stdio.h>
#include <stdlib.h>
#include "function.h"
#define SIZE 5


uint16 main()
{
uint16 choice;
student list[SIZE];
uint16 counter;
uint16 index= counter-1;
    printf("\t\t\t\t===== Welcome to Student Management System ======\n");
    while(1) {

        printf("1. Add Student\n");
        printf("2. View Student\n");
        printf("3. Delete Student\n");
        printf("4. Update Student\n");
        printf("5. Sum of Student \n");
        printf("6. Display all students \n");
        printf("7. Exit\n");
        printf("---------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

      switch(choice) {
           case 1:
                  add(list,&counter);
                  counter++;
                  printf("==========================================\n");
                 break;

           case 2:
               display(list[counter-1]);
               printf("==========================================\n");
               break;


           case 3:
               DEL(list,&counter);
               printf("==========================================\n");
               break;


            case 4:
              EDIT(list,&counter);
               printf("==========================================\n");
               break;

           case 5:
             printf("Number of student = %d\n",counter);
             printf("==========================================\n");
             break;
           case 6:
             displayAll(list,&counter);
             printf("==========================================\n");
             break;
           case 7:
            printf("SYSTEM CLOSING THANK YOU :> ......\n");
            printf("==========================================\n");
            exit(0);

       }


}
}
