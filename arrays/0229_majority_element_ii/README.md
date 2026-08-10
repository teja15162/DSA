# 229. Majority Element II

![Medium](https://img.shields.io/badge/Difficulty-Medium-orange)

---

## Topics

- Array
- Hash Table
- Sorting
- Counting
- Boyer–Moore Majority Vote Algorithm

---

## Problem Link

https://leetcode.com/problems/majority-element-ii/

---

## Problem Description

Given an integer array of size `n`, find all elements that appear more than `⌊n / 3⌋` times.

**Example 1:**

```
Input: nums = [3,2,3]
Output: [3]
```

**Example 2:**

```
Input: nums = [1]
Output: [1]
```

**Example 3:**

```
Input: nums = [1,2]
Output: [1,2]
```

**Constraints:**

- `1 <= nums.length <= 5 * 104`
- `-109 <= nums[i] <= 109`

**Follow up:** Could you solve the problem in linear time and in `O(1)` space?

---

## Approach

### Approach — Extended Moore's Voting Algorithm

* For elements appearing more than `N/3` times, there can be **at most 2 majority elements**.
* Therefore, maintain **2 candidates** and their respective counts.
* Traverse the array:

  * If the current element matches `candidate1`, increase `count1`.
  * Else if it matches `candidate2`, increase `count2`.
  * Else if `count1` is `0`, make the current element `candidate1`.
  * Else if `count2` is `0`, make the current element `candidate2`.
  * Otherwise, decrease both counts because the current element cancels out one occurrence of both candidates.
* After finding the two possible candidates, traverse the array again to **verify their actual frequencies**.
* Add a candidate to the answer only if its frequency is greater than `N/3`.

**Time Complexity:** O(N)

**Space Complexity:** O(1)

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
