//10 numbers as input, calculates their sum and average, and then displays the total sum and average
#include<iostream.h>
using namespace std;
void fninput(int i)
{
	for(i=1,i<10,i++)
	{
		cout<<"Enter 10 numbers:"endl;
		cin>>i;
	}
}
void fnprocess(int sum, int avg)
{
	sum=sum+i;
	avg=sum/10;
}
void fnoutput()
{
	cout<<"total-"<<sum<<endl;
	cout<<"average"<<avg<<endl;
}
int main()
{
	fninput()
	fnprocess()
	fnoutput()
	return 0;
}
