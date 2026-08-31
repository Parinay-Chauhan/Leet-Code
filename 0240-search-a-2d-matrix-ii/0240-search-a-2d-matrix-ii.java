class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
        int row = matrix.length;
        int col = matrix[0].length;

        int rowIndex = 0;
        int colIndex = col - 1;

        while (rowIndex < row && colIndex >= 0) {

            int element = matrix[rowIndex][colIndex];

            if (element == target) {
                return true;
            }
            if (element < target) {
                rowIndex++;
            } else {
                colIndex--;
            }
        }
        return false;
    }
}
