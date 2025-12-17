fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.expand_dependency_type_spec` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg identical:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg identical1:cls, reg r8:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg c3:cls, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg x5:*, reg x6:V, reg identical2:cls, reg r14:V, reg c4:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg r16:V, reg c5:cls, reg r17:V, reg x7:*, reg x8:V |
    mkenv;
    st x = x;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    c = `as.logical`(r1);
    if c then L13() else L1();
  L9():
    x1 = ld x;
    check L11() else D0();
  L10():
    r = dyn base(<sym x>, "strong");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L11():
    x2 = force? x1;
    checkMissing(x2);
    identical = ldf identical in base;
    r2 = dyn identical(x2, "strong", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L12() else D1();
  L13():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D1():
    deopt 13 [r2];
  L2(r4):
    popenv;
    return r4;
  L3(r7):
    c2 = `as.logical`(r7);
    if c2 then L22() else L4();
  L12():
    goto L0(r2);
  L14():
    c1 = ldf c in base;
    r5 = dyn c1("Depends", "Imports", "LinkingTo");
    check L16() else D2();
  L15():
    r3 = dyn base1("Depends", "Imports", "LinkingTo");
    goto L2(r3);
  L18():
    x3 = ld x;
    check L20() else D3();
  L19():
    r6 = dyn base2(<sym x>, "most");
    goto L3(r6);
  D2():
    deopt 20 [r5];
  D3():
    deopt 23 [x3];
  L4():
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L27() else L28();
  L16():
    goto L2(r5);
  L20():
    x4 = force? x3;
    checkMissing(x4);
    identical1 = ldf identical in base;
    r8 = dyn identical1(x4, "most", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L21() else D4();
  L22():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  D4():
    deopt 34 [r8];
  L5(r10):
    popenv;
    return r10;
  L6(r13):
    c4 = `as.logical`(r13);
    if c4 then L31() else L7();
  L21():
    goto L3(r8);
  L23():
    c3 = ldf c in base;
    r11 = dyn c3("Depends", "Imports", "LinkingTo", "Suggests");
    check L25() else D5();
  L24():
    r9 = dyn base3("Depends", "Imports", "LinkingTo", "Suggests");
    goto L5(r9);
  L27():
    x5 = ld x;
    check L29() else D6();
  L28():
    r12 = dyn base4(<sym x>, "all");
    goto L6(r12);
  D5():
    deopt 42 [r11];
  D6():
    deopt 45 [x5];
  L7():
    x7 = ld x;
    check L36() else D9();
  L25():
    goto L5(r11);
  L29():
    x6 = force? x5;
    checkMissing(x6);
    identical2 = ldf identical in base;
    r14 = dyn identical2(x6, "all", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L30() else D7();
  L31():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L32() else L33();
  D7():
    deopt 56 [r14];
  D9():
    deopt 66 [x7];
  L8(r16):
    popenv;
    return r16;
  L30():
    goto L6(r14);
  L32():
    c5 = ldf c in base;
    r17 = dyn c5("Depends", "Imports", "LinkingTo", "Suggests", "Enhances");
    check L34() else D8();
  L33():
    r15 = dyn base5("Depends", "Imports", "LinkingTo", "Suggests", "Enhances");
    goto L8(r15);
  L36():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  D8():
    deopt 65 [r17];
  L34():
    goto L8(r17);
  }
}