#include<iostream>
using namespace std;

void function(int t)
{
	if (t == 42)
	{
		return;
	}
	else
	{
		cout << t << endl;
		cin >> t;
		function(t);
	}
}

int main()
{
	int t;
	cin >> t;
	function(t);
	return 0;
}
