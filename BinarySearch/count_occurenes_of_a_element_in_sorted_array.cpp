// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int getLeftMost(int arr[] , int n , int x){
	    int left_most = -1;
	    int left = 0 , right = n-1;
	    while(left<=right){
	        int mid = (left+right)/2;
	        if(arr[mid] == x){
	            left_most = mid;
	            right = mid-1;
	        }
	        else if(arr[mid]>x){
	            right = mid-1;
	        }
	        else{
	            left =mid+1;
	        }
	    }
	    return left_most;
	}
	int getRightMost(int arr[] , int n , int x){
	    int right_most = -1;
	    int left = 0 , right = n-1;
	    while(left<=right){
	        int mid = (left+right)/2;
	        if(arr[mid] == x){
	            right_most = mid;
	            left = mid+1;
	        }
	        else if(arr[mid]>x){
	            right = mid-1;
	        }
	        else{
	            left =mid+1;
	        }
	    }
	    return right_most;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    int left_most = getLeftMost(arr, n , x); 
	    int right_most = getRightMost(arr, n , x);
	    int result = 0; 
	    if(left_most==-1){
	        result = 0 ; 
	    }
	    else{
	        result = right_most-left_most+1;
	    }
	    return result ;
	}
};
