//demonstrate function overloading
#include<iostream.h>

void display(int a,int b)
{
cout << "Total - " <<(a+b) <<endl;
}
void display(int a,int b,int c)
{
cout << "Total - " <<(a+b+c) <<endl;
}

int main()
{
display(2,5);
return 0;
}
