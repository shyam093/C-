// Example program
#include <iostream>
#include <string>
using namespace std;


bool cmp (string l, int left_index,int right_index)
{
        while(left_index < right_index )
        {
            if((l[left_index] == l[right_index]))
                { return 1; }
            else
                { return 0; }
    
            cmp(l,left_index++,right_index--);
        }
    
}

int main()
{
    string name;
    cout << "enter the name \n";
    cin >> name;
    bool flag;
    int len;
    int l_i,r_i;
    
    len = name.length();
    l_i = 0;
    r_i = len -1;
    flag = cmp(name,l_i,r_i);
    if(flag)
    cout << "palindrome \n";
    else
    cout << "not a palindrome \n"    
    
    
}
