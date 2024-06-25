//gfg - https://www.geeksforgeeks.org/problems/rotation4723/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotation

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int left = 0 , right = n-1 , minElement = INT_MAX, index = -1;
	    
	    while(left<=right){
	        int mid = (left+right)/2 ;
	        //identify the sorted array 
	        if(arr[left] <= arr[mid]){
	            if(arr[left] < minElement){
	                minElement = arr[left];
	                index = left;
	            }
	            left = mid+1;
	        }
	        else{
	            if(arr[mid]<minElement){
	                minElement = arr[mid];
	                index = mid;
	            }
	            right = mid -1;
	        }
	    }
	    return index;
	}

};
