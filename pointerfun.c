int main() {
   
    int val, var = 1;
    printf("%d %d\n", &val, &var);
    int* p = &val;
    printf("%d %d %d\n", p, *p, &p);
    p = 2;
    printf("%d %d", p, val);
   
    return 0;
}