#include <iostream>
#include<vector>

using namespace std;

int main()
{
    //Obtaining bound of n
    int n;
    cin >> n;

    //Setting half sum value
    int sum = (n*(n+1)/2)/2;

    //Initializing counter variable
    int a = 0, b = 0;

    //Maintaining two groups
    vector<int> group1, group2;

    //Running loop from n to 1
    for(int i=n;i>=1;i--){
        if(sum-i>=0){
            group1.push_back(i);
            sum -= i;
            a += i;
        }else{
            group2.push_back(i);
            b += i;
        }
    }

    //Printing minimum sum difference
    cout << "Minimum difference: " << abs(a-b) << endl;

    //Printing the elements of the two groups
    cout << "Size of Group 1: " << group1.size() << endl;
    for(int i=0;i<group1.size();i++){
        cout << group1[i] << " ";
    }
    cout << endl;
    cout << "Size of Group 2: " << group2.size() << endl;
    for(int i=0;i<group2.size();i++){
        cout << group2[i] << " ";
    }

    return 0;
}
