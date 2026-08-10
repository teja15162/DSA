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

### Approach — Hash Map

* Use an `unordered_map` to store the **frequency of each element**.
* The required frequency is **more than `n/3`**, so calculate:  `tar = (n/3) + 1`.
* Traverse the array and increase the frequency of each element in the map.
* Whenever the frequency of an element becomes exactly `tar`, add that element to the answer.
* We check `== tar` instead of `> tar` because once an element reaches `tar`, it already satisfies the condition, and we don't want to add it multiple times.
* Since at most **2 elements** can appear more than `n/3` times, the answer will contain at most 2 elements.

**Time Complexity:** O(N) average
**Space Complexity:** O(N)

This is better than the brute-force approach, but it is **not space-optimal** because we use an `unordered_map`.

---

## Complexity

| Metric | Value |
|---------|-------|
| Time | O(N) |
| Space | O(N) |

---

## Solution

See:

`solution.cpp`

---

Generated using **PushCode**
