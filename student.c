#include <stdio.h>
#include <string.h>


// structure คือ  ที่เก็บข้อมูล
// ประกาศรูปแบบของการเก็บข้อมูลด้วย struct
typedef struct Student_ {
    
    char name[100];
    char id[11];
    double score;

} Student;

void print_student(Student stu)
{
    printf("%s (%s): %.2lf\n", stu.name, stu.id, stu.score);
    stu.score = 0;
}

void add_score(Student* stuPtr, double score)
{
    stuPtr->score += score;
}
int main(){
    // นำ struct ไปใช้งาน โดยการประกาสตัวแปร struct
    // มอง struct เหมือนเป็น data type
    Student job, bath_; 
    Student pp_ = {"พีรพัฒน์", "62104aaaaa", 110};
    Student student[10];
    Student* sp = &job;
    
    strcpy(student[0].name, "Prayad");
    strcpy(student[0].id, "55555years");
    student[0].score = 130;
    
    for(int i=0; i<10; i++){

        print_student(student[0]);
    }

      for(int i=0; i<10; i++){

        print_student(*(sp+i));
    }
    strcpy(job.name, "chayangkoon");
    strcpy(job.id, "62104aaxxx");
    job.score = 90.877725;

    print_student(job);
    add_score(&job, 10.5);
    print_student(job);
    add_score(sp, 10.5);
    print_student(job);



  
    
    

}
