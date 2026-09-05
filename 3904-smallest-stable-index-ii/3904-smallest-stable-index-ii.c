int firstStableIndex(int* nums, int numsSize, int k) {
    int n = numsSize;

    int* dp = (int*)malloc(n * sizeof(int));

    int mint = INT_MAX;

    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] < mint) {
            mint = nums[i];
        }

        dp[i] = mint;
    }

    int maxt = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > maxt) {
            maxt = nums[i];
        }

        if (maxt - dp[i] <= k) {
            free(dp);
            return i;
        }
    }


    return -1;
}