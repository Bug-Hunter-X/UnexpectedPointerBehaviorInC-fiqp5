int main() {
  int x = 10;
  int y;
  int *ptr = &x; 
  *ptr = 20;
  y = *ptr;
  printf("%d", y); //Prints 20
  *ptr = 30;
  printf("%d", x); // Prints 30 
  return 0; 
}