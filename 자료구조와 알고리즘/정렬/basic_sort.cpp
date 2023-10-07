#include <iostream>
#include <algorithm>

using namespace std;

void buble_sort(int data[], int n)
{
    for (int i = 0 ; i < n - 1; i++){
        // data[n-1]부터 data[i]까지 이동하면서
        for (int j = n -1; j > i; j--){
            // 인접한 두 원소를 비교 & 교환
            if (data[j] < data[j-1])
                swap(data[j], data[j-1]);
        }
    }
}

void selection_sort(int data[], int n)
{
    for (int i = 0; i < n -1; i++){
        int idx = i;
        // data[i], data[i+1],...data[n-1]에 대해
        for (int j = i + 1; j < n; j++){
            // 최소값을 갖는 인덱스을 알아낸 후
            if (data[j] < data[idx])
                idx = j;
        // data[i]와 data[idx]를 교환
        swap(data[i], data[idx]);
        }
    }
}

void insertion_sort(int data[], int n)
{
    for (int i = 1; i < n; i++){
        // data[i]를 임시 변수(key)에 복사한 후
        int key = data[i];
        int j = i - 1;
        // data[i-1]부터 data[0]까지 차례로 검사하면서
        while (j >= 0 && data[j] > key){
            data[j+1] = data[j];
            j--;
        }
        // key를 삽입하기에 적절한 위치를 찾을 때까지
        // 각각의 원소 값을 오른쪽 원소로 복사하고
        // 적절한 위치에 key값을 삽입(복사)
        data[j+1] = key;
    }
    
}

int main()
{
    int data[] = {4, 2, 3, 5, 1};
    //buble_sort(data, 5);
    //selection_sort(data, 5);
    insertion_sort(data, 5);
    for (auto n : data){
        cout << n << ", ";
    }
    cout << endl;
}
