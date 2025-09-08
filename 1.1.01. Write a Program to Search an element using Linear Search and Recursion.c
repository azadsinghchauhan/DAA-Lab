/*Write a program to search the given element from a list of elements with linear search technique using recursion.



﻿Note: Write the functions read1() and linearSearch() in Program911a.c


Sample Test Cases
Test case 1
Enter·n·value·:·4	
Enter·4·elements·:·10 20 15 12	
Enter·a·key·element·:·15	
The·key·element·15·is·found·at·position·:·2⏎	
Test case 2
Enter·n·value·:·6	
Enter·6·elements·:·2 6 4 1 3 7	
Enter·a·key·element·:·5	
The·key·element·5·is·not·found⏎*/




#include <stdio.h>

void read1(int a[], int n) {
    printf("Enter %d elements : ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int linearSearch(int a[], int index, int n, int key) {
    if (index >= n) {
        return -1;
    }
    if (a[index] == key) {
        return index;
    }
    return linearSearch(a, index + 1, n, key);
}

void main() {
    int a[20], n, pos, key;

    printf("Enter n value : ");
    scanf("%d", &n);

    read1(a, n);

    printf("Enter a key element : ");
    scanf("%d", &key);

    pos = linearSearch(a, 0, n - 1, key);

    if (pos == -1) {
        printf("The key element %d is not found\n", key);
    } else {
        printf("The key element %d is found at position : %d\n", key, pos);
    }
}
