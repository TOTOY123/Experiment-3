#include<iostream>

using namespace std;

int main()
{

int array[10], a, sum=0, average;

cout<<"Enter values: "; 

for (a=0; a<10; a++)
{
  cin >> array[a];
}
  cout << endl;

for(a=0; a<10; a++)
{
  sum = sum + array[a];
  average = sum/10;
	}
  
cout<<"The sum of the 10 numbers is: "<< sum <<endl;
cout<<"The average of the 10 numbers is: "<< average;

return 0;
}




