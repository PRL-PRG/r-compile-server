fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st assert_NULL_or_prob = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:V, reg r2:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c6:L, reg r4:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r5:V, reg r6:V, reg c7:L, reg c8:L, reg c9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c16:L, reg c17:L, reg r8:V, reg x5:*, reg x6:V, reg r9:V, reg x7:*, reg x8:V, reg r10:V, reg r11:V, reg any:cls, reg r12:V, reg c18:L, reg c19:V, reg c22:L, reg c23:V, reg c25:L, reg stop:cls, reg gettextf:cls, reg deparse1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg substitute:cls, reg r15:V, reg p:p(V +), reg r17:V, reg p1:p(V +), reg r19:V, reg p2:p(V +), reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg x9:*, reg x10:V, reg invisible:cls, reg r25:V |
    mkenv;
    st x = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L11() else L1(c1);
  L8():
    x1 = ld x;
    check L10() else D0();
  L9():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(c3):
    c25 = `as.logical`(c3);
    if c25 then L24() else L5();
  L10():
    x2 = force? x1;
    checkMissing(x2);
    c = `==`(x2, NULL);
    goto L0(c);
  L11():
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L2(c6, r4):
    r6 = `!`(r4);
    c7 = `as.logical`(r6);
    if c7 then L3(c6, c7) else L16();
  L5():
    goto L6();
  L6():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  L12():
    x3 = ld x;
    check L14() else D1();
  L13():
    r3 = dyn base1(<sym x>);
    goto L2(c1, r3);
  L24():
    stop = ldf stop;
    check L25() else D6();
  D1():
    deopt 7 [c1, x3];
  D6():
    deopt 27 [];
  L3(c8, c9):
    c22 = `as.logical`(c9);
    c23 = `&&`(c8, c22);
    goto L1(c23);
  L7(r24):
    popenv;
    return r24;
  L14():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r5 = dyn is_numeric(x4);
    check L15() else D2();
  L16():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L25():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        deparse1 = ldf deparse1;
        p = prom<V +>{
          sym3 = ldf substitute;
          base3 = ldf substitute in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r14):
          return r14;
        L1():
          substitute = ldf substitute in base;
          r15 = dyn substitute(<sym x>);
          goto L0(r15);
        L2():
          r13 = dyn base3(<sym x>);
          goto L0(r13);
        };
        r17 = dyn deparse1(p);
        return r17;
      };
      r19 = dyn gettextf("'%s' must be numeric in [0, 1]", p1);
      return r19;
    };
    r21 = dyn stop[, `call.`](p2, FALSE);
    check L26() else D7();
  L28():
    x9 = ld x;
    check L30() else D8();
  L29():
    r23 = dyn base4(<sym x>);
    goto L7(r23);
  D2():
    deopt 10 [c1, r5];
  D7():
    deopt 31 [r21];
  D8():
    deopt 36 [x9];
  L4(c16, c17, r8):
    c18 = `as.logical`(r8);
    c19 = `||`(c17, c18);
    goto L3(c16, c19);
  L15():
    goto L2(c1, r5);
  L17():
    x5 = ld x;
    check L19() else D3();
  L18():
    r7 = dyn base2(<lang `|`(`>`(0.0, x), `>`(x, 1.0))>);
    goto L4(c6, c7, r7);
  L26():
    goto L6();
  L30():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r25 = dyn invisible(x10);
    check L31() else D9();
  D3():
    deopt 15 [c6, c7, 0.0, x5];
  D9():
    deopt 39 [r25];
  L19():
    x6 = force? x5;
    checkMissing(x6);
    r9 = `>`(0.0, x6);
    x7 = ld x;
    check L20() else D4();
  L31():
    goto L7(r25);
  D4():
    deopt 17 [c6, c7, r9, x7];
  L20():
    x8 = force? x7;
    checkMissing(x8);
    r10 = `>`(x8, 1.0);
    r11 = `||`(r9, r10);
    any = ldf any in base;
    r12 = dyn any(r11);
    check L21() else D5();
  D5():
    deopt 23 [c6, c7, r12];
  L21():
    goto L4(c6, c7, r12);
  }
}