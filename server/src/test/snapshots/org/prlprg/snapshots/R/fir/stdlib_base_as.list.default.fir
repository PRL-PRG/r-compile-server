fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.list.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg typeof:cls, reg r2:V, reg r3:V, reg c:L, reg x3:*, reg x4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x5:*, reg x6:V, reg as_vector:cls, reg r6:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf typeof;
    base = ldf typeof in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `==`(r1, "list");
    c = `as.logical`(r3);
    if c then L7() else L1();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    typeof = ldf typeof in base;
    r2 = dyn typeof(x2);
    check L6() else D1();
  L7():
    x3 = ld x;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [x3];
  L2(r5):
    popenv;
    return r5;
  L6():
    goto L0(r2);
  L8():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L10():
    x5 = ld x;
    check L12() else D3();
  L11():
    r4 = dyn base1(<lang as.vector(x, "list")>);
    goto L2(r4);
  D3():
    deopt 12 [x5];
  L12():
    x6 = force? x5;
    checkMissing(x6);
    as_vector = ldf `as.vector` in base;
    r6 = dyn as_vector(x6, "list");
    check L13() else D4();
  D4():
    deopt 16 [r6];
  L13():
    goto L2(r6);
  }
}