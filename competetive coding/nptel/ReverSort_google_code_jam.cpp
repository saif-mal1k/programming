#include<bits/stdc++.h>
using namespace std;


# define ll long long int
# define vi vector<int>
# define vll vector<long long int>

int reversort(vi &L){

    int cost = 0;

    for (int i=0; i<L.size()-1; i++){

        int m = *min_element(L.begin()+i, L.end());

        auto x = find(L.begin(),L.end(),m);

        reverse(L.begin()+i,x+1);

        cost += distance(L.begin(),x) - i + 1; 

    }

    return cost;
}

int main (){

    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int T;      // no of test array
    cin>> T;

    for (int C=1; C<T+1; C++){

        int N;      // size of each array
        cin >> N;

        vi L;       // for elements in array we are using vector of type int

        for (int i = 0; i < N; i++){

            int num;
            cin>> num;
            L.push_back(num);
            
        }

        cout<<"Case #"<<C<<": "<< reversort(L)<<endl;

    }

    std :: ios:: sync_with_stdio(false);

}

