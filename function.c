#include "function.h"
#define MAX 10

void SBD_AddEntry(student list[],int *counter)
{
  if(*counter>=MAX)
  {
      printf("\n NO space to Enter new student.");
  }
  else
  {
      printf("\n Enter student ID:");
      scanf("%d",&list[*counter].student_ID);
      printf("\n Enter Student year:");
      scanf("%d",&list[*counter].student_year);
      printf("\n Enter first course id:");
      scanf("%d",&list[*counter].course1_ID);
      printf("\n Enter first course grade:");
      scanf("%d",&list[*counter].course1_grade);
      printf("\n Enter second course id:");
      scanf("%d",&list[*counter].course2_ID);
      printf("\n Enter second course grade:");
      scanf("%d",&list[*counter].course2_grade);
      printf("\n Enter third course id:");
      scanf("%d",&list[*counter].course3_ID);
      printf("\n Enter third course grade:");
      scanf("%d",&list[*counter].course3_grade);

      *counter++;
      printf("\n student is added successfully\n");
  }
}
/*
int SDB_isIdExist(student list[],int *counter,int id)
{
 for (int i = 0; i < *counter; i++)
    {
        if (list[i].student_ID == id)
            {
                return 1;
            }
            else
            {
                return 0;
            }

}*/
void SBD_DeleteEntry(student list[],int *counter)
{
   int id;
   int index=-1;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *counter; i++)
    {
        if (list[i].student_ID == id)
            {
                index=i;
             for (int j = i; j < *counter - 1; j++)
                {
                   list[j] = list[j + 1];
                }
    (*counter)--;

    break;
            }
    printf("Student is deleted successfully\n");
     }
   if(index=-1)
   {
        printf("Student is not found\n");
   }



}

void SDB_ReadEntry(student list[],int *counter)
{
    int id;
    int index=-1;
    printf("Enter student ID to find: ");
    scanf("%d", &id);

    for (int i = 0; i < *counter; i++)
    {
        if (list[i].student_ID == id)
            {
                index=i;
                printf("\nStudent id : %d\n",list->student_ID);
                printf("Student year: %d\n",list->student_year);
                printf("first course id: %d\n", list->course1_ID);
                printf("first course grade: %d\n",list->course1_grade);
                printf("second course id: %d\n", list->course2_ID);
                printf("second course grade: %d\n",list->course2_grade);
                printf("third course id: %d\n", list->course3_ID);
                printf("third course grade: %d\n",list->course3_grade);
            }

    }
        if(index=-1)
            {
                printf("Student is not found\n");
            }
}
void SDB_GetList(student list[],int *counter)
{
    uint32 arr[10];
      for (int i = 0; i < *counter; i++)
    {
        arr[i]=list->student_ID;
    }
    for(int j=0;j < *counter;j++)
    {
        printf("%d\t",arr[j]);
    }

}
