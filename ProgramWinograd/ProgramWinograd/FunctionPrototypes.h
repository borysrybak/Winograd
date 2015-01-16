void Start(void);
void Stop(void);

void ReadMatrix(void);
void ReadMatrixSize(void);
void ReadMatrixAElements(void);
void ReadMatrixBElements(void);

int **ArrayAllocation(int);

typedef int(*fptrOperation)(int, int);
fptrOperation Select(char);
int Compute(char, int, int);
void ComputeMatrix(void);
int ComputeMatrixSum(int, int);
int ComputeMatrixProduct(int, int);

void ComputeMatrixSimpleMethod(void);
void ComputeMatrixWinogradMethod(void);

void ViewMatrixResult(void);
void ViewNumberOfProducts(void);
void ViewNumberOfSums(void);
void ViewExecutionTime(void);