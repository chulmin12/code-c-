/*
 N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오. (버블정렬) -> swap 방식
 */

#include <iostream>
#include <vector>

using namespace std;

void swap_sort(vector<int>& num) {
    auto num_size = num.size();

    for (int i = 0; i < num_size - 1; i++) {
        for (int j = 0; j < num_size - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                // Swap num[j] and num[j + 1]
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> num(N);

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    swap_sort(num);

    for (int i = 0; i < N; i++) {
        cout << num[i] << "\n";
    }
}
