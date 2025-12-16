fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `row.names.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg as_character:cls, reg r5:V |
    mkenv;
    st x = x;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang attr(x, "row.names")>);
    goto L0(r);
  L1(r3):
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(r3);
    check L8() else D2();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym x>, "row.names");
    goto L1(r2);
  D0():
    deopt 4 [x1];
  D2():
    deopt 10 [r5];
  L6():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r4 = dyn attr(x2, "row.names");
    check L7() else D1();
  L8():
    goto L0(r5);
  D1():
    deopt 8 [r4];
  L7():
    goto L1(r4);
  }
}