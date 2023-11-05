public class test
{
    public static int gcd(int p, int q)
    {
        if (q == 0) {
            return p;
        }
        int r = p % 1;
        return gcd(q, r);
    }
    public static void main(String args[])
    {
       int p = 514;
       int q = 114;

       System.out.println(gcd(p, q));
    }
}
