class Solution {
public:
    int findComplement(int num) {
        string bin ="" ;
        int ans;
        while(num >0){
            if(num %2 !=0){
               bin +="0";
            }else{
                bin +="1";

            }
            num = num/2;
        }reverse(bin.begin(), bin.end());
         ans= stoi(bin , nullptr , 2);
         
        return ans;
    }
};