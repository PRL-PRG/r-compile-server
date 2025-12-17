fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.MFclass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg is_ordered:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r5:V, reg c2:L, reg is_factor:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r9:V, reg c3:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg x7:*, reg x8:V, reg c4:L, reg c5:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg x9:*, reg x10:V, reg is_matrix:cls, reg r18:V, reg c6:L, reg c8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg c11:L, reg r20:V, reg x11:*, reg x12:V, reg is_numeric:cls, reg r21:V, reg c12:L, reg c13:V, reg c15:L, reg paste0:cls, reg ncol:cls, reg x13:*, reg x14:V, reg p2:p(V +), reg r23:V, reg p3:p(V +), reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg x15:*, reg x16:V, reg is_numeric1:cls, reg r30:V, reg c16:L |
    mkenv;
    st x = x;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L21() else L1();
  L18():
    x1 = ld x;
    check L20() else D0();
  L19():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    is_ordered = ldf `is.ordered`;
    check L24() else D1();
  L20():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.logical`(x2);
    goto L0(c);
  L21():
    popenv;
    return "logical";
  D1():
    deopt 10 [];
  L24():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r5 = dyn is_ordered(p);
    check L25() else D2();
  D2():
    deopt 12 [r5];
  L25():
    c2 = `as.logical`(r5);
    if c2 then L26() else L3();
  L3():
    is_factor = ldf `is.factor`;
    check L29() else D3();
  L26():
    popenv;
    return "ordered";
  D3():
    deopt 19 [];
  L29():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r9 = dyn is_factor(p1);
    check L30() else D4();
  D4():
    deopt 21 [r9];
  L30():
    c3 = `as.logical`(r9);
    if c3 then L31() else L5();
  L5():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L31():
    popenv;
    return "factor";
  L7(r13):
    c5 = `as.logical`(r13);
    if c5 then L37() else L8();
  L34():
    x7 = ld x;
    check L36() else D5();
  L35():
    r12 = dyn base1(<sym x>);
    goto L7(r12);
  D5():
    deopt 28 [x7];
  L8():
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L36():
    x8 = force? x7;
    checkMissing(x8);
    c4 = `is.character`(x8);
    goto L7(c4);
  L37():
    popenv;
    return "character";
  L10(r17):
    c6 = `as.logical`(r17);
    if c6 then L44() else L11(c6);
  L40():
    x9 = ld x;
    check L42() else D6();
  L41():
    r16 = dyn base2(<sym x>);
    goto L10(r16);
  D6():
    deopt 38 [x9];
  L11(c8):
    c15 = `as.logical`(c8);
    if c15 then L50() else L13();
  L42():
    x10 = force? x9;
    checkMissing(x10);
    is_matrix = ldf `is.matrix` in base;
    r18 = dyn is_matrix(x10);
    check L43() else D7();
  L44():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  D7():
    deopt 41 [r18];
  L12(c11, r20):
    c12 = `as.logical`(r20);
    c13 = `&&`(c11, c12);
    goto L11(c13);
  L13():
    sym4 = ldf `is.numeric`;
    base4 = ldf `is.numeric` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L43():
    goto L10(r18);
  L45():
    x11 = ld x;
    check L47() else D8();
  L46():
    r19 = dyn base3(<sym x>);
    goto L12(c6, r19);
  L50():
    paste0 = ldf paste0;
    check L51() else D10();
  D8():
    deopt 44 [c6, x11];
  D10():
    deopt 50 [];
  L15(r29):
    c16 = `as.logical`(r29);
    if c16 then L59() else L16();
  L47():
    x12 = force? x11;
    checkMissing(x12);
    is_numeric = ldf `is.numeric` in base;
    r21 = dyn is_numeric(x12);
    check L48() else D9();
  L51():
    p3 = prom<V +>{
      ncol = ldf ncol;
      p2 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        return x14;
      };
      r23 = dyn ncol(p2);
      return r23;
    };
    r25 = dyn paste0("nmatrix.", p3);
    check L52() else D11();
  L55():
    x15 = ld x;
    check L57() else D12();
  L56():
    r28 = dyn base4(<sym x>);
    goto L15(r28);
  D9():
    deopt 47 [c6, r21];
  D11():
    deopt 53 [r25];
  D12():
    deopt 59 [x15];
  L16():
    popenv;
    return "other";
  L48():
    goto L12(c6, r21);
  L52():
    popenv;
    return r25;
  L57():
    x16 = force? x15;
    checkMissing(x16);
    is_numeric1 = ldf `is.numeric` in base;
    r30 = dyn is_numeric1(x16);
    check L58() else D13();
  L59():
    popenv;
    return "numeric";
  D13():
    deopt 62 [r30];
  L58():
    goto L15(r30);
  }
}