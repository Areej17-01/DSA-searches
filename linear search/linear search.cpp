
int main()
{
    int c = 8;
    int arr[7] = { 1,2,3,4,5,6,7 };
    bool val = false;
    int x = 7;
    for (int i = 0; i < 7; i++) {
        if (x == arr[i]) {
            cout << "found at index: " << i << endl;
            bool val = true;
            break;
        }
    }
    if (val == false) {
        cout << "not in this list";
    }
    }
