/* A mini project using C++ to record a score of a cricket match.
One array stores information of batting team such as batman's name, runs score,etc.
The other array stores information about bowling team.
The project reads in above information and depending on user's choice,
it displays either batting team's information or bowling team's information. */
#include<iostream>
using namespace std;
class bowling;
class batting
{
	public:
		string pname[11];
		int run[11],score=0;
		void ginfor()
		{
			for(int i=0;i<11;i++)
			{
				cout<<"enter player name: ";
				getline(cin,pname[i]);
				cout<<"enter runs: ";
				cin>>run[i];
				score=score+run[i];
			}
		}
		void sinfor()
		{
			for(int i=0;i<11;i++)
			{
				cout<<"player name: "<<pname[i]<<endl;
				cout<<"player runsL "<<run[i]<<endl;
			}
			cout<<"total runs: "<<score<<endl;
		}
};
class bowling
{
	public:
		string pname[11];
		int pover[11],over=20;
		void ginfor()
		{
			for(int i=0;i<11;i++)
			{
				cout<<"enter player name: ";
				getline(cin,pname[i]);
				cout<<"enter player overs: ";
				cin>>pover[i];
			}
		}
		void sinfor()
		{
			for(int i=0;i<11;i++)
			{
				cout<<"player name: "<<pname[i]<<endl;
				cout<<"player overs "<<pover[i]<<endl;
			}
			cout<<"total overs: "<<over<<endl;
		}
};
int main()
{
	batting bat;
	bowling ball;
	bat.ginfor();
	ball.ginfor();
	cout<<"press 1 to show batting information"<<endl;
	cout<<"press 2 to show bowling information"<<endl;
	int i;
	char ch;
	cout<<"enter number: ";
	cin>>i;
	do
	{
		if(i==1)
		{
			bat.sinfor();
		}
		else if(i==2)
		{
			ball.sinfor();
		}
		cout<<"do you want to continue: ";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	return 0;
}
