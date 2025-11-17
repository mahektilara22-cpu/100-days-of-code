// Write a program to take an integer array nums of size n, and print the majority element.
// The majority element is the element that appears strictly more than ⌊n / 2⌋ times.
// Print -1 if no such element exists.

#include <stdio.h>

int findMajorityElement(int nums[], int n) {
    int count = 0;
    int candidate = -1;

    // Boyer-Moore Voting Algorithm to find candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else {
            if (nums[i] == candidate)
                count++;
            else
                count--;
        }
    }

    // Verify if candidate is majority
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;
    else
        return -1;
}

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = findMajorityElement(nums, n);
    printf("%d\n", result);

    return 0;
}
