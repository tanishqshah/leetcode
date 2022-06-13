# Value equal to index value
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>Arr</strong> of <strong>N</strong> positive integers. Your task is to find the elements whose value is equal to that of its index value (&nbsp;Consider 1-based indexing ).</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>N = 5
Arr[] = {15, 2, 45, 12, 7}
<strong>Output:</strong> 2
<strong>Explanation:</strong> Only Arr[2] = 2 exists here.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
N = 1
Arr[] = {1}
<strong>Output:</strong> 1
<strong>Explanation:</strong> Here Arr[1] = 1 exists.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>valueEqualToIndex()</strong>&nbsp;which takes the array of integers&nbsp;<strong>arr[]</strong><strong>&nbsp;</strong>and<strong>&nbsp;n&nbsp;</strong>as parameters and returns an array of indices where the given conditions are satified. When there is not such element exists then return an empty array of length 0.<br>
<br>
<strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)<br>
<strong>Note</strong>: There can be more than one element in the array which have same value as their index. You need to include every such element's index.&nbsp;Follows 1-based&nbsp;indexing of the array. </span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ Arr[i] ≤ 10<sup>6</sup></span></p>

<p>&nbsp;</p>
 <p></p>
            </div>