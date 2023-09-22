#include <bits/stdc++.h>
 
using namespace std;

class solve
{
    public:    
        vector<int> maxi(vector<int> a, vector<int> b)
        {
            if(a.size() > b.size()) return a;
            else return b;
        }
        vector<int> insert(int A)
        {
            vector<int> v;
            for(int i = 1; i <= A; i++)
            {
                int V;
                cin >> V;
                v.push_back(V);
            }
            return v;
        }

        void maxi_two_vectors(int j, int i, vector<int> a, vector<int> b)
        {
            --j;
            --i;
            while(j > i)
            {
                cout << max(a[j], b[j]) << " ";
                j--;
            }
        }
};

int main(int argc, char** argv)
{
    solve sol;
    
    int M, N;
    cin >> M >> N;
    
    vector<int> a, b;
    a = sol.insert(M);
    b = sol.insert(N);
    
    sol.maxi_two_vectors(max(a.size(), b.size()), max(a.size(), b.size()) - min(a.size(), b.size()), a, b);
    
    if(!(a.size() == b.size()))
    {
        
        vector<int> c = sol.maxi(a,b);
        for(int i = min(a.size(), b.size()); i >= 0; i--)
        {
            cout << c[i] << " "; 
        }
    }
}
