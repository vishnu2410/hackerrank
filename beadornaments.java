
import java.math.*;
import java.util.*;
 
public class Solution {
    static Scanner in;
    static int n;
    static final BigInteger two = new BigInteger("2");
    static BigInteger [] nw = new BigInteger[32];
    static BigInteger [] freqs = new BigInteger[10];
    static BigInteger [] cumfreqs = new BigInteger[1024];
    static BigInteger [] memo = new BigInteger[1024];
    static int [] count = new int[1024];
 
    public static BigInteger getWays (int mask) {
        if (memo[mask].compareTo(BigInteger.ZERO) > 0)
            return memo[mask];
        BigInteger ans = BigInteger.ZERO;
        for (int mask1 = 1; mask1 < mask; mask1 ++) {
            if ((mask1 & mask) != mask1)
                continue;
            int mask2 = mask - mask1;
            ans = ans.add(getWays(mask1).multiply(getWays(mask2).multiply(cumfreqs[mask1].multiply(cumfreqs[mask2]))));
        }
        ans = ans.divide(two.multiply(new BigInteger(Integer.toString(count[mask])).subtract(BigInteger.ONE)));
        return memo[mask] = ans;
    }
    public static void solve_beads () {
        n = in.nextInt();
        for (int i = 0; i < (1 << n); i ++)
            memo[i] = BigInteger.ZERO;
        for (int i = 0; i < n; i ++) {
            int k = in.nextInt();
            memo[1 << i] = nw[k];
            freqs[i] = new BigInteger(Integer.toString(k));
        }
        for (int i = 0; i < (1 << n); i ++) {
            cumfreqs[i] = BigInteger.ZERO;
            count[i] = 0;
            for (int j = 0; j < n; j ++) {
                if (((i >> j) & 1) > 0) {
                    cumfreqs[i] = cumfreqs[i].add(freqs[j]);
                    count[i] ++;
                }
            }
        }
        System.out.println(getWays((1 << n) - 1).mod(new BigInteger("1000000007")).toString());
    }
 
    public static void main (String [] args) {
        in = new Scanner(System.in);
        nw[0] = BigInteger.ZERO;
        nw[1] = nw[2] = BigInteger.ONE;
        for (int i = 3; i < 32; i ++)
            nw[i] = new BigInteger(Integer.toString(i)).pow(i - 2);
        int nC = in.nextInt();
        for (int i = 0; i < nC; i ++)
            solve_beads();
    }
}
