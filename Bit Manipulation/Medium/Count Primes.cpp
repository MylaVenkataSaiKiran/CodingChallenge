bool isPrime(int x)
{
    if (x == 2)
        return true;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

vector<int> countPrimes(int n)
{
    vector<int> ans;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (isPrime(i))
                ans.push_back(i);
            if (isPrime(n / i) && i * i != n)
                ans.push_back(n / i);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}