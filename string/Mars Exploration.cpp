#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    int count = 0;

    for(int i = 0; i < s.length(); i+=3)
        {
        //Take triplet and evaluate
        if(s[i] != 'S')
            {
            count++;
        }
        if(s[i+1] != 'O')
            count++;
        if(s[i+2] != 'S')
            count++;
    }
    cout << count << endl;
    return 0;
}
