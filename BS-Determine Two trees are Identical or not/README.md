<h1 align="center">DSA Topic-Binary Tree</h1>
<h2 align="center"><a href="https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article">Determine two Tree are Identical or not</a></h2>
<hr>
<h2 align="center">GFG-Easy</h2>
<h3><em>Time Complexcity - </em><strong>O(N)</strong></h3>
<h4>We are traversing each node.</h4>
<h3><em>Space Complexcity - </em><strong>O(N)/O(log(n))</strong></h3>
<h4>Recursive stack space. Best case (balance tree- O(N)) Worst Case-(skewed tree- O(Nlog(n)))</h4>
<hr>
<h2 align="center">Approach</h2>
<h4>Recursive appoach.</h4>
<h4>Base case - If root1==0 and root2==0 return true. else if root of one tree is null and root od the other tree is not null return false. else if check root->data of both the tree are same or not ,if not same return false.</h4>
<h4>Make recursive call as specified in the code.</h4>
