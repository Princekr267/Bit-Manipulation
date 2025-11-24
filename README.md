# Bit Manipulation in C++

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Bits](https://img.shields.io/badge/Bit_Manipulation-Magic-purple?style=for-the-badge)
![Optimization](https://img.shields.io/badge/Performance-Optimized-red?style=for-the-badge)

Master bit manipulation with efficient algorithms and clever tricks for competitive programming and interviews.

---

## 🎯 Why Bits?

```
⚡ BLAZING FAST - Direct CPU operations
💾 SPACE EFFICIENT - Compact storage
🔥 INTERVIEW FAVORITE - Common in coding rounds
```

---

## 📚 What's Implemented

| 🎯 Operation | 📝 Description | 📄 File |
|-------------|---------------|---------|
| **Get Bit** | Check if ith bit is 0 or 1 | `getsetbit.cpp` |
| **Set Bit** | Set ith bit to 1 | `getsetbit.cpp` |
| **Clear Bit** | Set ith bit to 0 | `getsetbit.cpp` |
| **Update Bit** | Update ith bit to value | `getsetbit.cpp` |
| **Power of 2** | O(1) check | `getsetbit.cpp` |
| **Count Set Bits** | Count 1s in binary | `getsetbit.cpp` |
| **Fast Exponentiation** | O(log n) power | `getsetbit.cpp` |
| **Odd/Even** | O(1) parity check | `oddeven.cpp` |

---

## 🚀 Quick Start

```bash
g++ -std=c++11 getsetbit.cpp -o bits && ./bits
```

---

## 🔧 Bitwise Operators

```
┌──────────┬────────┬─────────────────────────┐
│ Operator │ Symbol │      Description        │
├──────────┼────────┼─────────────────────────┤
│   AND    │   &    │  Both bits = 1          │
│   OR     │   |    │  At least one = 1       │
│   XOR    │   ^    │  Bits are different     │
│   NOT    │   ~    │  Flip all bits          │
│ L-Shift  │   <<   │  Multiply by 2^n        │
│ R-Shift  │   >>   │  Divide by 2^n          │
└──────────┴────────┴─────────────────────────┘
```

---

## 📖 Operations Visualized

### Get ith Bit
```
Number: 6 → 0110
Get 2nd:    ↑
Result: 1

Steps: 1 << 2 → 0100 & 0110 = 0100 ✓
```

### Set ith Bit
```
5 → 0101
Set 1st → 0111 (7)

Steps: 0101 | 0010 = 0111 ✓
```

### Clear ith Bit
```
5 → 0101
Clear 2nd → 0001 (1)

Steps: 0101 & ~0100 = 0001 ✓
```

### Power of 2 Check
```
8 → 1000 (power of 2)
7 → 0111

8 & 7 = 0 → Power of 2! ✓

Magic: n & (n-1) removes rightmost 1
```

### Count Set Bits
```
11 → 1011
     ↑ ↑ ↑
Count = 3

Method: Check last bit, shift right, repeat
```

### Fast Exponentiation
```
3^5 = 3^(101 in binary)

Binary 101:
  ↑ ↑  (positions with 1)

3^5 = 3^4 × 3^1

Normal: O(n)  → 5 multiplications
Fast: O(log n) → 2 multiplications 🚀
```

---

## 🎯 Common Bit Tricks

```
┌────────────────────────┬─────────────────────┐
│      Operation         │       Trick         │
├────────────────────────┼─────────────────────┤
│ Check even/odd         │ n & 1               │
│ Multiply by 2^k        │ n << k              │
│ Divide by 2^k          │ n >> k              │
│ Check power of 2       │ n & (n-1) == 0      │
│ Toggle ith bit         │ n ^ (1 << i)        │
│ Turn off rightmost 1   │ n & (n-1)           │
│ Isolate rightmost 1    │ n & (-n)            │
│ Swap without temp      │ a^=b; b^=a; a^=b;   │
└────────────────────────┴─────────────────────┘
```

---

## 📊 Performance Comparison

| Operation | Normal | Bit Manipulation |
|-----------|--------|------------------|
| Odd/Even | O(1) | O(1) ✓ faster |
| Power of 2 | O(log n) | O(1) 🚀 |
| Multiply by 2^k | O(1) | O(1) ✓ CPU direct |
| Exponentiation | O(n) | O(log n) 🚀 |

---

## 💡 Key Patterns

### Single Bit Operations
```cpp
Get:    (n >> i) & 1
Set:    n | (1 << i)
Clear:  n & ~(1 << i)
Toggle: n ^ (1 << i)
```

### XOR Properties
```cpp
a ^ a = 0        // Cancel out
a ^ 0 = a        // Identity
a ^ b ^ a = b    // Find unique
```

---

## 🔥 Quick Reference

```
CHECK BIT:       (n >> i) & 1
SET BIT:         n | (1 << i)
CLEAR BIT:       n & ~(1 << i)
TOGGLE BIT:      n ^ (1 << i)
POWER OF 2:      !(n & (n-1))
RIGHTMOST 1:     n & (-n)
TURN OFF LAST 1: n & (n-1)
```

---

## 📁 File Guide

```
📂 Bit-Manipulation/
│
├─ 🔧 getsetbit.cpp ......... Core operations & algorithms
└─ 🎲 oddeven.cpp ........... Parity check example
```

---

## 🎓 Learning Path

```
1. BASICS    → oddeven.cpp (& operator)
      ↓
2. CORE      → Get/Set/Clear bits
      ↓
3. TRICKS    → Power of 2, count bits
      ↓
4. ADVANCED  → Fast exponentiation
```

---

## 💪 Best Practices

```
✅ Use << and >> for powers of 2
✅ Prefer bit ops for flags
✅ Remember precedence: & before ==
✅ Use XOR for finding unique elements
```

---

## ⚠️ Common Pitfalls

```
❌ Forgetting: (n & 1) needs parentheses with ==
❌ Shifting beyond int size
❌ Confusing & (bitwise) with && (logical)
```

---

## 🎮 LeetCode Problems

| Problem | # | Level |
|---------|---|-------|
| Number of 1 Bits | 191 | Easy |
| Power of Two | 231 | Easy |
| Single Number | 136 | Easy |
| Counting Bits | 338 | Easy |
| Reverse Bits | 190 | Easy |

---

## 📚 Resources

- 🎥 [Bit Manipulation Tutorial](https://www.youtube.com/results?search_query=bit+manipulation) - Videos
- 💻 [LeetCode Bits](https://leetcode.com/tag/bit-manipulation/) - Practice
- 📖 [Bit Hacks](https://graphics.stanford.edu/~seander/bithacks.html) - Stanford guide

---

## ⚡ Quick Wins

```
"Small bits, BIG impact! 
While others loop, you shift. 🚀"
```

---

## ⭐ Support

If this helped you, give it a star! 🌟

---

**Built with 💜 for competitive programming and interviews**
