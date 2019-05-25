#include<iostream>

using namespace std;

int main()
{

int provA[7], provB[7], provC[7], a;


for (a=0; a<7; a++)
{
  cout << "Enter temperature for province A Day" << a+1 << ": ";
  cin >> provA[a];
}

for (a=0; a<7; a++)
{
  cout << "Enter temperature for province B Day" << a+1 << ": ";
  cin >> provB[a];
}

for (a=0; a<7; a++)
{
  cout << "Enter temperature for province C Day" << a+1 <<": ";
  cin >> provC[a];
}

for (a=0; a<7; a++)
{
  cout << "The temperature for province A Day" <<a+1<< ": ";
  cout << provA[a] << endl;
}

for (a=0; a<7; a++)
{
  cout << "The temperature for province B Day" << a+1 << ": ";
  cout << provB[a] << endl;
}

for (a=0; a<7; a++)
{
  cout << "The temperature for province C Day"<< a+1 <<": ";
  cout << provC[a] <<endl;
}

return 0;
}


