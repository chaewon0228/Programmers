import java.io.*;
class Solution {
    public int solution(int left, int right) {
        int answer = 0, cnt;
        
        for(int i=left; i<=right; i++){
            cnt = 0;
            for(int j=1; j<=i; j++){
                if(i%j==0) cnt++;
            }
            if(cnt%2 == 0) answer += i;
            else answer -= i;
        }
        return answer;
    }
}

public class main{
   public static void main(String[] args){
	System.out.println(solution(13, 17));
   }
}