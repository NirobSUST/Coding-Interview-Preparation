int Solution::solve(vector<int> &A) {

    int max_n , min_n = A[0];

    for (auto x : A)
    {
        if (max_n < x)   max_n = x;
        else if (min_n > x)   min_n = x;
    }

    return min_n + max_n;
}