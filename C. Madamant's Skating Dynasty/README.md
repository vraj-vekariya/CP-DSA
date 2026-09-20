# C. Madamant's Skating Dynasty

**Time Limit:** 2 seconds

**Memory Limit:** 256 megabytes

Madam Madamant is expecting a baby and already planning a skating dynasty in which every parent is a stronger skater than their children.

Formally, Madamant has `n` labeled skaters. Skater `v` has an integer rating `av`, and all ratings are pairwise distinct.

A possible dynasty is represented by a rooted tree on these skaters.

Let `r` be the root of the tree. For every skater `v ≠ r`, let `pv` be the parent of `v`.

The dynasty is **valid** if:

```text
av < apv
```

for every `v ≠ r`.

The cost of a valid dynasty is:

```text
Σ(apv − av)
```

over all `v ≠ r`.

Two dynasties are different if:

- their roots are different, or
- the parent of at least one skater is different.

Find the sum of the costs of all valid dynasties Madamant can form, modulo `998244353`.

## Input

Each test contains multiple test cases.

The first line contains the number of test cases `t`:

```text
1 ≤ t ≤ 10^4
```

The description of the test cases follows.

The first line of each test case contains a single integer `n`:

```text
1 ≤ n ≤ 2 × 10^5
```

The second line contains `n` integers:

```text
a1, a2, ..., an
```

where:

```text
1 ≤ ai ≤ 10^9
```

All `ai` are pairwise distinct.

It is guaranteed that the sum of `n` over all test cases does not exceed:

```text
2 × 10^5
```

## Output

For each test case, print one integer — the sum of the costs of all valid dynasties, modulo `998244353`.

## Example

### Input

```text
5
1
10
3
1 2 3
4
4 1 3 2
2
1 1000000000
5
2 7 1 10 4
```

### Output

```text
0
5
27
1755646
414
```

## Note

In the second test case, the skater with rating `3` must be the root.

The parent of the skater with rating `2` must be the skater with rating `3`, while the skater with rating `1` can choose either of the other skaters as their parent.

The two valid dynasties have costs `2` and `3`, so the answer is:

```text
5
```

In the fourth test case, there is only one valid dynasty.

Its cost is:

```text
10^9 − 1 = 999999999
```

whose remainder modulo `998244353` is:

```text
1755646
```