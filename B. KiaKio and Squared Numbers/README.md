# B. KiaKio and Squared Numbers

**Time Limit:** 1 second

**Memory Limit:** 256 megabytes

Kia and Kio spent the summer at the port of Mehragan, where `n` lighthouses stand on the cliffs facing the dark sea.

The lighthouses of Mehragan do not give light. Every night a **number** is written in fire on each of them, and the sailors read their way from those numbers.

The law of the lighthouses is this: if a lighthouse shows `x` tonight, then tomorrow night it shows the **sum of the squares of the decimal digits** of `x`.

For example, a lighthouse showing `23` will show:

```text
2² + 3² = 13
```

tomorrow, then:

```text
1² + 3² = 10
```

and then:

```text
1² = 1
```

On night `0` of the season, lighthouse `i` shows the number `ai`. From that night on, the law is applied once every night, forever.

Kio calls two lighthouses `i` and `j` **in tune** if there exists a night after which, forever, both of them show exactly the same number on every single night.

Kia asks: how many pairs `(i, j)` with `i < j` are in tune?

## Input

Each test contains multiple test cases.

The first line contains the number of test cases `t`:

```text
1 ≤ t ≤ 1000
```

The description of the test cases follows.

Each test case consists of two lines.

The first line of each test case contains a single integer `n`:

```text
1 ≤ n ≤ 1000
```

The second line contains `n` integers:

```text
a1, a2, ..., an
```

where:

```text
1 ≤ ai ≤ 10^9
```

It is guaranteed that the sum of `n` over all test cases does not exceed `1000`.

## Output

For each test case, print a single integer — the number of pairs `(i, j)` with `i < j` such that lighthouses `i` and `j` are in tune.

## Example

### Input

```text
4
5
7 4 16 4 2
4
1 7 10 100
3
4 16 37
3
2 20 4
```

### Output

```text
1
6
0
1
```

## Note

In the first test case:

- Lighthouse `1` starts at `7`:

```text
7 → 49 → 97 → 130 → 10 → 1
```

and it stays at `1` forever.

- Lighthouses `2` and `4` both start at `4`, so they show the same number on every night.

- Lighthouse `3` starts at `16` and lighthouse `5` starts at `2`; each of them is at a different point of the cycle Kio found, and never matches anybody.

So the only pair in tune is `(2, 4)`, and the answer is:

```text
1
```

In the second test case, every lighthouse sooner or later reaches `1` and stays there, so all of them are pairwise in tune.

There are:

```text
4 × 3 / 2 = 6
```

pairs.

In the fourth test case, on night `1`:

- Lighthouse `2` shows:

```text
2² + 0² = 4
```

- Lighthouse `1` shows:

```text
2² = 4
```

From night `1` on, they are identical forever.

Lighthouse `3` starts at `4`, so it is one night ahead of both of them and is in tune with neither.