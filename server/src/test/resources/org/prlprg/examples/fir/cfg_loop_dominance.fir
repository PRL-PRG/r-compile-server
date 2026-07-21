fun main() {
  () --> v1(I) {
    goto LOOP(0);
  LOOP(counter1: I):
    cond: L = `<`< I,I --> L >(counter1, 10);
    condBool: B = naToFalse< L --> B >(cond);
    if condBool then BODY() else EXIT();
  EXIT():
    counter1u: v1(I) = box< I --> v1(I) >(counter1);
    return counter1u;
  BODY():
    counter2: I = `+`< I,I --> I >(counter1, 1);
    goto LOOP(counter2);
  }
}
