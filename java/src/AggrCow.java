
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class AggrCow {
    public int n, c;
    public ArrayList<Integer> positions;
    private int[] orderedPositions;
    private int outVal;

    public AggrCow(int n, int c, ArrayList<Integer> positions) {
        this.n = n;
        this.c = c;
        this.positions = positions;
        int[] pos = positions.stream().mapToInt(i -> i).toArray();
        Arrays.sort(pos);
        setOrderedPositions(pos);
        int low = pos[1] - pos[0];
        int high = pos[pos.length - 1] - pos[0];
        while (low <= high) {
            int mid = (high + low) / 2;
            outVal = mid;
            //if cows can be placed at a distance of mid
            if (canPlace(mid)) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

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
        ArrayList<Integer> inputPositions = new ArrayList<>();
        Scanner input = new Scanner(System.in);
        t = input.nextInt();
        while (t-- > 0) {
            n = input.nextInt();
            int tNum = n;
            c = input.nextInt();
            while (tNum-- > 0) {
                int inputPosition = input.nextInt();
                inputPositions.add(inputPosition);
                n--;
            }
            AggrCow aggrCow = new AggrCow(n, c, inputPositions);
            System.out.println(aggrCow.outVal);



        }
    }

}
