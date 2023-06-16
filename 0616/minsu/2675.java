


import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("S를 입력하세요: ");
        String S = scanner.nextLine();

        System.out.print("R을 입력하세요: ");
        int R = scanner.nextInt();

        String P = repeatCharacters(S, R);

        System.out.println("새 문자열 P: " + P);

        scanner.close();
    }

   public static String repeatCharacters(String S, int R) {
    String result = "";
    for (int i = 0; i < S.length(); i++) {
        char ch = S.charAt(i);
        for (int j = 0; j < R; j++) {
            result += ch;
        }
    }
    return result;
}

}
