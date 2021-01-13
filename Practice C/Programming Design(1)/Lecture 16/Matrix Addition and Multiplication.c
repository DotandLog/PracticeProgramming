void add_mat(const struct mat *m1_p, const struct mat *m2_p, struct mat *result_p) { 
    if((m1_p->row == m2_p->row) && (m1_p->col == m2_p->col))
    {
        int row = m1_p->row;
        int col = m1_p->col;
        result_p->row = row;
        result_p->col = col;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                result_p->value[i][j] = m1_p->value[i][j] +m2_p->value[i][j];
            }
        }
    }
    

}
void mul_mat(const struct mat *m1_p, const struct mat *m2_p, struct mat *result_p) {
    if((m1_p->row == m2_p->col) && (m1_p->col == m2_p->row))
    {
        int row = m1_p->row;
        int col = m2_p->col;
        result_p->row = row;
        result_p->col = col;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                result_p->value[i][j] = 0;
                for (int k =0 ; k < m2_p->row ; k++)
                { 
                    result_p->value[i][j] = m1_p->value[i][k] *m2_p->value[k][j] +result_p->value[i][j];
                }
            }
        }
    }
    
}