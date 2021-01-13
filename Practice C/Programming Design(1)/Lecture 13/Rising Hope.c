int rising_hope(char *R) {

    int count = 0;
    for(int i = 0; i < 1005; i++)
    {
        switch(R[i])
        {
            case 'P':
                count++;
                break;
            case 'N':
                count--;
                break;
            default:
                break;
        }

        if(R[i] == NULL)
            break;
    }
    return count;
}