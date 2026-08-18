# 283. Move Zeroes

![Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

---

## Topics

- Array
- Two Pointers

---

## Problem Link

https://leetcode.com/problems/move-zeroes/

---

## Problem Description

Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

**Note** that you must do this in-place without making a copy of the array.

**Example 1:**

```
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
```

**Example 2:**

```
Input: nums = [0]
Output: [0]
```

**Constraints:**

- `1 <= nums.length <= 104`
- `-231 <= nums[i] <= 231 - 1`

**Follow up:** Could you minimize the total number of operations done?

---

## Approach

We need to move all zeroes to the end of the array while keeping the
relative order of the non-zero elements unchanged.

We use a pointer `k` to keep track of the position where the next
non-zero element should be placed.

1. Initialize `k = 0`.

2. Traverse the array using `i`.

3. Whenever `nums[i]` is non-zero:
   - Place it at `nums[k]`.
   - Increment `k`.

   This moves all non-zero elements toward the beginning of the array
   while preserving their original order.

4. After the traversal, all positions before `k` contain the non-zero
   elements.

5. Fill all remaining positions from `k` to the end with `0`.

For example:

`[0, 1, 0, 3, 12]`

After moving non-zero elements:

`[1, 3, 12, 3, 12]`

Then fill the remaining positions with zeroes:

`[1, 3, 12, 0, 0]`

The array is modified in-place, so no extra array is required.

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
