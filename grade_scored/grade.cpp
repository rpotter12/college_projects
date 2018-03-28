/*  Develop a mini project that allows the user to enter the grade scored in a programming class (0-100).
a) If the user scored a 100 then notify the user that they got a perfect score.
b) Modify the project so that if the user scored a 90-100 it informs the user that they scored an A
c) Modify the project so that it will notify the user of their letter grade 0-59 F 60-69 D 70-79 C 80-89 B 90-100 A  */
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter marks: ";
    cin>>marks;
    if(marks==100)
        cout<<"perfect score"<<endl;
    else if(marks>=90 && marks<100)
        cout<<"grade: A";
    else if(marks>=80 && marks<=90)
        cout<<"grade: B";
    else if(marks>=70 && marks<=80)
        cout<<"grade: C";
    else if(marks>=60 && marks<=70)
        cout<<"grade: D";
    else if(marks>=50 && marks<=60)
        cout<<"grade: E";
    else if(marks>=0 && marks<50)
        cout<<"grade: F";
        return 0;
}
