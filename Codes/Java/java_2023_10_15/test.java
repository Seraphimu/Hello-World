public class test
{
    public static void main(String args[])
    {
a1: for (int i = 0; i < 100; i++) {
a2:        for (int j = 0; j < 50; j++) {
                System.out.println("i = " + i);
                System.out.println("j = " + j);
                if (j == 4)
                    break a1;
            }
        }
    }
}
