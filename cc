import java.util.*;

class Main {
    public static StringBuffer encrypt(String text, int s) {
        StringBuffer result = new StringBuffer();
        for (int i = 0; i < text.length(); i++) {
            char ch = text.charAt(i);
            if (Character.isUpperCase(ch)) {
                ch = (char) (((ch + s - 65) % 26) + 65);
            } else if (Character.isLowerCase(ch)) {
                ch = (char) (((ch + s - 97) % 26) + 97);
            }
            result.append(ch);
        }
        return result;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter text: ");
        String text = sc.nextLine();
        System.out.print("Enter shift value: ");
        int s = sc.nextInt();
        System.out.println("Text : " + text);
        System.out.println("Shift : " + s);
        System.out.println("Cipher: " + encrypt(text, s));
    }
}


import java.util.*;

class Main {
    public static StringBuffer decrypt(String text, int s) {
        StringBuffer result = new StringBuffer();
        for (int i = 0; i < text.length(); i++) {
            char ch = text.charAt(i);
            if (Character.isUpperCase(ch)) {
                ch = (char) (((ch - s - 65 + 26) % 26) + 65);
            } else if (Character.isLowerCase(ch)) {
                ch = (char) (((ch - s - 97 + 26) % 26) + 97);
            }
            result.append(ch);
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter cipher text: ");
        String text = sc.nextLine();
        System.out.print("Enter shift value: ");
        int s = sc.nextInt();
        System.out.println("Cipher Text : " + text);
        System.out.println("Shift : " + s);
        System.out.println("Decrypted Text: " + decrypt(text, s));
    }
}
