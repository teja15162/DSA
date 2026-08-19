# 169. Majority Element

![Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

---

## Topics

- Array
- Hash Table
- Divide and Conquer
- Sorting
- Counting
- Boyer–Moore Majority Vote Algorithm

---

## Problem Link

https://leetcode.com/problems/majority-element/

---

## Problem Description

Given an array `nums` of size `n`, return *the majority element*.

The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

**Example 1:**

```
Input: nums = [3,2,3]
Output: 3
```

**Example 2:**

```
Input: nums = [2,2,1,1,1,2,2]
Output: 2
```

**Constraints:**

- `n == nums.length`
- `1 <= n <= 5 * 104`
- `-109 <= nums[i] <= 109`
- The input is generated such that a majority element will exist in the array.

**Follow-up:** Could you solve the problem in linear time and in `O(1)` space?

---

## Approach

A majority element is an element that appears more than `n/2` times
in the array.

We use Moore's Voting Algorithm to find the majority element in
`O(n)` time and `O(1)` extra space.

The main idea is that the majority element appears more times than all
other elements combined.

We maintain two variables:

- `cad` → current candidate for the majority element.
- `vote` → number of votes currently supporting the candidate.

1. Traverse the array element by element.

2. If `vote == 0`, choose the current element as the new candidate.

3. If the current element is equal to the candidate, increase `vote`
   because it supports the candidate.

4. Otherwise, decrease `vote` because the current element cancels out
   one vote of the candidate.

5. Continue this process until the entire array is traversed.

6. The remaining candidate is the majority element.

### Why does this work?

Think of every different element as cancelling one occurrence of the
candidate.

Since the majority element occurs more than `n/2` times, it cannot be
completely cancelled by all the other elements.

Therefore, the final candidate must be the majority element.

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
