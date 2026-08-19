# 53. Maximum Subarray

![Medium](https://img.shields.io/badge/Difficulty-Medium-orange)

---

## Topics

- Array
- Divide and Conquer
- Dynamic Programming

---

## Problem Link

https://leetcode.com/problems/maximum-subarray/

---

## Problem Description

Given an integer array `nums`, find the subarray with the largest sum, and return *its sum*.

**Example 1:**

```
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
```

**Example 2:**

```
Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
```

**Example 3:**

```
Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
```

**Constraints:**

- `1 <= nums.length <= 105`
- `-104 <= nums[i] <= 104`

**Follow up:** If you have figured out the `O(n)` solution, try coding another solution using the **divide and conquer** approach, which is more subtle.

---

## Approach

We need to find the contiguous subarray with the maximum possible sum.

We use Kadane's Algorithm.

We maintain two variables:

- `sum` → stores the sum of the current subarray.
- `ans` → stores the maximum subarray sum found so far.

1. Traverse the array from left to right.

2. Add the current element to `sum`.

3. Update `ans` with the maximum of `ans` and `sum`.

4. If `sum` becomes negative, reset it to `0`.

   A negative-sum subarray can never help a future subarray achieve a
   larger sum. Therefore, we discard it and start a new subarray from
   the next element.

5. After traversing the entire array, `ans` contains the maximum
   possible subarray sum.

For example:

`nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]`

The maximum-sum subarray is:

`[4, -1, 2, 1]`

and its sum is:

`6`

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
