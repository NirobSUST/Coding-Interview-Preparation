int findMin(vector<int> &A, int leftIdx, int rightIdx) {
    if (leftIdx == rightIdx) {
        return A[leftIdx];
    }
    int midIdx = (int) (leftIdx + rightIdx) / 2;
    int leftMin = findMin(A, leftIdx, midIdx);
    int rightMin = findMin(A, midIdx + 1, rightIdx);

    if (leftMin < rightMin) {
        return leftMin;
    }
    return rightMin;
}

int findMax(vector<int> &A, int leftIdx, int rightIdx) {
    if (leftIdx == rightIdx) {
        return A[leftIdx];
    }
    int midIdx = (int) (leftIdx + rightIdx) / 2;
    int leftMax = findMax(A, leftIdx, midIdx);
    int rightMax = findMax(A, midIdx + 1, rightIdx);

    if (leftMax > rightMax) {
        return leftMax;
    }
    return rightMax;
}
int Solution::solve(vector<int> &A) {

    int max_n = findMax(A, 0, A.size() - 1);
    int min_n = findMin(A, 0, A.size() - 1);


    // cout << min_n << " " << max_n << endl;

    return min_n + max_n;
}