import java.util.Scanner;

class BubbleSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int size = sc.nextInt();
        int[] arr= new int[size];
        int temp;
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < arr.length-1; i++) {
            if (arr[i]>arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                i -= 1;
            }
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.printf(" "+arr[i]);
        }
        sc.close();
    }
}