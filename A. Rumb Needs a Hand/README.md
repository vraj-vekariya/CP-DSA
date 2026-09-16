# A. Rumb Needs a Hand

**Time Limit:** 1 second

**Memory Limit:** 256 megabytes

Mr. Rumb visits a prosthetist because his arms have gone numb. The prosthetist can assemble replacements, but their numbered components are out of order. Apparently, even getting a helping hand requires some assembly.

Formally, the labels on the components form a **permutation** `p` of length `n`.

Mr. Rumb can program a machine to perform the following operation **exactly once**:

- Choose an integer `m` (`1 ≤ m ≤ n`) and indices `i1 < i2 < ... < im`.
- Reverse the elements of `p` at the chosen indices.

More precisely, for every `j` from `1` to `m`, the element at index `ij` moves to index `im-j+1`. All other elements remain unchanged.

The chosen indices do not have to be consecutive.

For example, suppose:

```text
p = [1, 6, 3, 4, 5, 2]
```

If you choose indices `2, 4, 6`, the selected elements are:

```text
[6, 4, 2]
```

After reversing them, `p` becomes:

```text
[1, 2, 3, 4, 5, 6]
```

Determine whether Mr. Rumb can sort `p` in increasing order.

## Permutation Definition

A permutation of length `n` is an array consisting of `n` distinct integers from `1` to `n` in arbitrary order.

For example:

- `[2, 3, 1, 5, 4]` is a permutation.
- `[1, 2, 2]` is not a permutation because `2` appears twice.
- `[1, 3, 4]` is not a permutation because `n = 3` but the array contains `4`.

## Input

Each test contains multiple test cases.

The first line contains the number of test cases `t` (`1 ≤ t ≤ 500`).

The description of the test cases follows.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 100`).

The second line contains a permutation `p1, p2, ..., pn` of the integers from `1` to `n`.

## Output

For each test case, output `YES` if it is possible to sort `p` in increasing order after performing exactly one operation. Otherwise, output `NO`.

You can output the answer in any case (upper or lower). For example, the strings `yEs`, `yes`, `Yes`, and `YES` will all be recognized as positive answers.

## Example

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

## Note

In the first test case, choose the only index. Reversing a single element does not change the permutation, so the requirement to perform exactly one operation is satisfied.

In the second test case, choose indices `1` and `4`. The resulting permutation is:

```text
[1, 2, 3, 4]
```

In the fifth test case, choose indices `2`, `4`, and `6`. Notice that the chosen indices are not consecutive.