class Solution {
private:
    void solve(vector<int> frnd,int& ans,int k,int index){
        if(frnd.size()==1){
            ans=frnd[0];
            return;
        }

    index=(index+k)%frnd.size();
    frnd.erase(frnd.begin()+index);
    solve(frnd,ans,k,index);

    }
public:
    int findTheWinner(int n, int k) {
        vector<int> friends;

       int j=1;
       for(int i=0;i<n;i++){
           friends.push_back(j);
           j++;
       }

        int ans=0;
        solve(friends,ans,k-1,0);
        return ans;
    }
};
