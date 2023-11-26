#ifndef FUNCTION.H
#define FUNCTION.H
typedef int uint16;

typedef struct
{
    char f_name[50];
    char l_name[50];
    int ID;
    float GPA;
    int courses;
}student;
void add(student list[],int *counter);
void display(student list);
void DEL(student list[],int *counter);
void EDIT(student list[],int *counter);
void displayAll(student list[],int *counter);

#endif
