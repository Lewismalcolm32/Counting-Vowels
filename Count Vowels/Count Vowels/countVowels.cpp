#include <string>
#include <iostream>
int sumOfVowels(const std::string& someString){
	int count = 0;
	for (char x : someString){
		if ((x == 'a' || x == 'A') || (x == 'e' || x == 'E') || (x == 'i' || x == 'I') || (x == 'o' || x == 'O') || (x == 'u' || x == 'U')){
			++count;
		}		
	}
	return count;
}


int main(){
	std::cout << sumOfVowels("I like titu totoi pie!!")/2 << std::endl;
	system("pause");
}