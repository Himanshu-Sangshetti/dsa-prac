class Solution {
public:
    string reverseWords(string s) {
        int i=0,l=0,r=0,n=s.size();
        reverse(s.begin(),s.end());

        while(i<n){
            while(s[i]!=' ' && i<n){
                s[r++]=s[i++];
            }

            if(l<r){
                reverse(s.begin()+l,s.begin()+r);
                if(r==n) break;
                s[r++]=' ';
                l=r;
            }
            ++i;
        }

        if(r>0 && s[r-1]==' '){
            r--;
        }
        s.resize(r);
        return s;
    }
};