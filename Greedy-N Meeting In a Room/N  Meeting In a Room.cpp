    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++)
        {
            pq.push({-end[i],start[i]});
        }
        
        int scurr=0;
        int epre=-1;
        int cnt=0;
        while(pq.size()!=0)
        {
            scurr=pq.top().second;
            if(epre<scurr)
            {
                cnt++;
                epre=pq.top().first*(-1);
                
            }
            pq.pop();
        }
        return cnt;
        
        
    }