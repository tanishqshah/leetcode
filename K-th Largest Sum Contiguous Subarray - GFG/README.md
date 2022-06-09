# K-th Largest Sum Contiguous Subarray
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given an array <strong>Arr</strong> of size <strong>N</strong>. You have to find the <strong>K</strong>-th <strong>largest</strong> sum of contiguous <strong>subarray</strong> within the array elements.</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong><strong><span style="font-size:18px">
</span></strong><span style="font-size:18px">N = 3
K = 2
Arr = {3,2,1}</span><strong><span style="font-size:18px">
Output:
</span></strong><span style="font-size:18px">5</span><strong><span style="font-size:18px">
Explanation:
</span></strong><span style="font-size:18px">The different subarray sums we can get from the array
are = {6,5,3,2,1}. Where 5 is the 2nd largest.</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong><strong><span style="font-size:18px">
</span></strong><span style="font-size:18px">N = 4
K = 3
Arr = {2,6,4,1}</span><strong><span style="font-size:18px">
Output:
</span></strong><span style="font-size:18px">11</span><strong><span style="font-size:18px">
Explanation:
</span></strong><span style="font-size:18px">The different subarray sums we can get from the array
are = {13,12,11,10,8,6,5,4,2,1}. Where 11 is the 3rd </span><span style="font-size:18px">largest.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>kthLargest()</strong>&nbsp;which takes the array&nbsp;<strong>Arr[]</strong>&nbsp;and its size <strong>N&nbsp;</strong>as inputs and returns the Kth largest subarray sum.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N<sup>2</sup>&nbsp;* log K)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(K)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 &lt;= N&nbsp;&lt;= 100<br>
1 &lt;= K &lt;= (N*(N+1))/2</span><br>
<span style="font-size:18px">-10<sup>5</sup> &lt;= Arr[i] &lt;= 10<sup>5</sup></span><br>
<span style="font-size:18px">Sum of N over all test cases doesn't exceed&nbsp;1000.</span><br>
<span style="font-size:18px">Array may contain duplicate elements.</span></p>
 <p></p>
            </div>