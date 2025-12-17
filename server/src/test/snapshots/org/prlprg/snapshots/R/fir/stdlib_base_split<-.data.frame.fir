fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2200846310;
    st `.data.frame` = r;
    st split = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2200846310(x, f, drop, `...`, value) {
  (reg x:*, reg f:*, reg drop:*, reg ddd:dots, reg value:*) -+> V { var x:*, var f:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var `...`:dots?, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg f1:*, reg f2:V, reg inherits:cls, reg r2:V, reg c:L, reg eval:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg __:cls, reg r5:V, reg r6:cls, reg f3:*, reg f4:V, reg p:p(V +), reg r8:V, reg attr:cls, reg r9:V, reg p1:p(V +), reg x1:*, reg x2:V, reg p2:p(V +), reg environment:cls, reg f5:*, reg f6:V, reg p3:p(V +), reg r13:V, reg p4:p(V +), reg r15:V, reg split:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg nrow:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg r20:V, reg r21:I, reg p6:p(V +), reg f7:*, reg f8:V, reg p7:p(V +), reg drop1:*, reg drop2:V, reg p8:p(V +), reg ddd1:dots?, reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg value1:*, reg value2:V, reg length:cls, reg r28:V, reg ix:*, reg ix1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x5:V, reg j:*, reg j1:V, reg n:*, reg n1:V, reg __1:cls, reg r29:V, reg r30:V, reg value3:*, reg value4:V, reg c2:L, reg i6:I, reg value6:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg j2:*, reg j3:V, reg __2:cls, reg r31:V, reg l1:*, reg c3:L, reg i10:I, reg dx3:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx5:V, reg i12:I, reg dx7:V, reg i13:*, reg i14:V, reg ___:cls, reg r32:V, reg x6:*, reg x7:V |
    mkenv;
    st x = x;
    st f = f;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    st `...` = ddd;
    st value = value;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r1):
    c = `as.logical`(r1);
    if c then L13() else L2();
  L9():
    f1 = ld f;
    check L11() else D0();
  L10():
    r = dyn base(<sym f>, "formula");
    goto L1(r);
  D0():
    deopt 2 [f1];
  L2():
    goto L3();
  L3():
    split = ldf split;
    check L17() else D4();
  L11():
    f2 = force? f1;
    checkMissing(f2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(f2, "formula", FALSE);
    check L12() else D1();
  L13():
    eval = ldf eval;
    check L14() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 18 [];
  L12():
    goto L1(r2);
  L14():
    p1 = prom<V +>{
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      __ = ldf `::`;
      r5 = dyn __("stats", "terms");
      checkFun.0(r5);
      r6 = r5 as cls;
      p = prom<V +>{
        f3 = ld f;
        f4 = force? f3;
        checkMissing(f4);
        return f4;
      };
      r8 = dyn r6(p);
      attr = ldf attr in base;
      r9 = dyn attr(r8, "variables");
      goto L0(r9);
    L2():
      r3 = dyn base1(<lang `::`(stats, terms)(f)>, "variables");
      goto L0(r3);
    };
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p4 = prom<V +>{
      environment = ldf environment;
      p3 = prom<V +>{
        f5 = ld f;
        f6 = force? f5;
        checkMissing(f6);
        return f6;
      };
      r13 = dyn environment(p3);
      return r13;
    };
    r15 = dyn eval(p1, p2, p4);
    check L15() else D3();
  L17():
    p6 = prom<V +>{
      sym2 = ldf seq_len;
      base2 = ldf seq_len in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      nrow = ldf nrow;
      p5 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r20 = dyn nrow(p5);
      r21 = seq_len(r20);
      goto L0(r21);
    L2():
      r17 = dyn base2(<lang nrow(x)>);
      goto L0(r17);
    };
    p7 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    p8 = prom<V +>{
      drop1 = ld drop;
      drop2 = force? drop1;
      checkMissing(drop2);
      return drop2;
    };
    ddd1 = ld `...`;
    r25 = dyn split[, , drop, `...`](p6, p7, p8, ddd1);
    check L18() else D5();
  D3():
    deopt 13 [r15];
  D5():
    deopt 24 [r25];
  L15():
    st f = r15;
    goto L3();
  L18():
    st ix = r25;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L4(r27):
    st n = r27;
    st j = 0.0;
    ix = ld ix;
    check L23() else D8();
  L19():
    value1 = ld value;
    check L21() else D6();
  L20():
    r26 = dyn base3(<sym value>);
    goto L4(r26);
  D6():
    deopt 28 [value1];
  D8():
    deopt 36 [ix];
  L21():
    value2 = force? value1;
    checkMissing(value2);
    length = ldf length in base;
    r28 = dyn length(value2);
    check L22() else D7();
  L23():
    ix1 = force? ix;
    checkMissing(ix1);
    s = toForSeq(ix1);
    l = length(s);
    i = 0;
    goto L5(i);
  D7():
    deopt 31 [r28];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L24() else L8();
  L22():
    goto L4(r28);
  L8():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    j = ld j;
    check L25() else D9();
  L24():
    x6 = ld x;
    check L37() else D15();
  D9():
    deopt 39 [i2, j];
  D15():
    deopt 63 [x6];
  L25():
    j1 = force? j;
    checkMissing(j1);
    n = ld n;
    check L26() else D10();
  L37():
    x7 = force? x6;
    checkMissing(x7);
    popenv;
    return x7;
  D10():
    deopt 41 [i2, n];
  L26():
    n1 = force? n;
    checkMissing(n1);
    __1 = ldf `%%` in base;
    r29 = dyn __1(j1, n1);
    check L27() else D11();
  D11():
    deopt 44 [i2, r29];
  L27():
    r30 = `+`(r29, 1.0);
    st j = r30;
    value3 = ld value;
    check L28() else D12();
  D12():
    deopt 48 [i2, value3];
  L28():
    value4 = force? value3;
    checkMissing(value4);
    c2 = `is.object`(value4);
    if c2 then L29() else L30(i2, value4);
  L6(i8, dx1):
    l1 = ld x;
    c3 = `is.object`(l1);
    if c3 then L33() else L34(i8, dx1, l1);
  L29():
    dr = tryDispatchBuiltin.1("[[", value4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(i2, dr);
  L30(i6, value6):
    j2 = ld j;
    check L32() else D13();
  D13():
    deopt 50 [i6, value6, j2];
  L7(i12, dx7):
    st x = dx7;
    goto L5(i12);
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(i2, dx);
  L32():
    j3 = force? j2;
    __2 = ldf `[[` in base;
    r31 = dyn __2(value6, j3);
    goto L6(i6, r31);
  L33():
    dr2 = tryDispatchBuiltin.0("[<-", l1, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L35() else L34(i8, dx1, dr2);
  L34(i10, dx3, l3):
    i13 = ld i;
    check L36() else D14();
  D14():
    deopt 54 [i10, dx3, l3, dx1, i13];
  L35():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L7(i8, dx5);
  L36():
    i14 = force? i13;
    ___ = ldf `[<-` in base;
    r32 = dyn ___(l1, i14, <missing>, dx1);
    goto L7(i10, r32);
  }
}