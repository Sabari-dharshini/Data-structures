Matrix to password(calculate the seconds to type the password)
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include<set>

int totalseconds(vector<vector<int>>keypad,vector<int>password)
{
    map<int,set<int>>adj;
    int row=keypad.size();
    int col=keypad[0].size();
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            int key=keypad[i][j];
            if(i-1>=0)
              adj([key].insert(keypad[i-1][j]);
            if(j-1>=0)
              adj[key].insert(keypad([i][j-1]);
             if(i+1<row)
             adj[key].insert(keypad[i+1][j]);
             if(j+1>col)
             adj[key].insert(keypad[i][j+1]));
            
        }
    }
    for(auto i:adj)
    {
        cout<<i.first<<":";
        for(auto j=0;j<second.size();j++)
        {
            cout<<i.second[j]<<" ";
        }
        cout<<end;
    }
    for(int i=0;i<password,size();i++)
    {
        if(i==0)
        {
            totalsec++;
        }
        elseif(adj[password[i-1]].count(password[i]))
        {
            totalsec+0
        }
            elseif(adj[password[i-1]].count(password[i]))
        {
            totalsec++;
    }
    else{
        totalsec+=2;
    }
    return totalsec;
    
    }
   


int main() {
	vector<vector<int>>keypad={{1,2,3},{4,5,6},{7,8,9}};
	vector<int>password={4,5,1,2,9,9.8};
	int result>totalSeconds(keypad,password);
	cout<<result
	return 0;

}

