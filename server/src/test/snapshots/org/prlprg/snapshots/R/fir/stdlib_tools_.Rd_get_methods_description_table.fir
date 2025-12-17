fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_methods_description_table` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg matrix:cls, reg character:cls, reg r:V, reg p:p(V +), reg r2:V, reg _Rd_get_section:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg length:cls, reg r7:V, reg r8:V, reg c:L, reg y:*, reg y1:V, reg _Rd_get_section1:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg x7:*, reg x8:V, reg length1:cls, reg r15:V, reg r16:V, reg c1:L, reg y2:*, reg y3:V, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg RdTags:cls, reg x13:*, reg x14:V, reg p3:p(V +), reg r20:V, reg r21:V, reg __:cls, reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg x15:*, reg x16:V, reg length2:cls, reg r25:V, reg r26:V, reg c3:L, reg y4:*, reg y5:V, reg lapply:cls, reg x17:*, reg x18:V, reg c4:L, reg x20:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg lengths:cls, reg x21:*, reg x22:V, reg p4:p(V +), reg r30:V, reg r31:V, reg __1:cls, reg r32:V, reg p5:p(V +), reg sapply:*, reg sapply1:V, reg p6:p(V +), reg _Rd_deparse:*, reg _Rd_deparse1:V, reg p7:p(V +), reg r36:V, reg matrix1:cls, reg unlist:cls, reg x23:*, reg x24:V, reg p8:p(V +), reg r38:V, reg p9:p(V +), reg r40:V |
    mkenv;
    st x = x;
    matrix = ldf matrix;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    r2 = dyn matrix(p, 0, 2);
    check L11() else D1();
  D1():
    deopt 5 [r2];
  L11():
    st y = r2;
    _Rd_get_section = ldf `.Rd_get_section`;
    check L12() else D2();
  D2():
    deopt 8 [];
  L12():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r4 = dyn _Rd_get_section(p1, "Methods", FALSE);
    check L13() else D3();
  D3():
    deopt 12 [r4];
  L13():
    st x = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r6):
    r8 = `!`(r6);
    c = `as.logical`(r8);
    if c then L18() else L1();
  L14():
    x3 = ld x;
    check L16() else D4();
  L15():
    r5 = dyn base(<sym x>);
    goto L0(r5);
  D4():
    deopt 16 [x3];
  L1():
    _Rd_get_section1 = ldf `.Rd_get_section`;
    check L22() else D7();
  L16():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r7 = dyn length(x4);
    check L17() else D5();
  L18():
    y = ld y;
    check L19() else D6();
  D5():
    deopt 19 [r7];
  D6():
    deopt 21 [y];
  D7():
    deopt 27 [];
  L17():
    goto L0(r7);
  L19():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  L22():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r12 = dyn _Rd_get_section1(p2, "describe");
    check L23() else D8();
  D8():
    deopt 30 [r12];
  L23():
    st x = r12;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L3(r14):
    r16 = `!`(r14);
    c1 = `as.logical`(r16);
    if c1 then L28() else L4();
  L24():
    x7 = ld x;
    check L26() else D9();
  L25():
    r13 = dyn base1(<sym x>);
    goto L3(r13);
  D9():
    deopt 34 [x7];
  L4():
    x9 = ld x;
    check L32() else D12();
  L26():
    x8 = force? x7;
    checkMissing(x8);
    length1 = ldf length in base;
    r15 = dyn length1(x8);
    check L27() else D10();
  L28():
    y2 = ld y;
    check L29() else D11();
  D10():
    deopt 37 [r15];
  D11():
    deopt 39 [y2];
  D12():
    deopt 44 [x9];
  L27():
    goto L3(r15);
  L29():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  L32():
    x10 = force? x9;
    checkMissing(x10);
    c2 = `is.object`(x10);
    if c2 then L33() else L34(x10);
  L6(dx1):
    st x = dx1;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L33():
    dr = tryDispatchBuiltin.1("[", x10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(x12):
    RdTags = ldf RdTags;
    check L36() else D13();
  D13():
    deopt 47 [x12];
  L7(r24):
    r26 = `!`(r24);
    c3 = `as.logical`(r26);
    if c3 then L42() else L8();
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L36():
    p3 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r20 = dyn RdTags(p3);
    check L37() else D14();
  L38():
    x15 = ld x;
    check L40() else D15();
  L39():
    r23 = dyn base2(<sym x>);
    goto L7(r23);
  D14():
    deopt 49 [x12, r20];
  D15():
    deopt 56 [x15];
  L8():
    lapply = ldf lapply;
    check L46() else D18();
  L37():
    r21 = `==`(r20, "\\item");
    __ = ldf `[` in base;
    r22 = dyn __(x12, r21);
    goto L6(r22);
  L40():
    x16 = force? x15;
    checkMissing(x16);
    length2 = ldf length in base;
    r25 = dyn length2(x16);
    check L41() else D16();
  L42():
    y4 = ld y;
    check L43() else D17();
  D16():
    deopt 59 [r25];
  D17():
    deopt 61 [y4];
  D18():
    deopt 67 [];
  L41():
    goto L7(r25);
  L43():
    y5 = force? y4;
    checkMissing(y5);
    popenv;
    return y5;
  L46():
    p5 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c4 = `is.object`(x18);
      if c4 then L1() else L2(x18);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x18);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x20):
      lengths = ldf lengths;
      p4 = prom<V +>{
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        return x22;
      };
      r30 = dyn lengths(p4);
      r31 = `==`(r30, 2);
      __1 = ldf `[` in base;
      r32 = dyn __1(x20, r31);
      goto L0(r32);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p6 = prom<V +>{
      sapply = ld sapply;
      sapply1 = force? sapply;
      checkMissing(sapply1);
      return sapply1;
    };
    p7 = prom<V +>{
      _Rd_deparse = ld `.Rd_deparse`;
      _Rd_deparse1 = force? _Rd_deparse;
      checkMissing(_Rd_deparse1);
      return _Rd_deparse1;
    };
    r36 = dyn lapply(p5, p6, p7);
    check L47() else D19();
  D19():
    deopt 71 [r36];
  L47():
    st x = r36;
    matrix1 = ldf matrix;
    check L48() else D20();
  D20():
    deopt 74 [];
  L48():
    p9 = prom<V +>{
      unlist = ldf unlist;
      p8 = prom<V +>{
        x23 = ld x;
        x24 = force? x23;
        checkMissing(x24);
        return x24;
      };
      r38 = dyn unlist(p8);
      return r38;
    };
    r40 = dyn matrix1[, ncol, byrow](p9, 2, TRUE);
    check L49() else D21();
  D21():
    deopt 80 [r40];
  L49():
    popenv;
    return r40;
  }
}