

void selectionSort(vector<int>& arr,int n){

    for (int i=0;i<n-1;i++){
        int minIndex =i;
        for(int j=i+1; j<n;j++){
            if(arr[]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[minIndex],arr[i]);

    }
}
// 2,4,9,12,5,6= 2 4 5 6 9 12 (output).