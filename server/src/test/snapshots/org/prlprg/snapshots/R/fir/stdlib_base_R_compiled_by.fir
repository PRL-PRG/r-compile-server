fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner560854305;
    st R_compiled_by = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner560854305() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg compilerVersion:cls, reg r2:V |
    mkenv;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    compilerVersion = ldf compilerVersion in base;
    r2 = dyn compilerVersion();
    check L3() else D0();
  L2():
    r = dyn base(<lang compilerVersion()>);
    goto L0(r);
  D0():
    deopt 3 [r2];
  L3():
    goto L0(r2);
  }
}