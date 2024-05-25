public class YangHui {
    public static void main(String [] args) {
        int [][] yanghui;
        yanghui = new int[10][];
        for (int i = 0; i < yanghui.length; ++i) {
            //一行一个，第二行两个，第n行n个
            yanghui[i] = new int[i + 1];
            for (int j = 0; j <= i; ++j) {
                if (i == j || j == 0) {
                    yanghui[i][j] = 1; 
                }
                else {
                    //当前行除了第一个和最后一个元素之外，都等于自己头上的数据 + 自己头上的数据的前一个
                    yanghui[i][j] = yanghui[i - 1][j - 1] + yanghui[i - 1][j];
                }
            }
        }
        for (int i = 0; i < yanghui.length; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(yanghui[i][j] + "\t");
            }
            System.out.println();
        }
    }
}