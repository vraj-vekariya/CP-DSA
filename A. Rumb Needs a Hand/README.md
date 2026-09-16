# A. Rumb Needs a Hand

**Codeforces Problem:** A. Rumb Needs a Hand
**Rating:** —
**Topic:** Permutations, Simulation

## Problem Statement

You are given a permutation `p` of length `n`.

You must perform **exactly one operation**:

1. Choose any number of indices:
   `i1 < i2 < ... < im`
2. Reverse the elements at those selected indices.

The selected indices **do not need to be consecutive**.

For example:

```text
p = [1, 6, 3, 4, 5, 2]
```

If we choose indices:

```text
2, 4, 6
```

the selected elements are:

```text
[6, 4, 2]
```

After reversing them:

```text
[2, 4, 6]
```

the permutation becomes:

```text
[1, 2, 3, 4, 5, 6]
```

Determine whether it is possible to sort the permutation into increasing order using exactly one such operation.

## Input

The first line contains an integer `t`, the number of test cases.

For each test case:

* The first line contains an integer `n`.
* The second line contains a permutation `p` of length `n`.

### Constraints

```text
1 ≤ t ≤ 500
1 ≤ n ≤ 100
```

## Output

For each test case, print:

```text
YES
```

if the permutation can be sorted using exactly one operation.

Otherwise, print:

```text
NO
```

The answer is case-insensitive.

## Examples

### Input

```text
5
1
1
4
4 2 3 1
4
3 4 1 2
5
2 1 3 5 4
6
1 6 3 4 5 2
```

### Output

```text
YES
YES
NO
NO
YES
```

## Key Observation

The operation only reverses the elements at the selected positions.

For the final array to become sorted, every element that is already in its correct position can be left unselected.

The elements that are in the wrong positions must be selected in such a way that reversing their values puts every element into its correct position.

Therefore, we can check whether the permutation can be transformed into the sorted permutation by reversing a suitable subsequence of positions.

## Approach

A direct way to think about the operation is:

* Compare `p` with the sorted permutation.
* Find the positions where they differ.
* These positions are the only ones that need to participate in the reversal.
* Check whether reversing the elements at those positions makes the permutation sorted.

Because `n ≤ 100`, an `O(n²)` solution is easily fast enough.

## Complexity

For each test case:

```text
Time:  O(n²)
Space: O(n)
```

## Solution

The C++ implementation is available in:

[`solution.cpp`](solution.cpp)

## Original Problem

[Codeforces — A. Rumb Needs a Hand](https://codeforces.com/)
