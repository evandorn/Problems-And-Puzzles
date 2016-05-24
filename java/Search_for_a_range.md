###Search for a range
Given a sorted array of integers, find the starting and ending position of a given target value.

Your algorithm’s runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

Example:

Given [5, 7, 7, 8, 8, 10]

and target value 8,

return [3, 4].

######Solution Approach.
The obvious solution is to do a linear search while keeping track of the beginning and end of the range. Since our interviewer wants something better,
we will try to achieve logarithmic time. Our idea is to do 2 binary search. The first time, we find the first index and the second time we find the last index.
See implementation below.


<pre>
<code>
public class Solution {
	public ArrayList<Integer> searchRange(final List<Integer> a, int b) {
	    ArrayList<Integer> out = new ArrayList();
	    
	    out.add(bsearch(a,b,true));
	    out.add(bsearch(a,b,false));
	    
	    return out;
	}
	
	private int bsearch(List<Integer> a,int target, boolean findFirst){
	    int lo =0;
	    int hi = a.size() -1;
	    int idx = -1;
	    while(lo <=hi){
	        int mid = lo + (hi -lo)/2;
	        if(a.get(mid) == target){
	            idx = mid;
	            if(findFirst){
	                hi = mid - 1;
	            }else{
	                lo = mid + 1;
	            }
	            
	        }else if(target > a.get(mid)){
	            lo = mid+1;
	        }else{
	            hi = mid -1;
	        }
	    }
	    
	    return idx;
	}
}
</code>
</pre>
