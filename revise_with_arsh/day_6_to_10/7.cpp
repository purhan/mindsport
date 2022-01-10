string FirstNonRepeating(string A){
		    int n=A.length();
		    string ans="";
		    if(n==0) return ans;
		    ans+=A[0];
		    int j=0;
		    char rt=A[0];
		    if(n==1) return ans;
		    vector<int>freq(26,0);
		    freq[A[0]-'a']++;
		    for(int i=1;i<A.length();i++)
		    {
		        freq[A[i]-'a']++;
		        if(A[i]!=rt&&rt!='#')    ans+=rt;
		        else if(rt=='#')
		        {
		            if(freq[A[i]-'a']<2)
		                rt=A[i];
		              else
		              {
		                  j=i;
		              }
		              ans+=rt;
		        }
		        else
		        {
		            while(j<i)
		            {
		                if(freq[A[j]-'a']<2)
		                {
		                    rt=A[j];
		                    break;
		                }
		                j++;
		            }
		            if(rt==A[i]) rt='#';
		            ans+=rt;
		        }
		    }
		    return ans;
		}
