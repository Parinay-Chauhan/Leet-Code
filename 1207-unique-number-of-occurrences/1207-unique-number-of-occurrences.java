class Solution {
    public boolean uniqueOccurrences(int[] arr) {

        HashMap<Integer, Integer> freq = new HashMap<>();

        // Count frequency
        for (int num : arr) {
            freq.put(num, freq.getOrDefault(num, 0) + 1);
        }

        HashSet<Integer> st = new HashSet<>();

        // Check uniqueness of frequencies
        for (Map.Entry<Integer, Integer> it : freq.entrySet()) {
            if (st.contains(it.getValue()))
                return false;

            st.add(it.getValue());
        }

        return true;
    }
}
