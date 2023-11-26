#ifndef FUNCTION.H
#define FUNCTION.H
typedef char int8;
typedef int int32;
typedef unsigned char uint8;
typedef unsigned int uint32;
typedef unsigned short uint16;
typedef float f32;

typedef struct
{
     uint32 student_ID;
     uint32 student_year;
     uint32 course1_ID;
     uint32 course1_grade;
     uint32 course2_ID;
     uint32 course2_grade;
     uint32 course3_ID;
     uint32 course3_grade;
}student;
void SBD_AddEntry(student list[],int *counter);
void SBD_DeleteEntry(student list[],int *counter);
void SDB_ReadEntry(student list[],int *counter);
int SDB_isIdExist(student list[],int *counter,int id);

void display(student list);
void EDIT(student list[],int *counter);
void displayAll(student list[],int *counter);

#endif
