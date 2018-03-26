/*Develop a project with necessary class & member function definition for a cricket player
object.(Use array of objects) The program should accept the details from user (max 10): Player code, name, runs, innings- played and number of times not out. The program should contain following menu: -
a) Enter details of players.
b) Display average runs of a single player.
c) Display average runs of all players. (Use function overloading).*/

#include<iostream>
using namespace std;
class cricket_player
{
	public:
		int playerCode,name,runs,inningsPlayed,not_out;
		void getdata()
		{
			cout<<"enter player code: ";
			cin>>playerCode;
			cout<<"enter name: ";
			cin>>name;
			cout<<"enter runs: ";
			cin>>runs;
			cout<<"enter inningPlayed: ";
			cin>>inningsPlayed;
			cout<<"enter number of times not out: ";
			cin>>not_out;
		}
		void showdata()
		{
			cout<<"player code: "<<playerCode<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"runs: "<<runs<<endl;
			cout<<"innings played: "<<inningsPlayed<<endl;
			cout<<"number of times not out: "<<not_out;
		}
};
void avg(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j)
{
	float A;
	A=(a+b+c+d+e+f+g+h+i+j)/10;
	cout<<A;	
}
int main()
{
	cricket_player p[10];
	for(int i=0;i<10;i++)
	{
		p[i].getdata();
	}
	for(int i=0;i<10;i++)
	{
		p[i].showdata();
	}
	avg(p[0].runs,p[1].runs,p[2].runs,p[3].runs,p[4].runs,p[5].runs,p[6].runs,p[7].runs,p[8].runs,p[9].runs);
	return 0;
}
