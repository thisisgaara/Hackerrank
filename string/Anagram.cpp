def process_string(p):
    hash_table= [0 for i in range(0, 26)]
    count = 0;
    length = len(p);
    s = p[0:length/2]
    p = p[length/2:];
    for i in p:
        hash_table[ord(i)-ord('a')] += 1;
    for i in s:
        if hash_table[ord(i)-ord('a')] == 0:
            count = count + 1;
        else:
            hash_table[ord(i)-ord('a')] -=1;
    return count
    
n = input();

while(n > 0):
    n = n - 1;
    p = raw_input();
    p = list(p);
    if(len(p) % 2 == 1):
        print "-1"
        continue;
    else:
        print process_string(p)
