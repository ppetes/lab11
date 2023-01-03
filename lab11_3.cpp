#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
#include<string>
using namespace std;

int main(){
    float count = 0;
    float mean, SD,x = 0;
    string textline;
    ifstream source;
	source.open("score.txt");
    while(getline(source,textline)){
        mean += atof(textline.c_str());
        x = x+pow(atof(textline.c_str()),2);
        count++;
    }
    
	SD = sqrt((1/count)*x-(pow(mean/count,2)));
	

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean/count << endl;
    cout << "Standard deviation = " << SD;
}