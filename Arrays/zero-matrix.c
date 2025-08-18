//have markers on the first row/col. then accordinlgy make the entire r/c full of 0s
void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int rows=matrixSize;
    int cols=*matrixColSize;

    int frowzero=0; //flags to indicate whether the org first row/col initially had any 0(s)
    int fcolzero=0;

    for(int i=0; i<cols; i++){
        if (matrix[0][i]==0){
            frowzero=1;
            break;
        }
    }

    for(int j=0; j<rows; j++){
        if (matrix[j][0]==0){
            fcolzero=1;
            break;
        }
    }

    //now to check if there is any 0 in the matrix (excluding first row and col)
    for(int i=1; i<rows; i++){
        for(int j=1; j<cols; j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;  //if any value is found to be 0, mark the respective first row and col value as 0
                matrix[0][j]=0;
            }
        }
    }

    //modifying the marked row/col to 0s
    for(int i=1; i<rows; i++){
        for(int j=1; j<cols; j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }

    //modifying first row and col to 0s if they had any
    if(frowzero==1){
        for(int i=0; i<cols; i++){
            matrix[0][i]=0;
        }
    }

    if(fcolzero==1){
        for(int j=0; j<rows; j++){
            matrix[j][0]=0;
        }
    }
}