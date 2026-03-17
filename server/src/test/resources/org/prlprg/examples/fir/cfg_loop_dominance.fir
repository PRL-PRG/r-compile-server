fun main() {
  () --> I { reg counter0:I, reg counter1:I, reg counter2:I, reg cond:L, reg condBool:B, reg limit:I |
    counter0 = 0;
    limit = 10;
    goto LOOP(counter0);
  LOOP(counter1):
    cond = `<`< I,I --> L >(counter1, limit);
    condBool = naToFalse< L --> B >(cond);
    if condBool then BODY() else EXIT();
  BODY():
    counter2 = `+`< I,I --> I >(counter1, 1);
    goto LOOP(counter2);
  EXIT():
    return counter1;
  }
}