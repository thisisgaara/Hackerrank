#include <bits/stdc++.h>
using namespace std;
int flag = 1;
string compress(string s)
{
	string temp;
	int count = 1;
	int i;
	flag  = 0;
	for(i = 1; i < s.length(); i++)
	{
		if(s[i-1] == s[i])
		{
			count++;
		}
		else
		{
			if(count & 1)
			{
				temp.push_back(s[i-1]);
				flag = 1;
			}
			count = 1; //Reset the counter
		}
	}
	if(count & 1)
	{
		temp.push_back(s[i-1]);
		flag = 1;
	}
		
	return temp;
}
int main()
{
	string s;
	cin >> s;
	int len = s.length();
	for(int i = 0; i < len; i++)
		s = compress(s);	
	if (!s.empty() && s[0] != '\0')
		cout << s << endl;
	else
		cout << "Empty String" << endl;
}
