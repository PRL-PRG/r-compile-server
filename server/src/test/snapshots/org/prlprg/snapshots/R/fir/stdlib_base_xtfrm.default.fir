fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `xtfrm.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_numeric:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg unclass:cls, reg r5:V, reg r6:V, reg as_vector:cls, reg rank:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r8:V, reg p1:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg y:*, reg y1:V, reg is_numeric1:cls, reg r13:V, reg r14:V, reg c1:L, reg c2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg c6:L, reg r16:V, reg y2:*, reg y3:V, reg length:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg c9:L, reg r21:V, reg r22:V, reg x7:*, reg x8:V, reg length1:cls, reg r23:V, reg r24:V, reg c10:L, reg c13:L, reg c14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg c19:L, reg c20:L, reg r26:V, reg x9:*, reg x10:V, reg inherits:cls, reg r27:V, reg r28:V, reg c21:L, reg c22:V, reg c25:L, reg c26:V, reg c28:L, reg stop:cls, reg r29:V, reg y4:*, reg y5:V |
    mkenv;
    st x = x;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    c = `as.logical`(r1);
    if c then L16() else L1();
  L12():
    x1 = ld x;
    check L14() else D0();
  L13():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    as_vector = ldf `as.vector`;
    check L22() else D4();
  L3(r6):
    st y = r6;
    sym2 = ldf `is.numeric`;
    base2 = ldf `is.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L14():
    x2 = force? x1;
    checkMissing(x2);
    is_numeric = ldf `is.numeric` in base;
    r2 = dyn is_numeric(x2);
    check L15() else D1();
  L16():
    sym1 = ldf unclass;
    base1 = ldf unclass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  D1():
    deopt 5 [r2];
  D4():
    deopt 13 [];
  L2(r4):
    goto L3(r4);
  L4(r12):
    r14 = `!`(r12);
    c1 = `as.logical`(r14);
    if c1 then L5(c1) else L28();
  L15():
    goto L0(r2);
  L17():
    x3 = ld x;
    check L19() else D2();
  L18():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  L22():
    p1 = prom<V +>{
      rank = ldf rank;
      p = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r8 = dyn rank[, `ties.method`, `na.last`](p, "min", "keep");
      return r8;
    };
    r10 = dyn as_vector(p1);
    check L23() else D5();
  L24():
    y = ld y;
    check L26() else D6();
  L25():
    r11 = dyn base2(<sym y>);
    goto L4(r11);
  D2():
    deopt 8 [x3];
  D5():
    deopt 15 [r10];
  D6():
    deopt 19 [y];
  L5(c2):
    c28 = `as.logical`(c2);
    if c28 then L44() else L10();
  L19():
    x4 = force? x3;
    checkMissing(x4);
    unclass = ldf unclass in base;
    r5 = dyn unclass(x4);
    check L20() else D3();
  L23():
    goto L3(r10);
  L26():
    y1 = force? y;
    checkMissing(y1);
    is_numeric1 = ldf `is.numeric` in base;
    r13 = dyn is_numeric1(y1);
    check L27() else D7();
  L28():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  D3():
    deopt 11 [r5];
  D7():
    deopt 22 [r13];
  L6(c6, r16):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L33() else L34();
  L10():
    goto L11();
  L11():
    y4 = ld y;
    check L48() else D16();
  L20():
    goto L2(r5);
  L27():
    goto L4(r13);
  L29():
    y2 = ld y;
    check L31() else D8();
  L30():
    r15 = dyn base3(<sym y>);
    goto L6(c1, r15);
  L44():
    stop = ldf stop;
    check L45() else D14();
  D8():
    deopt 26 [c1, y2];
  D14():
    deopt 48 [];
  D16():
    deopt 53 [y4];
  L7(c9, r21, r22):
    r24 = `!=`(r21, r22);
    c10 = `as.logical`(r24);
    if c10 then L37() else L8(c9, c10);
  L31():
    y3 = force? y2;
    checkMissing(y3);
    length = ldf length in base;
    r17 = dyn length(y3);
    check L32() else D9();
  L33():
    x7 = ld x;
    check L35() else D10();
  L34():
    r20 = dyn base4(<sym x>);
    goto L7(c6, r16, r20);
  L45():
    r29 = dyn stop("cannot xtfrm 'x'");
    check L46() else D15();
  L48():
    y5 = force? y4;
    checkMissing(y5);
    popenv;
    return y5;
  D9():
    deopt 29 [c1, r17];
  D10():
    deopt 31 [c6, r16, x7];
  D15():
    deopt 50 [r29];
  L8(c13, c14):
    c25 = `as.logical`(c14);
    c26 = `||`(c13, c25);
    goto L5(c26);
  L32():
    goto L6(c1, r17);
  L35():
    x8 = force? x7;
    checkMissing(x8);
    length1 = ldf length in base;
    r23 = dyn length1(x8);
    check L36() else D11();
  L37():
    sym5 = ldf inherits;
    base5 = ldf inherits in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L38() else L39();
  L46():
    goto L11();
  D11():
    deopt 34 [c6, r16, r23];
  L9(c19, c20, r26):
    r28 = `!`(r26);
    c21 = `as.logical`(r28);
    c22 = `&&`(c20, c21);
    goto L8(c19, c22);
  L36():
    goto L7(c6, r16, r23);
  L38():
    x9 = ld x;
    check L40() else D12();
  L39():
    r25 = dyn base5(<sym x>, "data.frame");
    goto L9(c9, c10, r25);
  D12():
    deopt 38 [c9, c10, x9];
  L40():
    x10 = force? x9;
    checkMissing(x10);
    inherits = ldf inherits in base;
    r27 = dyn inherits(x10, "data.frame", FALSE);
    check L41() else D13();
  D13():
    deopt 43 [c9, c10, r27];
  L41():
    goto L9(c9, c10, r27);
  }
}