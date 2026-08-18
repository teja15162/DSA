# 485. Max Consecutive Ones

![Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

---

## Topics

- Array

---

## Problem Link

https://leetcode.com/problems/max-consecutive-ones/

---

## Problem Description

Given a binary array `nums`, return *the maximum number of consecutive*`1`*'s in the array*.

**Example 1:**

```
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
```

**Example 2:**

```
Input: nums = [1,0,1,1,0,1]
Output: 2
```

**Constraints:**

- `1 <= nums.length <= 105`
- `nums[i]` is either `0` or `1`.

---

## Approach

We need to find the maximum number of consecutive `1`s in the array.

We use two variables:

- `ct` → stores the current number of consecutive `1`s.
- `mx` → stores the maximum number of consecutive `1`s found so far.

1. Traverse the array from left to right.

2. If the current element is `1`, increment `ct` because the current
   sequence of consecutive `1`s continues.

3. If the current element is `0`, the current sequence has ended.
   Compare `ct` with `mx` and update `mx` if necessary.
   Then reset `ct` to `0`.

4. After the loop, compare `ct` with `mx` one final time.

   This is necessary because if the array ends with `1`, the `else`
   block is never executed, so the final sequence of `1`s would not
   have been compared with `mx`.

5. Return `mx`.

For example:

`[1, 1, 0, 1, 1, 1]`

The consecutive counts are:

`2 → 3`

Therefore, the maximum number of consecutive `1`s is `3`.

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
