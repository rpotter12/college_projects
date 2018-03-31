/* Develop a project for Cricket Score Management System.
a) It saves all the team and team members name and their history.
b) Each and every match can be updated lively using this program.
c) Point table of all the output will be shown.
d) ODI and test ranking table can also be viewed in this program Commentary of each ball can be viewed.
e) Increment of each ball, over, run is done automatically in this automated system.
f) As soon as someone checks the scoreboard, details of a particular player can be viewed by a single click on his name.
g) Any news other than cricket will also be updated. */

#include<iostream>
using namespace std;
void player();
void runs(int a);
void team()
{
	string tname;
	cout<<"enter team name: ";
	getline(cin,tname);
	player();
}
void player()
{
	string p[11];
	int a[11],b[11];
	for(int i=0;i<11;i++)
	{
		cout<<"enter player name: ";
		getline(cin,p[i]);
		cout<<"enter ODI ranking: ";
		cin>>a[i];
		cout<<"enter TEST ranking: ";
		cin>>b[i];
	}
}	
void runs(int a)
{
	int run[1000],trun=0;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<"over: "<<i<<"."<<j+1<<endl;
			cout<<"enter runs: ";
			cin>>run[j];
			trun=trun+run[j];
		}
	}
	cout<<"total runs: "<<trun<<endl;
}
int main()
{
	cout<<"press 1 to enter team name and player name"<<endl;
	cout<<"press 2 to enter runs per ball"<<endl;
	int ch,over;
	cin>>ch;
	switch(ch)
	{
		case 1: team();
			break;
		case 2: cout<<"enter number of overs: ";
			cin>>over;
			runs(over);
			break;
	}
	return 0;
}
