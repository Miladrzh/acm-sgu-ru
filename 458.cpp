# include <bits/stdc++.h>

using namespace std;

# define XX first
# define YY second

typedef pair<int, int> pii;

int upd[100000 + 100];

inline bool match(pii p1, pii p2){
	if (fabs(p1.YY - p2.YY) != 1)
		return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);

	vector<pii> v;
	int maxans = -1;
	int maxansind = 0;
	int n;
	cin >> n;

	v.push_back(pii(0,-100));
	v.push_back(pii(0,-1000));
	v.push_back(pii(0,-10000));
	v.push_back(pii(0,-120));
	v.push_back(pii(0,-1020));
	
	upd[0] = upd[1] = upd[2] = upd[3] = upd[4] = -1;
	vector <int> lasti;
	lasti.push_back(0);
	lasti.push_back(1);
	lasti.push_back(2);
	lasti.push_back(3);
	lasti.push_back(4);
	

	for (int i = 5 ; i <= n + 4 ; i++){
		pii now;
		now.XX = -1;
		cin >> now.YY;

		bool flag = false;
		for (auto last_ind:lasti){
			if (match(now, v[last_ind]) && now.XX < v[last_ind].XX + 1){
				upd[i] = last_ind;
				now.XX = v[last_ind].XX + 1;
			}
			if (v[last_ind].YY == now.YY)
				flag = true;
		}



		if (flag){
			for (int j = 0 ; j <= 4; j++){
				if (v[lasti[j]].YY == now.YY){
					for (int k = j ; k < 4 ; k++){
						lasti[k] = lasti[k + 1];
					}
					lasti[4] = i;
					break;
				}
			}
		}else{
			for (int i = 0 ; i < 4 ; i++){
				lasti[i] = lasti[i + 1];
			}
			lasti[4] = i;
		}

		if (maxans < now.XX){
			maxans = now.XX;
			maxansind = i;
		}
		v.push_back(now);
	}
	cout << n - maxans << endl;

	vector <int> ans;
	while (maxansind > 4){
		ans.push_back(v[maxansind].YY);
		maxansind = upd[maxansind];
	}
	reverse(ans.begin(), ans.end());
	for (auto i:ans)
		cout << i << " ";
	cout << endl;
	return 0;
}