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

Step 1 — Count frequencies

Use an unordered_map:

unordered_map<int, int> mp;

Traverse the array and count each element:

for (int x : nums) {
    mp[x]++;
}

For example:

nums = [3, 2, 3]

mp:
3 → 2
2 → 1

Step 2 — Calculate the target frequency
int tar = nums.size() / 3;

We need elements whose frequency is strictly greater than n/3.

For n = 6:

n/3 = 2

So frequency must be > 2

Step 3 — Traverse the map

Check every element's frequency:

for (auto x : mp) {
    if (x.second > tar) {
        ans.push_back(x.first);
    }
}

Here:

x.first → element
x.second → frequency

Step 4 — Return the answer
return ans;

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
