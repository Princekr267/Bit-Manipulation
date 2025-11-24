#include<iostream>
using namespace std;
int getIthBit(int num, int i){
    int bitmask=1<<i;
    if(!(bitmask & num)) return 0;
    return 1;
}
int setIthBit(int num, int i){
    int bitmask=1<<i;
    return (num | bitmask);
}
int clearIthBit(int num, int i){
    int notBitmask=~(1<<i);
    return (num & notBitmask);
}
bool isPowerTwo(int num){
    if(!((num) & (num-1))) return true;
    return false;
}
int updateIthBit(int num, int i, int val){
    num=num & ~(1<<i);
    return (num | val<<i);
}
int clearIBits(int num, int i){
    int bitMask = ~0 << i;
    num=num & bitMask;
    return num;
}
int countSetBit(int num){
    int sum=0;
    while(num>0){
        int lastdigit = (num & 1);
        sum+=lastdigit;
        num=num>>1;
    }
    return sum;
}
int fastExponential(int x, int n){
    int ans=1;
    while(n>0){
        int lastBit=(1 & n);
        if(lastBit!=0){
            ans*=x;
        }
        x*=x;
        n=n>>1;
    }
    return ans;
}
int main(){
    cout<<getIthBit(8,2)<<endl;
    cout<<setIthBit(5,3)<<endl;
    cout<<clearIthBit(5,2)<<endl;
    cout<<isPowerTwo(1000)<<endl;
    cout<<updateIthBit(7, 2, 0)<<endl;
    cout<<clearIBits(15, 2)<<endl;
    cout<<countSetBit(11)<<endl;
    cout<<fastExponential(3, 5)<<endl;
    return 0;
}