#include <iostream>
#include <vector>

using namespace std;

void PrintVec(vector<int> myVec){
	for(int i = 0; i < myVec.size(); i++){
		if(i != myVec.size() - 1){
			cout << myVec[i] << ", ";
		}
		else{
			cout << myVec[i];
		}
	}
	cout << endl;
}

int main() {
  cout << "Hello World!" << endl;

	vector<int> randVec({23, 14, 65, 3, 19, 2, 71, 12, 8, 61, 5, 25});
	
	for(int i = 0; i < randVec.size() - 1; i ++){
		//PrintVec(randVec);
		//cout <<"* * * i: "<< i << " * * *" << endl;
		int min = i;
		for(int j = i+1; j < randVec.size(); j++){
			//cout <<"j: "<< j << endl;
			if(randVec[j] < randVec[min]){
				min = j;
			}
		}
		swap(randVec[i],randVec[min]);
		//PrintVec(randVec);
	}

	PrintVec(randVec);
	
}