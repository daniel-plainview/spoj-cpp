
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public int n, c;
    public ArrayList<Integer> positions;
    private int[] orderedPositions;
    private int outVal;

    public Main(int n, int c, ArrayList<Integer> positions) {
        this.n = n;
        this.c = c;
        this.positions = positions;
        int[] pos = positions.stream().mapToInt(i -> i).toArray();
        Arrays.sort(pos);
        setOrderedPositions(pos);
        int low = pos[1] - pos[0];
        int high = pos[pos.length - 1] - pos[0];
        int mid = 0;
        while (low <= high) {
            mid = (high + low) / 2;
            //if cows can be placed at a distance of mid
//            System.out.println(mid + " " + canPlace(mid));
            if (canPlace(mid)) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        outVal = mid;

    }

    public boolean canPlace(int distance) {
        int counter = 1;
        int nextPos = orderedPositions[0] + distance;
        for (int i = 1; i < orderedPositions.length; i++) {
            if (orderedPositions[i] >= nextPos) {
                nextPos = orderedPositions[i] + distance;
                counter++;
            }
        }
        return counter >= c;
    }

    public void setOrderedPositions(int[] orderedPositions) {
        this.orderedPositions = orderedPositions;
    }

    public static void main(String[] args) {
        int t, n, c;
        Scanner input = new Scanner(System.in);
        t = input.nextInt();
        while (t-- > 0) {
            n = input.nextInt();
            int nNum = n;
            c = input.nextInt();
            ArrayList<Integer> inputPositions = new ArrayList<>();
            boolean inNotValid = false;
            while (nNum-- > 0) {
                int inputPosition = input.nextInt();
                if (inputPosition < 0 || c < 2 || c > n) {
                    System.out.println(0);
                    inNotValid = true;
                    break;
                }
                inputPositions.add(inputPosition);
            }
//            System.out.println("positions : " + inputPositions);
            if (!inNotValid) {
                Main aggrCow = new Main(n, c, inputPositions);
                System.out.println(aggrCow.outVal);
            }
        }
    }

}
