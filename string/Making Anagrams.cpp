#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
	string s1, s2;
    cin >> s1;
	cin >> s2;
	int hash1[26];
	int hash2[26];
	memset(hash1, 0, sizeof(hash1));
	memset(hash2, 0, sizeof(hash2));
    for(int i = 0; i < s1.length(); i++)
	{
		hash1[s1[i]-'a']++;
	}
	for(int i = 0; i < s2.length(); i++)
	{
		hash2[s2[i]-'a']++;
	}
	int count = 0;
	for(int i = 0; i < 26; i++)
	{
		if(hash1[i] == hash2[i])
			continue;
		count += abs(hash1[i] - hash2[i]);
	}
	cout << count << endl;
	return 0;
}
