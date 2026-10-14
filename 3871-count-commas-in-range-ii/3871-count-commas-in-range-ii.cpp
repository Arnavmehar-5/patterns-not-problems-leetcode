class Solution {
public:
    long long countCommas(long long n) {

        long long power = 1000;
        long long commas = 1;
        long long answer = 0;

        while(power <= n) {

            long long end = min(n, power * 1000 - 1);

            long long count = end - power + 1;

            answer += count * commas;

            power *= 1000;
            commas++;
        }

        return answer;
    }
};