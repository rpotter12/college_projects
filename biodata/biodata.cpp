/* Design two base personnel (name, address, e-mail-id, birthdate) and academic (marks in 10th and 12th, class obtain) derive
a class biodata from both these class. Develop a project to prepare
a biodata of a student having a personal information and academic information */
#include<iostream>
using namespace std;
class personal
{
public:
    string name,address,email,birth;
    void getdata()
    {
        cout<<"enter name: ";
        getline(cin,name);
        cout<<"enter address: ";
        getline(cin,address);
        cout<<"enter email: ";
        getline(cin,email);
        cout<<"enter birthdate: ";
        getline(cin,birth);
    }
};
class academic
{
public:
    int tenth,twelth;
    void putdata()
    {
        cout<<"enter 10th marks: ";
        cin>>tenth;
        cout<<"enter 12th marks: ";
        cin>>twelth;
    }
};
class biodata:public personal, public academic
{
public:
    void showdata()
    {
        cout<<"name: "<<name<<endl;
        cout<<"address: "<<address<<endl;
        cout<<"email: "<<email<<endl;
        cout<<"birthdate: "<<birth<<endl;
        cout<<"10th marks: "<<tenth<<"CGPA"<<endl;
        cout<<"12th marks: "<<twelth<<"%"<<endl;
    }
};
int main()
{
    biodata a;
    a.getdata();
    a.putdata();
    a.showdata();
    return 0;
}
