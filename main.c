#include <stdio.h>
#include <stdlib.h>
#include "function.h"
#define SIZE 10


uint16 main()
{
uint16 choice;
student list[SIZE];
uint16 *counter=0;

    printf("\t\t\t\t===== Welcome to Student Management System ======\n");
    while(1) {

        printf("1. Add Student\n");
        printf("2. Find Student\n");
        printf("3. Delete Student\n");
        printf("4. Students id array\n");
        printf("5. Sum of Student \n");
        printf("6. Exit\n");
        printf("---------------------------------\n");

      SBD_action(&choice);

      switch(choice) {
           case 1:
                  SBD_AddEntry(list,&counter);
                  *counter++;
                  printf("\n==========================================\n");
                 break;



            case 2:
               SDB_ReadEntry(list,&counter);
               printf("==========================================\n");
               break;


           case 3:
               SBD_DeleteEntry(list,&counter);
               printf("==========================================\n");
               break;


           case 4:
                SDB_GetList(list,&counter);
                printf("==========================================\n");
                break;



            case 5:
             printf("Number of student = %hs\n",counter);
             printf("==========================================\n");
             break;






            case 6:
            printf("SYSTEM CLOSING THANK YOU :> ......\n");
            printf("==========================================\n");
            exit(0);

      }

}
}
