
import java.util.ArrayList;
import java.util.HashMap;

public class AggrCow {
    private static ArrayList<Integer> inputOfNumbers = new ArrayList<>();
    private static Integer MIN, MAX;
    private static final HashMap<Integer, Boolean> positionMap = new HashMap<>();
    private static AggrCow instance;

    AggrCow(ArrayList<Integer> consoleInput) {
        try {
            for (Integer position : positionMap.keySet()) {

                if (!positionMap.get(position)) {

                }

            }
        } catch (NullPointerException e) {
            instance = getInstance(consoleInput);


        }
    }

    private AggrCow getInstance(ArrayList<Integer> consoleInput) {
        if (instance == null) {
            int min = MAX, max = MIN;
            for (Integer in : consoleInput) {
                min = Math.min(min, in);
                max = Math.max(max, in);

            }
            MAX = max;
            MIN = min;
            setPositionMap(consoleInput);

            return new AggrCow(consoleInput);
        } else return instance;

    }

    private int recPositionMap(Integer position) {
        if (position.equals(MIN) || position.equals(MAX))
            return position;
        else {
            //Return the next position to be taken by the stall
            // if not placed , check if its current position is the least from left
            if(positionMap.get(position))
                return position;
            else

        }
    }


    public void setPositionMap(ArrayList<Integer> inputValues) {
        for (Integer i : inputValues) {
            positionMap.put(i, false);
        }
        inputOfNumbers = inputValues;
    }


}
