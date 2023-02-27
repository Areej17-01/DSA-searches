int binary_search(int arr[], int n,int key) {
    int end = n;
    int start = 0;
    while (start <= end) {
        int mid = (start+end) / 2;
        if (key == arr[mid]) {
            return(arr[mid]);
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        else  {
            start = start + 1;
        }
    }
    return(-1);

}
int main() {
    int arr[7] = { 1,2,3,4,5,6,7 };
    int key = 4;
    int n = 7;
    int element=binary_search(arr, n, key);
    if (element == -1) {
        cout << "not found" << endl;
    }
    else {
        cout << element << endl;
    }
}
