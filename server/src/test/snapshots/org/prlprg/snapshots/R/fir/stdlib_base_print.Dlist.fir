fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `print.Dlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_list:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg x3:*, reg x4:V, reg is_matrix:cls, reg r6:V, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c14:L, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg c17:L, reg r11:V, reg x5:*, reg x6:V, reg names:cls, reg r12:V, reg c18:V, reg c19:L, reg c20:V, reg c22:L, reg NextMethod:cls, reg r13:V, reg cat:cls, reg formatDL:cls, reg x7:*, reg x8:V, reg p:p(V +), reg ddd1:dots?, reg r17:V, reg p1:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg x9:*, reg x10:V, reg invisible:cls, reg r22:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L13() else L1(c);
  L9():
    x1 = ld x;
    check L11() else D0();
  L10():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L19() else L3(c9);
  L11():
    x2 = force? x1;
    checkMissing(x2);
    is_list = ldf `is.list` in base;
    r2 = dyn is_list(x2);
    check L12() else D1();
  L13():
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D1():
    deopt 5 [r2];
  L2(c5, r5):
    r7 = `!`(r5);
    c6 = `as.logical`(r7);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3(c11):
    c22 = `as.logical`(c11);
    if c22 then L27() else L6();
  L12():
    goto L0(r2);
  L14():
    x3 = ld x;
    check L16() else D2();
  L15():
    r4 = dyn base1(<sym x>);
    goto L2(c, r4);
  L19():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  D2():
    deopt 9 [c, x3];
  L4(c14, r9):
    c19 = `as.logical`(r9);
    c20 = `&&`(c14, c19);
    goto L3(c20);
  L6():
    cat = ldf cat;
    check L32() else D8();
  L16():
    x4 = force? x3;
    checkMissing(x4);
    is_matrix = ldf `is.matrix` in base;
    r6 = dyn is_matrix(x4);
    check L17() else D3();
  L20():
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L21():
    r8 = dyn base2(<lang names(x)>);
    goto L4(c9, r8);
  L27():
    NextMethod = ldf NextMethod;
    check L28() else D6();
  D3():
    deopt 12 [c, r6];
  D6():
    deopt 25 [];
  D8():
    deopt 31 [];
  L5(c17, r11):
    c18 = `==`(r11, NULL);
    goto L4(c17, c18);
  L17():
    goto L2(c, r6);
  L22():
    x5 = ld x;
    check L24() else D4();
  L23():
    r10 = dyn base3(<sym x>);
    goto L5(c9, r10);
  L28():
    r13 = dyn NextMethod();
    check L29() else D7();
  L32():
    p1 = prom<V +>{
      formatDL = ldf formatDL;
      p = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      ddd1 = ld `...`;
      r17 = dyn formatDL[, `...`](p, ddd1);
      return r17;
    };
    r19 = dyn cat[, sep](p1, "\n");
    check L33() else D9();
  D4():
    deopt 18 [c9, x5];
  D7():
    deopt 26 [r13];
  D9():
    deopt 35 [r19];
  L24():
    x6 = force? x5;
    checkMissing(x6);
    names = ldf names in base;
    r12 = dyn names(x6);
    check L25() else D5();
  L29():
    popenv;
    return r13;
  L33():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  D5():
    deopt 21 [c9, r12];
  L8(r21):
    popenv;
    return r21;
  L25():
    goto L5(c9, r12);
  L34():
    x9 = ld x;
    check L36() else D10();
  L35():
    r20 = dyn base4(<sym x>);
    goto L8(r20);
  D10():
    deopt 38 [x9];
  L36():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r22 = dyn invisible(x10);
    check L37() else D11();
  D11():
    deopt 41 [r22];
  L37():
    goto L8(r22);
  }
}