fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `as.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg is_factor:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg x3:*, reg x4:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x5:*, reg x6:V, reg c1:L, reg r4:V, reg c2:L, reg c4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c7:L, reg r6:V, reg x7:*, reg x8:V, reg c8:L, reg c9:L, reg c10:V, reg c12:L, reg sort_int:cls, reg unique_default:cls, reg x9:*, reg x10:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x11:*, reg x12:V, reg levels:*, reg levels1:V, reg match:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg levels2:*, reg levels3:V, reg as_character:cls, reg r16:V, reg l:*, reg levels__:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg x13:*, reg x14:V, reg names:cls, reg r22:V, reg c13:V, reg r23:V, reg c14:L, reg nx:*, reg nx1:V, reg l1:*, reg names__:cls, reg r24:V, reg l2:*, reg class__:cls, reg r25:V, reg f:*, reg f1:V, reg factor:cls, reg x15:*, reg x16:V, reg p3:p(V +), reg r27:V |
    mkenv;
    st x = x;
    is_factor = ldf `is.factor`;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_factor(p);
    check L12() else D1();
  D1():
    deopt 3 [r1];
  L12():
    c = `as.logical`(r1);
    if c then L13() else L0();
  L0():
    sym = ldf `is.object`;
    base = ldf `is.object` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L13():
    x3 = ld x;
    check L14() else D2();
  D2():
    deopt 4 [x3];
  L1(r3):
    r4 = `!`(r3);
    c2 = `as.logical`(r4);
    if c2 then L19() else L2(c2);
  L14():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L16():
    x5 = ld x;
    check L18() else D3();
  L17():
    r2 = dyn base(<sym x>);
    goto L1(r2);
  D3():
    deopt 7 [x5];
  L2(c4):
    c12 = `as.logical`(c4);
    if c12 then L24() else L4();
  L18():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.object`(x6);
    goto L1(c1);
  L19():
    sym1 = ldf `is.integer`;
    base1 = ldf `is.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L3(c7, r6):
    c9 = `as.logical`(r6);
    c10 = `&&`(c7, c9);
    goto L2(c10);
  L4():
    factor = ldf factor;
    check L53() else D22();
  L20():
    x7 = ld x;
    check L22() else D4();
  L21():
    r5 = dyn base1(<sym x>);
    goto L3(c2, r5);
  L24():
    sort_int = ldf `sort.int`;
    check L25() else D5();
  D4():
    deopt 12 [c2, x7];
  D5():
    deopt 17 [];
  D22():
    deopt 72 [];
  L22():
    x8 = force? x7;
    checkMissing(x8);
    c8 = `is.integer`(x8);
    goto L3(c2, c8);
  L25():
    p2 = prom<V +>{
      unique_default = ldf `unique.default`;
      p1 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      r8 = dyn unique_default(p1);
      return r8;
    };
    r10 = dyn sort_int(p2);
    check L26() else D6();
  L53():
    p3 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r27 = dyn factor(p3);
    check L54() else D23();
  D6():
    deopt 19 [r10];
  D23():
    deopt 74 [r27];
  L26():
    st levels = r10;
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L54():
    popenv;
    return r27;
  L5(r12):
    st f = r12;
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L27():
    x11 = ld x;
    check L29() else D7();
  L28():
    r11 = dyn base2(<sym x>, <sym levels>);
    goto L5(r11);
  D7():
    deopt 23 [x11];
  L6(r15):
    l = ld f;
    levels__ = ldf `levels<-`;
    check L36() else D12();
  L29():
    x12 = force? x11;
    checkMissing(x12);
    levels = ld levels;
    check L30() else D8();
  L32():
    levels2 = ld levels;
    check L34() else D10();
  L33():
    r14 = dyn base3(<sym levels>);
    goto L6(r14);
  D8():
    deopt 25 [levels];
  D10():
    deopt 34 [levels2];
  D12():
    deopt 39 [r15, l, r15];
  L30():
    levels1 = force? levels;
    checkMissing(levels1);
    match = ldf match in base;
    r13 = dyn match(x12, levels1, NA_INT, NULL);
    check L31() else D9();
  L34():
    levels3 = force? levels2;
    checkMissing(levels3);
    as_character = ldf `as.character` in base;
    r16 = dyn as_character(levels3);
    check L35() else D11();
  L36():
    r17 = dyn levels__(l, NULL, r15);
    check L37() else D13();
  D9():
    deopt 30 [r13];
  D11():
    deopt 37 [r16];
  D13():
    deopt 41 [r15, r17];
  L31():
    goto L5(r13);
  L35():
    goto L6(r16);
  L37():
    st f = r17;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L7(r19):
    r23 = `!`(r19);
    c14 = `as.logical`(r23);
    if c14 then L44() else L9();
  L38():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L40() else L41();
  L39():
    r18 = dyn base4(<lang `<-`(nx, names(x))>);
    goto L7(r18);
  L8(r21):
    st nx = r21;
    c13 = `==`(r21, NULL);
    goto L7(c13);
  L9():
    goto L10();
  L10():
    l2 = ld f;
    class__ = ldf `class<-`;
    check L49() else D19();
  L40():
    x13 = ld x;
    check L42() else D14();
  L41():
    r20 = dyn base5(<sym x>);
    goto L8(r20);
  L44():
    nx = ld nx;
    check L45() else D16();
  D14():
    deopt 46 [x13];
  D16():
    deopt 53 [nx];
  D19():
    deopt 65 ["factor", l2, "factor"];
  L42():
    x14 = force? x13;
    checkMissing(x14);
    names = ldf names in base;
    r22 = dyn names(x14);
    check L43() else D15();
  L45():
    nx1 = force? nx;
    checkMissing(nx1);
    l1 = ld f;
    names__ = ldf `names<-`;
    check L46() else D17();
  L49():
    r25 = dyn class__(l2, NULL, "factor");
    check L50() else D20();
  D15():
    deopt 49 [r22];
  D17():
    deopt 56 [nx1, l1, nx1];
  D20():
    deopt 67 ["factor", r25];
  L43():
    goto L8(r22);
  L46():
    r24 = dyn names__(l1, NULL, nx1);
    check L47() else D18();
  L50():
    st f = r25;
    f = ld f;
    check L51() else D21();
  D18():
    deopt 58 [nx1, r24];
  D21():
    deopt 69 [f];
  L47():
    st f = r24;
    goto L10();
  L51():
    f1 = force? f;
    checkMissing(f1);
    popenv;
    return f1;
  }
}