#? noMain
fun f(x) {
  (reg x:p(I -)@!) --> I { reg r:I |
    r = force x;
    return r;
  }
}

fun g(x, cond) {
  (reg x:p(I -)@!, reg cond:L) --> I { reg r:I, reg r2:I |
    if cond then L1() else L2();
  L1():
    r = force x;
    return r;
  L2():
    r2 = force x;
    return r2;
  }
}
