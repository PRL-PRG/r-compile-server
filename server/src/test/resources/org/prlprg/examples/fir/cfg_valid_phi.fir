fun main() {
  () -+> I { reg r:I, reg r2:I, reg r3:I |
    r = f< B -+> I >(TRUE);
    r2 = f< B -+> I >(FALSE);
    r3 = `+`< I,I --> I >(r, r2);
    return r3;
  }
}

fun f(cond) {
  (reg cond:B) -+> I { reg r:I, reg r1:I, reg r2:I, reg phi:I |
    r = 42;
    if cond then BB1() else BB2();
  BB1():
    r1 = 42;
    goto BB3(r1);
  BB2():
    r2 = 24;
    goto BB3(r2);
  BB3(phi):
    return phi;
  }
}