int findUnsortedSubarray(int arr[],int n){
    int curr, prev, arr2[100];
     for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    for(int i=1;i<n;i++){
        curr=arr2[i];
        prev=i-1;
        while(prev >=0 && arr2[prev] > curr){
            arr2[prev + 1] = arr2[prev];
            --prev;
        }
        arr2[prev+1]=curr;
    }
    
    int start=-1;
    int end=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr2[i]){
                start=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=arr2[i]){
            end=i;
            break;
        }
    }
    if(start==-1 && end==-1){
        return 0;
    }
    int ans=end-start+1;
    return ans;

}