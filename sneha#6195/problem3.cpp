[3:34 PM, 3/16/2021] +91 78796 36878: #include <vector>
#include <string>

bool isInterleave(string a, string b, string c){

    // We want to reduce the space complexity to O(min(N,M)). 
    // We swap the two strings if b.length() > a.length(), so that we can make a dp array of size b.length()+1.
    if(b.length() > a.length()){
        swap(a,b);
    }

    int n1 = a.length(), n2 = b.length(), n3 = c.length();

    // Create a dp array of size n2 and initialise it to false.
    vector<bool> dp(n2 + 1, false);

    // If the length of "c" is not equal to the sum of the length of "a" and "b", then return false.
    if(n1 + n2 != n3) {
        return false;
    }

    int i,j;

    for(i = 0; i <= n1; i++){

        for(j = 0; j <= n2; j++){

            // Mark dp[j] as true, if the values of …
[3:34 PM, 3/16/2021] +91 78796 36878: https://www.codingninjas.com/codestudio/problems/palindromic-substrings_630404
[3:34 PM, 3/16/2021] +91 78796 36878: /*
    Time Complexity : O(N^3)
    Space complexity : O(1)

    where N is the size of the input string
*/

bool isPalindrome(string &str, int start, int end)
{
    while (start < end)
    {
        if(str[start] != str[end])
        {
            return false;
        }

        ++start;
        --end;
    }

    return true;
}

int palindromicSubstrings(string str)
{
    int n = str.length();
    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if(isPalindrome(str, i, j))
            {
                ++ans;
            }
        }
    }

    return ans;
}
