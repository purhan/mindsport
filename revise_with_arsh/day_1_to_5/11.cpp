// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        sort(arr,arr+n);
        int *ans= new int[2];
        ans[0]=0;
        ans[1]=0;
        int i, idx=0;

        for(i=1;i<n;i++) {
            if(arr[i]==arr[i-1]) {
                ans[0]=arr[i];
                arr[i]=0;
          }
        }
        i=1;

        while(i<=n && idx<n){
          if(arr[idx]==0){
              idx++;
          }
          else if(i != arr[idx]){
              ans[1] = i;
              break;
          }
          else{
              idx++;
              i++;
          }
        }
        if(ans[1] == 0)
         ans[1]=i;
        return ans;
    }
};
