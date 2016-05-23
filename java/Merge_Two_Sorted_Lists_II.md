Given two sorted integer arrays A and B, merge B into A as one sorted array.

>####Note: You have to modify the array A to contain the merge of A and B. Do not output anything in your code.
>###TIP: C users, please malloc the result into a new array and return the result.

If the number of elements initialized in A and B are `m` and `n` respectively, the resulting size of array A after your code is executed should be `m + n`

####Example
Input :
         A : [1 5 8]
         B : [6 9]

Modified A : [1 5 6 8 9]


### Solution:
The idea behind the solution is to maintain to pointers, each pointing to the beginning of both arrays. While there are still elements in the second array, smaller than to current element being pointed to by the pointer of the first array, insert the element before the position of the pointer. Next we update the two pointers accordingly. See the code below.

<pre><code>
public class Solution {
	public void merge(ArrayList<Integer> a, ArrayList<Integer> b) {
	    int x = 0;
	    int y = 0;

	    while(x < a.size() && y < b.size()){
	        if(a.get(x) >= b.get(y)){
	            a.add(x, b.get(y));
	            y++;
	        }else{
	            x++;
	        }
	    }

	    if(x == a.size() && y < b.size()){
	        while(y< b.size()){
	            a.add(b.get(y));
	            y++;
	        }
	    }

	}
}
</code></pre>
