//coding ninja
int findUnique(int *arr, int size)
{
    //Write your code here
   int ans;

    for(int i = 0 ; i < size ; i++){
         int count = 0;
         for(int j = 0 ; j < size ; j++){
             if(arr[i] == arr[j]){
                 count++;
             }
         }
         if(count == 1){
            return arr[i];
         }
    } 
   
  
}