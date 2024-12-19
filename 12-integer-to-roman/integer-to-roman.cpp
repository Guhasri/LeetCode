class Solution {
public:
    string intToRoman(int num) {
        map<int,string>map={{1,"I"},{5,"V"},{10,"X"},{50,"L"},{100,"C"},{500,"D"},
                            {1000,"M"},{4,"IV"},{9,"IX"},{40,"XL"},{90,"XC"},{400,"CD"},
                            {900,"CM"}};

        string ans="";
        int base[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        for(int i=0;i<13;i++){
            while(num>=base[i]){
                ans+=map[base[i]];
                num-=base[i];
            }
        }
        return ans;
    }
};