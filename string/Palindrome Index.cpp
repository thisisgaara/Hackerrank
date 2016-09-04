#include <bits/stdc++.h>
using namespace std;

int check_palindrome(string s)
{
	int l = 0;
	int r = s.length() - 1;
	while(l < r)
	{
		if(s[l] == s[r])
		{
			l++;
			r--;
		}
		else
			break;
	}
	if(l >= r)
	{
		return -1;
	}
	int leftFault = 1;
	int saveleft = l;
	int saveright = r;
	l++;
	while(l < r)
	{
		if(s[l] == s[r])
		{
			l++;
			r--;
		}
		else
		{
			leftFault = 0;
			break;
		}
	}
	return(leftFault? saveleft:saveright);
}
int main(){
    int n;
	string s;
    cin >> n;
	while(n--)
	{
		string v;
		cin >> v;
		cout << check_palindrome(v) << endl;
	}
    return 0;
}
