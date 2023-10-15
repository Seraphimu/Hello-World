public class test1
{
    public static void main(String [] args)
    {
        int j = 0;
a1:
        for (int i = 3; i > 0; i--) {
            j += i;
a2:
            for (int k = 1; k < 3; k++) {
                j *= k;
                System.out.println("i = " + i);
                System.out.println("j = " + j);
                if (i == k) {
                    break a1;
                }
            }
        }
        System.out.println(j);
    }
}
