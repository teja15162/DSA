# 1752. Check if Array Is Sorted and Rotated

![Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

---

## Topics

- Array

---

## Problem Link

https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

---

## Problem Description

Given an array `nums`, return `true`*if the array was originally sorted in non-decreasing order, then rotated **some** number of positions (including zero)*. Otherwise, return `false`.

There may be **duplicates** in the original array.

**Note:** An array `A` rotated by `x` positions results in an array `B` of the same length such that `B[i] == A[(i+x) % A.length]` for every valid index `i`.

**Example 1:**

```
Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].
```

**Example 2:**

```
Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.
```

**Example 3:**

```
Input: nums = [1,2,3]
Output: true
Explanation: [1,2,3] is the original sorted array.
You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
```

**Constraints:**

- `1 <= nums.length <= 100`
- `1 <= nums[i] <= 100`

---

## Approach

### Approach

A sorted array can become a valid rotated sorted array by moving
some elements from the beginning to the end.

For example:

Sorted array:
`[1, 2, 3, 4, 5]`

After rotation:
`[3, 4, 5, 1, 2]`

The important observation is that a rotated sorted array has at most
one position where the order decreases:

`nums[i] > nums[i + 1]`

In the example:

`[3, 4, 5, 1, 2]`
        ↑
        5 > 1

This position tells us where the rotation occurs.

1. Create a copy of the given array and sort it. This gives us the
   original sorted version of the array.

2. If the given array is already equal to the sorted array, then it
   is a valid array with 0 rotations.

3. Starting from the end, find the position where the sorted order
   breaks. From this, determine the number of rotations `x`.

4. A rotated array can be represented using:

   `B[i] = A[(i + x) % n]`

   where:
   - A is the sorted array
   - B is the given array
   - x is the number of rotations
   - n is the size of the array

5. Use this formula to compare every element of the given array with
   the corresponding element of the sorted array.

6. If every element matches, the array is a rotated sorted array.
   Otherwise, return false.

---

## Complexity

| Metric | Value |
|---------|-------|
| Time | O(N logN) |
| Space | O(N) |

---

## Solution

See:

`solution.cpp`

---

Generated using **PushCode**
