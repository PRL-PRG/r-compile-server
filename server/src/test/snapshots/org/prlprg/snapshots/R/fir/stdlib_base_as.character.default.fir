fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.character.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg as_vector:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang as.vector(x, "character")>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    as_vector = ldf `as.vector` in base;
    r2 = dyn as_vector(x2, "character");
    check L4() else D1();
  D1():
    deopt 6 [r2];
  L4():
    goto L0(r2);
  }
}