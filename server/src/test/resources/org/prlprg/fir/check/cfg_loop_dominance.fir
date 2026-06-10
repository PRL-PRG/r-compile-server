fun main() {
  () --> I { reg counter0:I, reg counter1:I, reg counter2:I, reg cond:L, reg limit:I |
    counter0 = 0;
    limit = 10;
    goto LOOP(counter0);
  LOOP(counter1):
    cond = lt.0(counter1, limit);
    if cond then BODY() else EXIT();
  BODY():
    counter2 = add.0(counter1, 1);
    goto LOOP(counter2);
  EXIT():
    return counter1;
  }
}

fun lt(`...`) { (reg lhs:I, reg rhs:I) --> L { ... } }
fun add(`...`) { (reg lhs:I, reg rhs:I) --> I { ... } }