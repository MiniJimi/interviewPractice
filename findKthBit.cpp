#Find Kth Bit in Nth Binary String

#Description
#Recursion problem where we interate n-times, find the kth character in the string of bits
#We are given S1=0, and this givens us S2, S3, S4...  
#We are asked to inverse bits 0 -> 1 , 1 -> 0, so we need cond statements
#we are also asked to reverse the inverse, e.g. reverse(inverse(011)) -> reverse(100) = 001
#last challenge is we need to keep track of the ongoing values of temp, we use &c to point at the actual memory
#putting this together give us f = f + "1" + temp , where temp = reverse(inverse(x))
#lastly we want to return the kth bit.  e.g. n=3, k=2, whats the 2nd character after 3 iteration
#e.g. S3=0111001  therefore, k=1 (0_11001)

#soln
class Solution:

class Solution {
public:
    char findKthBit(int n, int k) {
        string f = "0";     // we know S1 = 0, guarenteed
        string temp, s;
        
        while (n--){        //n--  decrement n after using it in an expression
            //set up Si= S_(i-1) + "1" + reverse(invert (S_(i-1)))
            temp = f;                       //f = S_i-1
            reverse(temp.begin(), temp.end());
            for(char &c: temp){        //&c address operator "&" gives the address of the memory for c
                if(c == '0') c = '1'; else c = '0';   //we want the updates to be permanent
            }      
            f = f + "1" + temp;         // f=S_i-1, temp = reverse(invert (S_(i-1))                      
        
        }
        return f[k-1];              //after nth iterations are complete, return the kth character
        }                           //ik findKthBit(n=3, k=2), then n interations, kth character
};                                  // [k-1] because we start counting positions _1 _2 _3 _4
