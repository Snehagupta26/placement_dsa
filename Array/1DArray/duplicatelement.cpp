//coding ninja
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n = arr.size();
    
    for(int i = 0 ; i < n ;i++ ){
        int count = 0;
        for(int j = 0 ; j < n ; j++){
              if(arr[i] == arr[j]){
                  count++;
              }
        }
        if(count > 1){
            return arr[i];
        }
    }
	
}
