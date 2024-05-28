package model;

import java.util.Random;

public class GuessService {
    static Random random = new Random();
    public static int randomNumber = random.nextInt(100) + 1;

    public int guess(int inputNumber) {

        // 从web页面不断接收输入
        if (randomNumber > inputNumber) {
            return -1;
        } else if (randomNumber < inputNumber) {
            return 1;
        } else {
            return 0;
        }
    }
}

