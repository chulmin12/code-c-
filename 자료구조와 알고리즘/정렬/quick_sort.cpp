#include <iostream>
#include <algorithm>

using namespace std;

int partition(int data[], int left, int right)
{
    int pivot = data[left];
    int i = left + 1, j = right;
    
    while (true){
        // i를 증가시키면서 pivot보다 큰 data[i] 선택
        while (data[i] <= pivot && i <= right)
            i++;
        // j를 감소시키면서 pivot보다 작은 data[i] 선택
        while (data[j] > pivot && j > left)
            j--;
        // 만약 i < j 이면 data[i]와 data[j]를 교환하고, 1) i를 증사키는 코드부터 다시 시작
        if (i < j)
            swap(data[i], data[j]);
        // 그렇지 않으면 pivot과 data[j]를 교환
        else
            break;
    }
    swap(data[left], data[j]);
    return j;
}

void quick_sort(int data[], int left, int right)
{
    if (left < right){
        // parition 함수는 피벗 기준으로 배열을 재배치하는 함수이다.
        int p = partition(data, left, right);
        quick_sort(data, left, p - 1);
        quick_sort(data, p + 1, right);
    }
}

int main()
{
    int data[] = {5, 6, 7,3, 1, 9, 2, 4,8};
    quick_sort(data, 0, size(data) - 1);
    
    for (auto n : data)
        cout << n << ", ";
    cout << endl;
}
