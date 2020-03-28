int cbinsearch(int* a, int size, int value)
{
    int left = 0, right = size;
    int ans = size;
    while (right>=left) {
        int middle = (right + left) / 2;
        if (value<a[middle]) {
            ans = middle;
            right = middle-1;
        }
        else {
            left = middle+1;
        }
    }

    left = 0, right = size -1;
    int ans1 = -1;
    while (right >= left) {
        int middle = (right + left) / 2;
        if (value <= a[middle]) {
            ans1 = middle;
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
    }
    if (ans1 == -1) return ans1;
    else return ans - ans1;

}
