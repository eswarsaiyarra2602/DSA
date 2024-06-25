//coding ninjas  -  https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int floor = -1 ; 
	int ceil = -1;
	int left = 0 , right = n-1;
	while(left<=right){
		int mid = (left+right)/2 ;
		if(a[mid]==x){
			return {a[mid], a[mid]};
		}
		else if(a[mid]<x){
			floor = a[mid];
			left=mid+1;
		}
		else{
			right = mid-1;
			ceil = a[mid];
		}
	}
	return {floor,ceil};
}
