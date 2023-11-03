#include <iostream>

using namespace std;

int main()
{

srand ( time(0) );
int *a, max, n, s_max;
cout << "razmer massiva:";
cin >> n;
a = new int[n];
for (int i = 0; i < n; i++)
{
a[i] = i+1;
std::cout << a[i]<< " ";
}
/*max = s_max = a[0];
for (int i = 0; i < n; i++)
if (a[i] > max)
max = a[i];
cout«"\n max = "« max« endl;
for (int i = 0; i < n; i++)
if (a[i] > s_max && a[i] != max)
s_max = a[i];
cout«"\n max2 = "« s_max« endl;*/
delete []a; 
return 0;
}