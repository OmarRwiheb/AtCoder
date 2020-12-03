#include<bits/stdc++.h>

using namespace std;

#define sqr(x) ((x)*(x))
#define vi vector<int>
#define vll vector<long long>
#define all(v) ((v).begin()), ((v).end())

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned long long int ulli;

/*ll sieve_size;
bitset<10000010>bs;
vll p;

void sieve(ll upperbound){
    sieve_size=upperbound+1;
    bs.set();
    bs[0]=bs[1]=false;
    for(ll i = 2;i<sieve_size;i++) if(bs[i]){
            for(ll j = i*i;j<sieve_size;j+=i) bs[j]=false;
            p.push_back(i);
        }
}*/

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

bool isPrime(ll n) {
    if (!(n % 2))return false;
    for (int i = 3; i * i <= n; i += 2)
        if (!(n % i))return false;
    return true;
}

int main() {
    //ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    char x[101];
    scanf("%s",x);
    int mp[26]{};
    for (int i = 0; x[i]; i++) {
        mp[x[i] - 'a']++;
    }
    bool flag = 1;
    for (int i = 0; i < 26; i++) {
        if (mp[i] % 2) flag = 0;
    }

    flag ? printf("Yes") : printf( "No");

    return 0;
}
