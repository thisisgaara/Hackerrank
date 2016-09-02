#include <bits/stdc++.h>
using namespace std;

int* compute_prefix_table(string pattern)
{
	int n = pattern.length();
	int *table = (int *) malloc(n * sizeof(int));
	memset(table, 0, n);
	int j = 0, i = 1;
	while(i < n)
	{
		if(pattern[i] == pattern[j])
		{
			table[i] = j+1;
			i++;
			j++;
		}
		else if(j > 0)
			j = table[j-1];
		else
		{
			table[i] = 0;
			i++;
		}
	}
	return table;
}
int search_pattern(string pattern, string text)
{
	int m = pattern.length();
	int n = text.length();
	int i = 0, j = 0;
	static int count = 0;
	int *table = compute_prefix_table(pattern);
	while(i < n)
	{
		if(pattern[j] == text[i])
		{
			if(j == m-1)
			{
				count +=1;
				j = 0; i++;
			}
			else
			{
				i++;
				j++;
			}
		}
		else if(j > 0)
			j = table[j-1];
		else
			i++;
	}
	return count;
}
int main()
{
	string s;
    int n;
    cin >> n;
    cin >> s;
	int count = search_pattern("010", s);
	cout << count;
}
