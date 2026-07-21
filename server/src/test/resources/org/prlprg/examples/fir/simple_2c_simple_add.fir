fun main() {
  () --> v1(I) {
    sum: I = `+`< I,I --> I >(40, 2);
    sumu: v1(I) = box< I --> v1(I) >(sum);
    return sumu;
  }
}
