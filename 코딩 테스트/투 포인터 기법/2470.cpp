/*
    N개의 정수를 갖는 정렬된 수열에서 서로 다른 두 원소를 합해서 0에 가깝게 만들기
    입력 배열 : -99 -2 -1 4 98
 */

#include <iostream>
#include <vector>
#include <algorithm>
// 최대값 및 최소값을 설정할 수 있음
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    int left = 0, right = N - 1;
    int min_sum = INT_MAX;
    pair<int, int> closest_pair;

    while (left < right) {
        int sum = numbers[left] + numbers[right];
        int abs_sum = abs(sum);

        if (abs_sum < min_sum) {
            min_sum = abs_sum;
            closest_pair = {numbers[left], numbers[right]};
        }

        if (sum < 0) {
            ++left;
        } else {
            --right;
        }
    }

    cout << closest_pair.first << " " << closest_pair.second << "\n";

    return 0;
}
