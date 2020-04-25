#include "symmetricDifference.h"

using namespace std;


void symDiff(vector<int> first, vector<int> second){

	//Find similar stuff
	//Gives us stuff that is common in array1 and array2
	vector<int> similarResult;

	for (int i = 0; i < first.size(); i++){
		for (int j = 0; j < second.size(); j++){
			
			if (first[i] == second[j]){
				similarResult.push_back(first[i]);						
			}
		}
	}


	//Now we take the vector1 and vector2 and subtract the similar stuff from them and voila 
	for(int i = 0; i < first.size(); i++){
		for(int j = 0; j  < similarResult.size(); j++){
			if(first[i] == similarResult[j]){
				first.erase(first.begin() + i);
			}
		}
	}
	
	for(int i = 0; i < second.size(); i++){
		for(int j = 0; j  < similarResult.size(); j++){
			if(second[i] == similarResult[j]){
				second.erase(second.begin() + i);
			}
		}
	}
	

	cout << "Symmetric Difference: ";	
	printVector(first);
	printVector(second);	
	cout << endl;


}



void printVector(std::vector<int> vectorToPrint){

	for(int i = 0; i < vectorToPrint.size(); i++){

		cout << vectorToPrint[i] << ", ";

	}





}
