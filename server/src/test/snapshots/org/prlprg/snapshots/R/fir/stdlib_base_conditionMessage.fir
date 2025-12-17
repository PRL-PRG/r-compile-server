fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4061490079;
    st conditionMessage = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4061490079(c) {
  (reg c:*) -+> V { var c:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st c = c;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("conditionMessage");
    goto L0(r2);
  L2():
    r = dyn base("conditionMessage");
    goto L0(r);
  }
}