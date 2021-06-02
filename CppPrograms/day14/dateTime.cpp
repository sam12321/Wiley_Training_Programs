#include<iostream>
#include<ctime>

using namespace std;

int main()
{

time_t t=time(0); // time object
char *ts=ctime(&t); // ctime - current time
cout<<"current time:"<<ts<<endl;

tm *time_m=gmtime(&t); // greenwhich time | different time zone

cout<<"---------greenwhich time--------"<<endl;
cout<<time_m->tm_mday<<"/"<<time_m->tm_mon+1<<"/"<<time_m->tm_year+1900<<endl;
cout<<time_m->tm_hour<<":"<<time_m->tm_min<<":"<<time_m->tm_sec<<endl;

cout<<"tm_wday:"<<time_m->tm_wday<<endl; // printing day
cout<<"tm_yday:"<<time_m->tm_yday<<endl; // printing day with respect to 365 days
cout<<"---------local time----------"<<endl;
time_m=localtime(&t); // to get local timezone

cout<<time_m->tm_mday<<"/"<<time_m->tm_mon+1<<"/"<<time_m->tm_year+1900<<endl;
cout<<time_m->tm_hour<<":"<<time_m->tm_min<<":"<<time_m->tm_sec<<endl;
return 0;
}
