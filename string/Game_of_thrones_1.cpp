#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
	string s;
    cin >> s;
	int hash[26];
	int odd = 0;
	memset(hash, 0, sizeof(hash));
    for(int i = 0; i < s.length(); i++)
	{
		hash[s[i]-'a']++;
	}
	if(s.length() & 1)
	{
		for(int i = 0; i < 26; i++)
			if(hash[i] & 1)
				odd++;
		
		if(odd > 1)
			cout << "NO" << endl;
		else 
			cout << "YES" << endl;
	}
	else
	{
		for(int i = 0; i < 26; i++)
			if(hash[i] & 1)
				odd++;
		
		if(odd != 0)
			cout << "NO" << endl;
		else 
			cout << "YES" << endl;
	}
	
	return 0;
}
