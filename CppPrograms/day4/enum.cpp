#include<iostream>
using namespace std;

enum GENDER{MALE,FEMALE};
enum Days{SUN,MON,TUE,WED};

void display(GENDER gender){ // gender = Male
	cout<<"Gender :"<<gender<<endl;
}

void show_day(int day){
	if(day==SUN) cout<<"Sunday"<<endl;
	else if(day==MON) cout<<"Monday"<<endl;
	else cout<<"other day"<<endl;
}
int main()
	{
	display(MALE);
	int day=1;
	show_day(day);
	return 0;
	}
