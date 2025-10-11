# include <bits/stdc++.h>

using namespace std;

# define XX first
# define YY second

typedef pair<double, double> Point;

const int maxN = 100000 + 10;
Point p[maxN], ans[maxN];

inline bool online(const Point& x, const Point& y, const Point& z) {
    double cross = (y.first - x.first) * (z.second - x.second)
                 - (y.second - x.second) * (z.first  - x.first);
    const double EPS = 1e-9;
    return fabs(cross) <= EPS;
}

int main(){

	int n;
	cin >> n;

	for (int i = 1 ; i <= n ; i++){
		cin >> p[i].XX >> p[i].YY;
		p[i].XX *= 2;
		p[i].YY *= 2;
	}

	Point S = {0,0};
	double sign = 1;
	for (int i = 1 ; i <= n ; i++){
		S.XX += (p[i].XX * sign);
		S.YY += (p[i].YY * sign);
		sign *= -1;
	}

	if (n % 2){
		ans[1].XX = S.XX / 2.0;
		ans[1].YY = S.YY / 2.0;
	}else{
		ans[1].XX = 1.0;
		ans[1].YY = 1.0;
	}

	// cout << endl << endl;

	for (int i = 1 ; i <= n - 1 ; i++){
		ans[i + 1].XX = p[i].XX - ans[i].XX;
		ans[i + 1].YY = p[i].YY - ans[i].YY;
	}

	// for (int i = 1 ; i <= n ; i++){
	// 	cout << ans[i].XX << " " << ans[i].YY << endl;
	// }

	bool flag = false;
	for (int i = 1 ; i <= n - 2; i++){
		if (online(ans[i], ans[i + 1], ans[i + 2])){
			flag = true;
		}
	}
	// cout << flag;
	if (ans[n].XX + ans[1].XX != p[n].XX || ans[n].YY + ans[1].YY != p[n].YY)
		flag = true;

	if (flag){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;

		for (int i = 1 ; i <= n ; i++){
			cout << fixed << setprecision(5) << ans[i].XX << " " << ans[i].YY << endl;
		}
	}

	return 0;
}