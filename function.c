#include "function.h"
#define SIZE 5

void add(student list[],int *counter)
{
  if(*counter>=SIZE)
  {
      printf("\n NO space to Enter new student.");
  }
  else
  {
      printf("\n Enter First Name:");
      scanf("%s",&list[*counter].f_name);
      printf("\n Enter Last Name:");
      scanf("%s",&list[*counter].l_name);
      printf("\n Enter id:");
      scanf("%d",&list[*counter].ID);
      printf("\n Enter GPA:");
      scanf("%f",&list[*counter].GPA);
      printf("\n Enter courses:");
      scanf("%d",&list[*counter].courses);

      *counter++;
      printf("\n student is added successfully\n");
  }
}

void display(student list)
{
    printf("\nStudent First Name: %s\n",list.f_name);
    printf("Student Last Name: %s\n",list.l_name);
    printf("Student ID: %d\n", list.ID);
    printf("Student GPA: %0.2f\n", list.GPA);
    printf("Student Courses: %d\n", list.courses);

}
void DEL(student list[],int *counter)
{
   int id;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *counter; i++)
    {
        if (list[i].ID== id)
            {
             for (int j = i; j < *counter - 1; j++)
                {
                   list[j] = list[j + 1];
                }
    (*counter)--;

    break;
            }

     }
     printf("Student is deleted successfully\n");

}
void EDIT(student list[],int *counter)
{
  int id;
  int index=-1;
    printf("Enter student ID to Edit: ");
    scanf("%d", &id);

    for (int i = 0; i < *counter; i++)
    {
        if ((list)[i].ID== id)
        {
           index=i;
           break;
        }
    }

   if(index ==-1)
         {
             printf("Student not found\n");
             return 0;
         }



printf("\n Enter First Name:");
scanf("%s",&(list)[index].f_name);
printf("\n Enter Last Name:");
scanf("%s",&(list)[index].l_name);
printf("\n Enter id:");
scanf("%d",&(list)[index].ID);
printf("\n Enter GPA:");
scanf("%f",&(list)[index].GPA);
printf("\n Enter courses:");
scanf("%d",&(list)[index].courses);
printf("Data changed \n");
return 0;

}
void displayAll(student list[],int *counter){
if (*counter ==0)
{
    printf("NO Students to display\n");
    return 0;

}
printf("Dispaly all students\n");
for(int i =0;i<*counter;i++)
{
   printf("\nStudent First Name: %s\n",list[i].f_name);
    printf("Student Last Name: %s\n",list[i].l_name);
    printf("Student ID: %d\n", list[i].ID);
    printf("Student GPA: %0.2f\n", list[i].GPA);
    printf("Student Courses: %d\n", list[i].courses);

}
}




