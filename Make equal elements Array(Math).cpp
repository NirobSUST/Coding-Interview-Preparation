int Solution::solve(vector<int> &A, int B) {
    for (int i = 1; i < A.size(); i++)
    {
        int val = abs(A[i] - A[i - 1]);
        if ( val == B or val == 2 * B or val == 0 ) continue;
        else return 0;
    }
    return 1;
}