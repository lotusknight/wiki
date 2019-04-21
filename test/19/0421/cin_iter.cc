#include <bits/stdc++.h>

using namespace std;

int main(){
		vector<int> tmp;
		int temp;
		cin >> temp;
		tmp.push_back(temp);
		while(cin.get()!='\n'){
				cin >> temp;
				tmp.push_back(temp);
//				printf("in cin\n");
		}
//				printf("out cin\n");
		vector<int>::iterator itr = tmp.begin();
		while(itr != tmp.end()){
//				printf("in cout\n");
				cout << *itr;
				itr++;
		}
		return 0;
}

