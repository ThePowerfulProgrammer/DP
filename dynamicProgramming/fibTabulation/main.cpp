#include <iostream>
#include <vector>
using namespace std;

/** Program solving Fib sequence using Iteration + Tabulation(DP) */

long int fib(int n)
{
    vector<long int> table(n+1,0);
    table[1] = 1; // base cases

    for (int i=0;i<=n;i++) // iterative case
        {
            table[i+1] += table[i];
            table[i+2] += table[i];
        }

    return table[n];
}

int main()
{
    cout << "Fib solution using Iteration + Tabulation!" << endl;
    cout << fib(6) << endl;
    cout << fib(35) << endl;
    return 0;
}
