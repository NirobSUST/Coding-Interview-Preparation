int Solution::maxp3(vector<int> &A) {

   sort(A.begin(), A.end());

   int len = A.size();

   int all_positive = A[len - 1] * A[len - 2] * A[len - 3];
   int two_negative = A[0] * A[1] * A[len - 1];

   return max(all_positive, two_negative);
}