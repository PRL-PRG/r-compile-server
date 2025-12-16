fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `mtfrm.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg as_character:cls, reg r4:V, reg length:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg length1:cls, reg r11:V, reg r12:V, reg c:L, reg stop:cls, reg r13:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L5():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r = dyn base(<lang `<-`(y, as.character(x))>);
    goto L0(r);
  L1(r3):
    st y = r3;
    length = ldf length in base;
    r5 = dyn length(r3);
    check L11() else D2();
  L2(r9, r10):
    r12 = `!=`(r9, r10);
    c = `as.logical`(r12);
    if c then L16() else L3();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  L12():
    x3 = ld x;
    check L14() else D3();
  L13():
    r8 = dyn base2(<sym x>);
    goto L2(r1, r8);
  D0():
    deopt 4 [x1];
  D2():
    deopt 10 [r5];
  D3():
    deopt 12 [r1, x3];
  L3():
    goto L4();
  L4():
    y = ld y;
    check L20() else D7();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(x2);
    check L10() else D1();
  L11():
    goto L0(r5);
  L14():
    x4 = force? x3;
    checkMissing(x4);
    length1 = ldf length in base;
    r11 = dyn length1(x4);
    check L15() else D4();
  L16():
    stop = ldf stop;
    check L17() else D5();
  D1():
    deopt 7 [r4];
  D4():
    deopt 15 [r1, r11];
  D5():
    deopt 18 [];
  D7():
    deopt 23 [y];
  L10():
    goto L1(r4);
  L15():
    goto L2(r1, r11);
  L17():
    r13 = dyn stop("cannot mtfrm");
    check L18() else D6();
  L20():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D6():
    deopt 20 [r13];
  L18():
    goto L4();
  }
}