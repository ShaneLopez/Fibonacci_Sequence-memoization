#include <iostream>
#include <vector>

using namespace std;

int fib(vector<long>& memo, long n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }

    if(memo[n] != -1)
    {
        //cout << "grabbing memo " << n << endl;
        return memo[n];
    }

    //cout << "computing fib " << n << endl;
    int result = fib(memo, n - 1) + fib(memo, n - 2);

    memo[n] = result;
    return result;
}

int main()
{
    vector<long> memo(20, -1);
    cout << fib(memo, 20) << endl;
}
