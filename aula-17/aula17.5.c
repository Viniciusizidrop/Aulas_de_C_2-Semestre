void selectionSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (v[j] < v[min]) min = j;

        if (min != i) {
            int t = v[i];
            v[i] = v[min];
            v[min] = t;
        }
    }
}