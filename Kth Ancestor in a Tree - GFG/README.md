# Kth Ancestor in a Tree
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a binary tree of size&nbsp; <strong>N</strong>,&nbsp;a <strong>node</strong> and a positive integer <strong>k</strong>., Your task is to complete the function <strong>kthAncestor()</strong>, the function should return the <strong>kth</strong> ancestor of the given node in the binary tree. If there does not exist any such ancestor then return&nbsp;-1.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px">
<img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/reverse.jpg" style="height:230px; width:287px" class="img-responsive">
<strong>Input:</strong>
     K = 2
     Node = 4
<strong>Output:</strong> 1
<strong>Explanation:</strong>
Since, K is 2 and node is 4, so we
first need to locate the node and
look k times its ancestors.
Here in this Case node 4 has 1 as his
2nd Ancestor aka the Root of the tree.</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
k=1 </span>
<span style="font-size:18px">node=3
      1
    /   \</span>
    <span style="font-size:18px">2     3</span>

<span style="font-size:18px"><strong>Output:</strong>
1
<strong>Explanation:
</strong>K=1 and node=3 ,Kth ancestor of node 3 is 1.</span>

</pre>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=10<sup>4</sup><br>
1&lt;= K &lt;= 100</span></p>
 <p></p>
            </div>