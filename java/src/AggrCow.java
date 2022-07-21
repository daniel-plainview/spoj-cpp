
import java.util.ArrayList;
import java.util.Arrays;

public class AggrCow {
    public int n, c;
    public ArrayList<Integer> positions;
    private int[] orderedPositions;

    public AggrCow(int n, int c, ArrayList<Integer> positions) {
        int[] pos = new int[positions.size()];
        Arrays.sort(pos);
        setOrderedPositions(pos);
        int low = pos[1] - pos[0];
        int high = pos[pos.length - 1] - pos[0];
        while (low < high) {
            int mid = (high + low) / 2;
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
        int nextPos = positions.get(0) + distance;
    }

    public void setOrderedPositions(int[] orderedPositions) {
        this.orderedPositions = orderedPositions;
    }
}
