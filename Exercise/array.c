//program that takes input from the user for an array of size 4, calculates the average of the input numbers, and then displays the numbers that are greater than the calculated average.
#include<iostream.h>

int main()
{
//Variables
float arr[4], tot = 0.0, avg = 0.0;
int c = 0;
//Input Values
for(c=0;c<4;c++)
{
//count
cout << "Enter - " ;
cin>>arr[c];
}
//Processing values to calculate the average
for(c=0;c<4;c++)
{
//total
tot = tot + arr[c];
}
avg = tot / 4;
//Display values that are greater than average
for(c=0;c<4;c++)
{
if(arr[c] > avg)
{
cout << "Number - " << arr[c] << endl;
}
}



}
