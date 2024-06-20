# Insertion Sort List

LeetCode Q # 147.

Given the head of a singly linked list, sort the list using insertion sort, and return the sorted list's head.
The steps of the insertion sort algorithm:

Insertion sort iterates, consuming one input element each repetition and growing a sorted output list.
At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list and inserts it there.
It repeats until no input elements remain.
The following is a graphical example of the insertion sort algorithm. The partially sorted list (black) initially contains only the first element in the list. One element (red) is removed from the input data and inserted in-place into the sorted list with each iteration.

<div align = "center">

  ![image](https://github.com/xo-azeem/Insertion-Sort-List-LeetCode/assets/171427226/ac1c7d3e-a49a-41ac-a6a5-0f8c2ca71fcd)

</div>

Example 1:

<div align = "center">

  ![image](https://github.com/xo-azeem/Insertion-Sort-List-LeetCode/assets/171427226/da12df62-a3ff-44d6-8369-1ee03be7ebc8)

</div>

>Input: head = [4,2,1,3]</br>
>Output: [1,2,3,4]

Example 2:

<div align = "center">

  ![image](https://github.com/xo-azeem/Insertion-Sort-List-LeetCode/assets/171427226/db8e3ea9-94f9-4d3c-9a8e-479e9d2ada1e)

</div>

>Input: head = [-1,5,3,4,0]</br>
>Output: [-1,0,3,4,5]

My Solution Analysis:

<div align = "center">

  ![image](https://github.com/xo-azeem/Insertion-Sort-List-LeetCode/assets/171427226/9f39923e-2fce-4d0b-a0fe-1125afa778d0)

  Time complexity: O(n^2).</br>Space complexity: O(1).
</div>
