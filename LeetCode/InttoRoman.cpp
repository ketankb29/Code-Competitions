#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        map<int,string> int_to_roman;
        int_to_roman[1] = "I";
        int_to_roman[2] = "II";
        int_to_roman[3] = "III";
        int_to_roman[4] = "VI";
        int_to_roman[5] = "V";
        int_to_roman[6] = "IV";
        int_to_roman[7] = "IIV";
        int_to_roman[8] = "IIIV";
        int_to_roman[9] = "XI";
        int_to_roman[10] = "X";
        int_to_roman[20] = "XX";
        int_to_roman[30] = "XXX";
        int_to_roman[40] = "LX";
        int_to_roman[50] = "L";
        int_to_roman[60] = "XL";
        int_to_roman[70] = "XXL";
        int_to_roman[80] = "XXXL";
        int_to_roman[90] = "CX";
        int_to_roman[100] = "C";
        int_to_roman[200] = "CC";
        int_to_roman[300] = "CCC";
        int_to_roman[400] = "DC";
        int_to_roman[500] = "D";
        int_to_roman[600] = "CD";
        int_to_roman[700] = "CCD";
        int_to_roman[800] = "CCCD";
        int_to_roman[900] = "MC";
        int_to_roman[1000] = "M";
        int_to_roman[2000] = "MM";
        int_to_roman[3000] = "MMM";
        
        string ans = "";
        int i,j;
        i=0;
        while(num>0){
            j = num%10 * pow(10,i);
            i++;
            num /= 10;
            ans += int_to_roman[j];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};