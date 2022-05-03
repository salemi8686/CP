import java.util.Arrays;
public class DynamicProgramming{
	public int integerBreak(int n) {
        int[] dp = new int[n+1];
        Arrays.fill(dp, 0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;++i){
            for(int j=1;j<i;++j){
                int x = Math.max(dp[i-j],i-j);
                int y = x*j;
                dp[i] = Math.max(dp[i],y);
            }
        }
        return dp[n];
    }
};