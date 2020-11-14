//The odd magic square consists of consecutive integers (starting with 1 and ending with n²) placed intonrows by n columns.

The sum of each row, each column and each diagonal are the same.

Hint:

Place number 1 in the middle of first row.

Check if the upper right grid is empty:

if empty: fill the next number in this upper right grid

if not empty: fill the next number in the bottom of current grid

Check if the last step exceeds the boundary, you need to return to the other side.

You can see the following example to understand the process !

奇數魔方陣是指在nxn的方陣中，放入從1開始到n^2的連續數字。

使每一行、每一列與每條對角線的和皆相同。

提示:

首先在第一列的最中間那個方格填入1。

接著檢查該方格的右上方是否為空的:

如果是空的: 將下個數字填入右上方的方格

如果不是空的: 將下個數字填入當前方格的正下面那格

如果在上一步會超出邊界，則需要返回另一邊

你可以看下方的範例來了解過程!

For example:n = 3

step1:

0 1 0

0 0 0

0 0 0

step2:

0 1 0

0 0 0

0 0 2

step3:

0 1 0

3 0 0

0 0 2

step4:

0 1 0

3 0 0

4 0 2

Finally, after 9 steps:

8 1 6

3 5 7

4 9 2