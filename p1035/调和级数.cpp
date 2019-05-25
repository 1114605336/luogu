#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]) {
	int k;
	cin>>k;
	double gamma=0.5772156649;
	cout<<int(exp(k-gamma)+0.5);
}
