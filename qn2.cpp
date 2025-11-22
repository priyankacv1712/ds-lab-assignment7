#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int left = 0, right = n-1;
    while(left < right) {
        int minIndex = left;
        int maxIndex = right;
        for(int i=left;i<=right;i++) {
            if(arr[i] < arr[minIndex]) minIndex = i;
            if(arr[i] > arr[maxIndex]) maxIndex = i;
        }
        int t = arr[left];
        arr[left] = arr[minIndex];
        arr[minIndex] = t;
        if(maxIndex == left) maxIndex = minIndex;
        t = arr[right];
        arr[right] = arr[maxIndex];
        arr[maxIndex] = t;
        left++;
        right--;
    }
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}
