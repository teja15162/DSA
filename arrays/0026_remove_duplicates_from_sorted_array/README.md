# 26. Remove Duplicates from Sorted Array

![Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

---

## Topics

- Array
- Two Pointers

---

## Problem Link

https://leetcode.com/problems/remove-duplicates-from-sorted-array/

---

## Problem Description

Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates [**in-place**](https://en.wikipedia.org/wiki/In-place_algorithm) such that each unique element appears only **once**. The **relative order** of the elements should be kept the **same**.

Consider the number of *unique elements* in `nums` to be `k​​​​​​​`​​​​​​​. After removing duplicates, return the number of unique elements `k`.

The first `k` elements of `nums` should contain the unique numbers in **sorted order**. The remaining elements beyond index `k - 1` can be ignored.

**Custom Judge:**

The judge will test your solution with the following code:

```
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass, then your solution will be **accepted**.

**Example 1:**

```
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
```

**Example 2:**

```
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
```

**Constraints:**

- `1 <= nums.length <= 3 * 104`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in **non-decreasing** order.

---

## Approach

Since the array is sorted, all duplicate elements will appear next to
each other.

We use two pointers:

- `i` → scans through the entire array.
- `k` → keeps track of the position where the next unique element
  should be placed.

We initialize `k = 1` because the first element is always unique.

For every element from index `1`:

1. Compare `nums[i]` with `nums[k-1]`, which is the last unique
   element we stored.
2. If they are different, `nums[i]` is a new unique element.
3. Place it at `nums[k]` and increment `k`.
4. If they are equal, it is a duplicate, so we simply skip it.

The array is modified in-place, so the first `k` elements contain all
the unique values.

Finally, return `k`, which represents the number of unique elements.

###Example:

Input:
[1, 1, 2, 2, 3]

Initially:
k = 1

i = 1 → nums[1] = 1
       duplicate → skip

i = 2 → nums[2] = 2
       new element → nums[1] = 2
       k = 2

i = 3 → nums[3] = 2
       duplicate → skip

i = 4 → nums[4] = 3
       new element → nums[2] = 3
       k = 3

Result:
[1, 2, 3, ...]

---

## Complexity

| Metric | Value |
|---------|-------|
| Time | O(N) |
| Space | O(1) |

---

## Solution

See:

`solution.cpp`

---

Generated using **PushCode**
