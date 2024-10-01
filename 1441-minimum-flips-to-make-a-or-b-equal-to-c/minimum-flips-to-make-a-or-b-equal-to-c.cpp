class Solution {
public:
    int minFlips(int a, int b, int c) {
       int count=0;
       bitset<32> x(a);
       bitset<32> y(b);
       bitset<32> z(c);

       for ( int i=0; i<32 ; i++){
        if((x[i]||y[i]) != z[i]){
            if ( ! z[i] )
            {
            count+= x[i]+y[i];
            }
        else{ count++;}
       }
       }
       return count;
    }
};