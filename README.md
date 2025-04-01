AIM : To generate an n × n magic square, where the sum of each row, column, and diagonal is the same
1. Start
2. Input: Read an integer n (size of the magic square).
3. place the numbers in the matrix(1 to n^2)
4. if the sum of all rows and all diagonals and all columns is same then matrix is magic square
5. OUTPUT : Input - Enter size (n x n): 3 Output - Magic Square: 8 1 6 3 5 7 4 9 2(it is a magic sqaure)

TIME COMPLEXITY : O(n²) SPACE COMPLEXITY : O(n²)
![image](https://github.com/user-attachments/assets/add58eef-fa69-4f48-924d-81b3bfe6772b)

6. 
7. 
AIM : To find a peak element in a 1D array, where a peak is an element that is greater than its neighbors. WORKING : 1. Start
2. Input: Read array size n and n elements.
3. Check Boundary Conditions:
- If first element is greater than the second, return index 0.
- If last element is greater than the second last, return index n-1.
4. Binary Search for Peak:
- Compute mid = (low + high) / 2.
- If arr[mid] is greater than both neighbors, return mid.
- If arr[mid] < arr[mid+1], search the right half.
- Else, search the left half.
5. Print Peak Element
6. Stop

OUTPUT : Input - Enter size: 6 Output - Peak element: 9 Enter elements: 1 2 6 9 5 12

TIME COMPLEXITY : O(log n) SPACE COMPLEXITY : O(1)

AIM : To find a peak element in a 2D array, where a peak is an element that is greater than or equal to its neighbors. WORKING : 1. Start
2. Input: Read the number of rows m and columns n, followed by the elements of the 2D array.
3. Recursive Search for Peak:
- Start by searching in the middle column (mid = (start_col + end_col) / 2).
- Find the maximum element in the middle column across all rows.
- If the middle element is greater than or equal to its neighbors (left and right), return the element as the peak.
4. Recursion based on neighbors:
- If the element to the right is greater, search the right half of the array (i.e., from mid + 1 to end_col).
- If the element to the left is greater, search the left half of the array (i.e., from start_col to mid - 1).
5. Print Peak Element
6. Stop

OUTPUT : Input - Enter size (m x n): 3 Output - Peak element: 8 Enter elements: 1 2 3 7 8 5 4 6 2

TIME COMPLEXITY : O(m log n), m = rows, n = cols SPACE COMPLEXITY : O(1)


AIM : To measure the execution time of Bubble Sort for varying array sizes and plot the complexity graph. WORKING : 1. Start
2. Input:
- The program generates arrays of sizes (2, 4, 8, 16, ..., 25000).
- For each size, the array is filled with elements in descending order.
3. Bubble Sort:
- For each array, the Bubble Sort algorithm is executed 100 times to ensure consistent timing.
- After each sort, the sorted array is discarded, and the next iteration is performed.
4. Measure Time:
- Use clock() to measure the time taken for each sorting operation.
- The time is recorded for 100 iterations, and the average time per sort is calculated.
5. Store Results:
- The array size is written to size.csv.
- The average time per sort is written to time.csv.
6. Output: The program outputs "done" after completing the measurements.
7. Stop

OUTPUT : Two CSV files are generated: - size.csv: Contains the array sizes for which the sort was performed. - time.csv: Contains the average time taken for each array size (in seconds).

TIME COMPLEXITY : O(n²) SPACE COMPLEXITY : O(1)
![image](https://github.com/user-attachments/assets/ca7e4f01-1b28-4348-a963-8656a8410d1d)


AIM : To measure the execution time of Insertion Sort for varying array sizes and plot the complexity graph. WORKING : 1. Start
2. Input:
- The program generates arrays of sizes (2, 4, 8, 16, ..., 25000).
- For each size, the array is filled with elements in descending order(worst case), ascending for best case.
3. Bubble Sort:
- For each array, the Insertion Sort algorithm is executed 100 times to ensure consistent timing.
- After each sort, the sorted array is discarded, and the next iteration is performed.
4. Measure Time:
- Use high_resolution_clock::now() to measure the time taken for each sorting operation.
- The time is recorded for 100 iterations, and the average time per sort is calculated duration_cast.
5. Store Results:
- The array size is written to size.csv.
- The average time per sort is written to time.csv.
6. Output: The program outputs "done" after completing the measurements.
7. Stop

OUTPUT : Two CSV files are generated: - size.csv: Contains the array sizes for which the sort was performed. - time.csv: Contains the average time taken for each array size (in seconds).

TIME COMPLEXITY : O(n²) - worst , O(n) - best SPACE COMPLEXITY : O(1)

![image](https://github.com/user-attachments/assets/2e2e243e-b766-4e2c-b39e-149a673b5e1c)


AIM : To measure the execution time of Selection Sort for varying array sizes and plot the complexity graph. WORKING : 1. Start
2. Input:
- The program generates arrays of sizes (2, 4, 8, 16, ..., 25000).
- For each size, the array is filled with elements in descending order.
3. Bubble Sort:
- For each array, the Selection Sort algorithm is executed 100 times to ensure consistent timing.
- After each sort, the sorted array is discarded, and the next iteration is performed.
4. Measure Time:
- Use clock() to measure the time taken for each sorting operation.
- The time is recorded for 100 iterations, and the average time per sort is calculated.
5. Store Results:
- The array size is written to size.csv.
- The average time per sort is written to time.csv.
6. Output: The program outputs "done" after completing the measurements.
7. Stop

OUTPUT : Two CSV files are generated: - size.csv: Contains the array sizes for which the sort was performed. - time.csv: Contains the average time taken for each array size (in seconds).

TIME COMPLEXITY : O(n²) SPACE COMPLEXITY : O(1)

![image](https://github.com/user-attachments/assets/37d34d16-76b4-41e1-880a-e1052ed66223)

AIM : To measure the execution time of Quick Sort for varying array sizes and output the results to CSV files.

WORKING : 1. Start
2. Input:
- The program generates arrays of sizes (13, 26, 52, 104, ..., 90000), where each array size is determined by the formula (n = n log(n)).
- For each size, the array is initialized with elements from 0 to (n-1).
3. Quick Sort Algorithm:
- The program executes Quick Sort 10 times for each array to ensure consistent timing.
- The partitioning step picks the first element as the pivot, and elements are rearranged such that elements less than the pivot are on the left, and elements greater than the pivot are on the right.
4. Measure Time:
- Use clock_t to measure the time taken for each sorting operation.
- The time is recorded for 10 iterations, and the average time is calculated using double(end - start) / CLOCKS_PER_SEC.
5. Store Results:
- The array size is written to size.csv.
- The average time taken for sorting each array is written to time.csv.
6. Output: The program outputs "done at end" after completing the measurements.
7. Stop

OUTPUT : Two CSV files are generated:
- size.csv: Contains the array sizes for which the sort was performed.
- time.csv: Contains the average time taken for sorting each array (in seconds).

TIME COMPLEXITY : - Best & Average Case: O(n log n) due to the divide-and-conquer nature of the algorithm.
- Worst Case: O(n²) when the pivot is always the smallest or largest element. SPACE COMPLEXITY : O(log n) for the recursion stack in the average case.
- ![image](https://github.com/user-attachments/assets/11174a4c-cb8a-4a2e-a080-b73332efbc98)

AIM : Write a program to find the maximum and minimum elements in an array using the divide and conquer approach.
WORKING : 1. Start
2. Input: Array arr[] of size n.
3. Initialize:
- maximum = INT_MIN
- minimum = INT_MAX
4. Recursive Function (max_min(arr, i, j, maximum, minimum)):
- Base Case 1: If i == j (only one element)
- Update maximum = max(maximum, arr[i])
- Update minimum = min(minimum, arr[i])
- Base Case 2: If i == j - 1 (two elements)
- Compare arr[i] and arr[j]
- Update maximum and minimum accordingly
- Recursive Case: If more than two elements
- Find middle index: mid = (i + j) / 2
- Recursively call for left half: max_min(arr, i, mid, maximum, minimum)
- Recursively call for right half: max_min(arr, mid + 1, j, max_right, min_right)
- Update global maximum and minimum:
- maximum = max(maximum, max_right)
- minimum = min(minimum, min_right)
5. Display Results: Show the maximum and minimum values.
6. Stop
  OUTPUT : Input size=8 Output - 6,3,4,11,16,2,15,7 Max : 16 Min : 2

TIME COMPLEXITY : O(n) SPACE COMPLEXITY : O(log n)



