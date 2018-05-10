#include<bits/stdc++.h>
using namespace std;

void sum(int data_1,int data_2)
{
      int  sum;
      sum=data_1+data_2;
      cout<<data_1<<" + "<<data_2<<" = "<<sum<<endl;
}

int main()
{
	int value_1,value_2;
	cout<<"Enter any value: ";
	cin>>value_1;
	cout<<"Enter any value: ";
	cin>>value_2;
	sum(value_1,value_2);
	return 0;
}

