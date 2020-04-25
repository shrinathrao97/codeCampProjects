#include "symmetricDifference.h"

using namespace std;


int main(){

	
	vector<int> firstVec;
	vector<int> secondVec;

	firstVec.push_back(1);
	firstVec.push_back(2);
	firstVec.push_back(3);
	firstVec.push_back(4);

	secondVec.push_back(1);
	secondVec.push_back(3);
	secondVec.push_back(4);
	secondVec.push_back(5);

	symDiff(firstVec, secondVec);

	return(0);


}
