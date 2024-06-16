int Solution::solve(vector<int> &A, int B) {

    int currentSum = 0, maxSum = 0;

    for (int i = 0; i < B; i++) {
        currentSum += A[i];
    }

    maxSum = currentSum;

    for (int i = B - 1, j = A.size() - 1; i >= 0; i--, j--) {
        currentSum = currentSum - A[i] + A[j];
        maxSum = max(currentSum, maxSum);
    }

    return maxSum;
}