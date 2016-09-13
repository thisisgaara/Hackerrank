class Solution {
public:
    int myAtoi(string str) {
        int sign = 1; //0 means +ve
        long long int output = 0;
        int i = 0;
        while(str[i] == ' ')
            i++;
        if(str[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if(str[i] == '+')
        {
            i++;
            sign = 1;
        }
        for( ;i < str.length(); i++)
        {
            if(str[i] < '0' || str[i] > '9')
               break;
            output *= 10;
            output += (str[i] - '0');
            if(output * sign > INT_MAX)
            {
                return INT_MAX;
            }
            if(output *sign < INT_MIN)
            {
                return INT_MIN;
            }
        }
        
        return(output *sign);
        
    }
};
