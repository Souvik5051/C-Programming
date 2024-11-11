#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=(s+e)/2;
    while(s<e){
        if(mid+1<arr.size() && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(mid-1>=0 && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        //Left case handle
        if(arr[s]>=arr[mid]){
            e=mid-1;
        }
        //Right case handle
        if(arr[s]<arr[mid]){
            s=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}

int binary(vector<int>arr,int target,int start,int end)
{

    int mid = (start + end) / 2;

    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
        { // If element found then return index
            return mid;
        }

        if (target < element)
        {
            // Search in left
            end = mid - 1;
        }

        else
        {
            // Search in right
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    // Element not found
    return -1;
}

int search(vector<int>nums,int target){
    int pivotIndex=findPivot(nums);

    if(target>=nums[0] && target<=nums[pivotIndex]){
        int ans=binary(nums,target,0,pivotIndex);
        return ans;
    }
    //Search in array A
    if(pivotIndex+1<nums.size() && target>=nums[pivotIndex+1] && target<=nums[nums.size()-1]){
        int ans=binary(nums,target,pivotIndex+1,nums.size()-1);
        return ans;
    }
    //Search in array B
    return -1;
}
int main(){
    vector<int>arr{4,5,6,7,0,1,2,3};
    int target=2;
    int ans=search(arr,target);
    cout<<"Pivot element is "<<ans;
    return 0;
}