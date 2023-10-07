#include <iostream>

using namespace std;

int buff[256];

// 병합 함수
// int buff[256]; 로 전역변수로 할당함
void merge(int data[], int left, int mid, int right)
{
    int i = left, j = mid + 1, k = left;
    // 한개씩 비교 하는 코드
    while (i <= mid && j <= right){
        if (data[i] <= data[j])
            buff[k++] = data[i++];
        else
            buff[k++] = data[j++];
    }
    
    while (i <= mid)
        buff[k++] = data[i++];
    while (j <= right)
        buff[k++] = data[j++];
    // 정렬된 데이터 복사하기
    for (int x = left; x <= right; x++)
        data[x] = buff[x];
}

void merge_sort(int data[], int left, int right)
{
    if (left < right) {
        int mid = (left + right) / 2;
        merge_sort(data, left, mid);
        merge_sort(data, mid + 1, right);
        // 병합
        merge(data, left, mid, right);
    }
}

int main()
{
    int data[] = {2, 6, 7, 4, 1, 8, 5, 3};
    merge_sort(data, 0, 7);
    
    for (auto n : data)
        cout << n << ", ";
    cout << endl;
}
