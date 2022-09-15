class Solution {
     public int[] findOriginalArray(int[] changed) {
        Arrays.sort(changed);
        ArrayList<Integer> list = new ArrayList<>();
        int count = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i : changed) {
            map.put(i, map.getOrDefault(i, 0) + 1);
        }

        for (int i = 0; i < changed.length; i++) {
            int doubleVal = 2 * changed[i];
            if (map.getOrDefault(doubleVal, 0) > 0 && map.getOrDefault(changed[i], 0) > 0) {
                if (doubleVal == 0 && map.get(doubleVal) == 1) {
                    continue;
                }
                count++;
                list.add(changed[i]);
              

                if (map.get(changed[i]) == 1) {
                    map.remove(changed[i]);
                } else {
                    map.replace(changed[i], map.get(changed[i]) - 1);
                }

                if (map.get(doubleVal) == 1) {
                    map.remove(doubleVal);
                } else {
                    map.replace(doubleVal, map.get(doubleVal) - 1);
                }
                               

            }
        }

        if (count*2 == changed.length) {
            int[] ans = new int[count];
            for (int i = 0; i < count; i++) {
                ans[i] = list.get(i);
            }
            return ans;
        }
        return new int[]{};
    }
}