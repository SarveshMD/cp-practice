
public class swap_nibbles {
    public static int swap(int a) {
        return (((a & 0xF0) >> 4) | ((a & 0x0F) << 4));
    }

    public static void main(String[] args) {
        int a = 100;

        System.out.printf("a: %d, res: %d\n", a, swap(a));
    }

}
