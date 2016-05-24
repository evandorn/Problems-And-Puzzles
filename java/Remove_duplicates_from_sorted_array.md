#Remove duplicates from Sorted Array
Given a sorted array, remove the duplicates in place such that each element appears only once and return the new length.

Note that even though we want you to return the new length, make sure to change the original array as well in place

Do not allocate extra space for another array, you must do this in place with constant memory.


######Example: 
Given input array A = [1,1,2],
Your function should return length = 2, and A is now [1,2].

#####Solution
Our solution approach is to keep 2 pointers. The first pointing to a.size -1 and second pointing to one less than the index
of the first. We compare elements at both index and delete accordingly. Note that we start from the end of the list since
this is more efficient for deleting from an arraylist in Java. It is possible to make a sweep through the array starting from the beginning. However, this will lead to a quadratic runtime. Since for every deletion, all subsequent elements are shifted to the left.
See implemeentation below.
<pre>
<code>
public class Solution {
	public int removeDuplicates(ArrayList<Integer> a) {
	    int j = a.size() - 1;
	    int i = j - 1;
	    
	    while(i>=0){
	        if((int)a.get(i) == (int)a.get(j)){
	            Integer k = a.remove(j);
	        }
	        i--;
	        j--;
	    }
	    
	    return a.size();
	}
}
</code>
</pre>
