string colName (long long int n)
    {
        string ans="";
        while(n>0)
        {
            int k=n%26;
            char ch='A'+(k-1);
            n=n/26;
            if(k==0)
            {
                ans+='Z';
                n--;
            }
            else ans+=ch;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
