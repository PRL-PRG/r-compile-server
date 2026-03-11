fun main() {
  () --> I { reg counter0:I, reg counter1:I, reg counter2:I, reg cond:B, reg limit:I |
    counter0 = 0;
    limit = 10;
    goto LOOP(counter0);
  LOOP(counter1):
    cond = `<`.1(counter1, limit);
    if cond then BODY() else EXIT();
  BODY():
    counter2 = `+`.1(counter1, 1);
    goto LOOP(counter2);
  EXIT():
    return counter1;
  }
}