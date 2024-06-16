bool isEqual(vector<int> &a, vector<int> &b)
{
    for (auto x : a) {
        for (auto y : b) {
            if (x == y) {
                return true;
            }
        }
    }
    return false;
}

int Solution::solve(vector<int> &A, int B) {

    int n = A.size();
    vector<vector<int>> vt;

    for (auto x : A)
    {
        vector<int> temp;
        temp.push_back(x);
        temp.push_back(x + B);
        temp.push_back(x - B);
        vt.push_back(temp);
    }

    for (int i = 0; i < n - 1; i++) {
        if (!isEqual(vt[i], vt[i + 1])) {
            return 0;
        }
    }
    return 1;
}
