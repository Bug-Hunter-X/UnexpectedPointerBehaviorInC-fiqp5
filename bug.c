int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr; 
  printf("%d", y); //this will print 20
  *ptr = 30; 
  printf("%d", x); //this will print 30, not 20
  return 0; 
}