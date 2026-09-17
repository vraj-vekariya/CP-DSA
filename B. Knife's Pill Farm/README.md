# B. Knife's Pill Farm

**Time Limit:** 1.5 seconds

**Memory Limit:** 256 megabytes

Mr. Knife has drafted `n` absurd posts for a channel on a chat platform. His goal is to farm pill emoji reactions. Unfortunately, the channel's pill-farming bot uses an unnecessarily elaborate scoring rule.

The drafts have absurdity ratings `a1, a2, ..., an`, which may be negative.

Mr. Knife must publish exactly `m` drafts in their original order. Their ratings form a **subsequence** `b` of `a` with length `m`.

His **pill score** starts at `0`.

When he publishes the `i`-th chosen draft, the bot changes his score by:

```text
i × (bi - bi-1)
```

where:

```text
b0 = 0
```

A negative change deducts points, and the score is allowed to become negative.

Thus, his final pill score is:

```text
Σ(i = 1 to m) i × (bi - bi-1)
```

What is the maximum pill score Mr. Knife can obtain by choosing which drafts to publish?

## Subsequence Definition

A sequence `a` is a subsequence of a sequence `b` if `a` can be obtained from `b` by deleting several (possibly zero or all) elements from arbitrary positions.

## Input

Each test contains multiple test cases.

The first line contains the number of test cases `t`:

```text
1 ≤ t ≤ 10^4
```

The description of the test cases follows.

For each test case, the first line contains two integers `n` and `m`:

```text
1 ≤ m ≤ n ≤ 2 × 10^5
```

where:

- `n` is the number of drafts.
- `m` is the number of drafts Mr. Knife must publish.

The second line contains `n` integers:

```text
a1, a2, ..., an
```

where:

```text
−10^7 ≤ ai ≤ 10^7
```

It is guaranteed that the sum of `n` over all test cases does not exceed:

```text
2 × 10^5
```

## Output

For each test case, print one integer — the maximum pill score Mr. Knife can obtain by publishing exactly `m` drafts in their original order.

## Example

### Input

```text
6
5 3
0 8 1 7 3
4 3
0 -4 10 -2
4 2
0 5 -2 4
6 3
0 9 8 7 6 5
1 1
7
3 2
5 -100 4
```

### Output

```text
20
34
10
15
7
108
```

## Note

In the first test case, Mr. Knife can publish the drafts with ratings:

```text
[0, 1, 7]
```

His final pill score is:

```text
1 × (0 − 0) + 2 × (1 − 0) + 3 × (7 − 1) = 20
```

In the second test case, he can publish the drafts with ratings:

```text
[0, −4, 10]
```

The second post deducts points, but the third post more than makes up for it:

```text
1 × (0 − 0) + 2 × (−4 − 0) + 3 × (10 − (−4)) = 34
```