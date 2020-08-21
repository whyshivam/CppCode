
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long int n;
        cin>>n;
        int A[n];
        long long int c=0;
        for(long long int i=0;i<n;i++)
        {
            cin>>A[i];
            if(i>0&&(A[i]*A[i-1]<0))
            {	
           		c++;
			}
        }
        long long int aa[c+1];
        long long int j=0,ad=0;
        long long int s=0,mx=A[0];
        for(long long int i=0;i<c+1;i++)
        {
            ad=A[j];
            if(j<n-1)
            while(A[j]*A[j+1]>0)
            {
                ad+=A[j+1];
                j++;
            }
            j++;
            aa[i]=ad;
            if(mx<aa[i])
            {
            	mx=aa[i];
			}
        }
        cout<<endl;
        for(long long int i=0;i<c+1;i++)
        {
            if(aa[i]<0)
            {
                if((i>0)&&(i<n))
                {
                    if(aa[i-1]+aa[i]>0)
                    {
                        if(aa[i+1]+aa[i]>0)
                        {
                          s=aa[i+1]+aa[i]+aa[i-1];
                          aa[i+1]=s;
                          if(s>mx)
                          {
                              mx=s;
                          }
                        }
                    }
                }
            }
        }
        
        cout<<mx;
    }
    


