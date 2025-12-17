fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st setwd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg dir1:*, reg dir2:V, reg setwd:cls, reg r2:V |
    mkenv;
    st dir = dir;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    dir1 = ld dir;
    check L3() else D0();
  L2():
    r = dyn base(<lang setwd(dir)>);
    goto L0(r);
  D0():
    deopt 2 [dir1];
  L3():
    dir2 = force? dir1;
    checkMissing(dir2);
    setwd = ldf setwd in base;
    r2 = dyn setwd(dir2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}