# 1. Two Sum

![Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

---

## Topics

- Array
- Hash Table

---

## Problem Link

https://leetcode.com/problems/two-sum/

---

## Problem Description

You are given an array of integers `nums` and an integer `target`, return *indices of the two numbers such that they add up to `target`*.

You may assume that each input would have ***exactly* one solution**, and you may not use the *same* element twice.

You can return the answer in any order.

**Example 1:**

```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

**Example 2:**

```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

**Example 3:**

```
Input: nums = [3,3], target = 6
Output: [0,1]
```

**Constraints:**

- `2 <= nums.length <= 104`
- `-109 <= nums[i] <= 109`
- `-109 <= target <= 109`
- **Only one valid answer exists.**

**Follow-up:**Can you come up with an algorithm that is less than `O(n2)` time complexity?

---

## Approach

We need to find two different indices whose corresponding values add
up to `target`.

Instead of checking every possible pair, we use an `unordered_map`
to store each number along with its index.

1. Create an `unordered_map` `mp` where:
   - key → element value
   - value → index of that element

2. Traverse the array once and store every element and its index in
   the map.

3. Traverse the array again. For every `nums[i]`, calculate the value
   required to reach the target:

   `want = target - nums[i]`

4. Check whether `want` exists in the map.

5. If it exists and its index is different from `i`, then we have
   found the required pair, so return both indices.

6. If no valid pair is found, return `{-1, -1}`.

For example:

`nums = [2, 7, 11, 15]`
`target = 9`

For `nums[0] = 2`:

`want = 9 - 2 = 7`

`7` exists in the map at index `1`, so we return:

`[0, 1]`

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
