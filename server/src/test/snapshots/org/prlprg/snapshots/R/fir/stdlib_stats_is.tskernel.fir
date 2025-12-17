fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2649136551;
    st `is.tskernel` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2649136551(k) {
  (reg k:*) -+> V { var k:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg k1:*, reg k2:V, reg inherits:cls, reg r2:V |
    mkenv;
    st k = k;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    k1 = ld k;
    check L3() else D0();
  L2():
    r = dyn base(<sym k>, "tskernel");
    goto L0(r);
  D0():
    deopt 2 [k1];
  L3():
    k2 = force? k1;
    checkMissing(k2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(k2, "tskernel", FALSE);
    check L4() else D1();
  D1():
    deopt 7 [r2];
  L4():
    goto L0(r2);
  }
}