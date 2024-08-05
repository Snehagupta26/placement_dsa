using namespace std;
int length(char name[]){
        int i = 0 ;
        int count = 0 ;
        while(name[i] != '\0'){
            i++;
            count++;
        }
        return count;
}