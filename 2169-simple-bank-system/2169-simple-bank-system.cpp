#include <bits/stdc++.h>
using namespace std;

class Bank {
public:
    unordered_map<int, long long> mp;

    Bank(vector<long long>& balance) {
        for (int i = 0; i < balance.size(); i++) {
            mp[i + 1] = balance[i];  // accounts are 1-indexed
        }
    }

    bool valid(int account) {
        return mp.find(account) != mp.end();
    }

    bool transfer(int account1, int account2, long long money) {
        if (!valid(account1) || !valid(account2)) return false;
        if (mp[account1] < money) return false;
        mp[account1] -= money;
        mp[account2] += money;
        return true;
    }

    bool deposit(int account, long long money) {
        if (!valid(account)) return false;
        mp[account] += money;
        return true;
    }

    bool withdraw(int account, long long money) {
        if (!valid(account)) return false;
        if (mp[account] < money) return false;
        mp[account] -= money;
        return true;
    }
};
