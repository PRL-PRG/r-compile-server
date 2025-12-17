fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg swiss:*, reg swiss1:V, reg c:L, reg swiss3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r6:V, reg __:cls, reg r7:V, reg x:*, reg x1:V, reg sort:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r9:V, reg sort1:cls, reg x4:*, reg x5:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg p3:p(V +), reg r15:V, reg sort2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg r18:V, reg c3:cls, reg r19:V, reg p4:p(V +), reg r21:V, reg sort3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg r24:V, reg c4:cls, reg r25:V, reg p5:p(V +), reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg c5:cls, reg r30:V, reg is_unsorted:cls, reg x6:*, reg x7:V, reg p6:p(V +), reg r32:V, reg is_unsorted1:cls, reg x8:*, reg x9:V, reg p7:p(V +), reg r34:V |
    mkenv;
    r = clos inner855828621;
    st sort = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    swiss = ld swiss;
    check L7() else D2();
  L3():
    require = ldf require;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 8 [swiss];
  L5():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L6() else D1();
  L7():
    swiss1 = force? swiss;
    checkMissing(swiss1);
    c = `is.object`(swiss1);
    if c then L9() else L10(swiss1);
  D1():
    deopt 7 [r4];
  L6():
    goto L0();
  L8(dx1):
    c1 = `is.object`(dx1);
    if c1 then L12() else L13(dx1);
  L9():
    dr = tryDispatchBuiltin.1("$", swiss1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(swiss3):
    r5 = `$`(swiss3, <sym Education>);
    goto L8(r5);
  L1(dx5):
    st x = dx5;
    x = ld x;
    check L15() else D3();
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L12():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(dr2);
  L13(dx3):
    r6 = `:`(1.0, 25.0);
    __ = ldf `[` in base;
    r7 = dyn __(dx3, r6);
    goto L1(r7);
  D3():
    deopt 17 [x];
  L14():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx4);
  L15():
    x1 = force? x;
    checkMissing(x1);
    sort = ldf sort;
    check L16() else D4();
  D4():
    deopt 20 [];
  L16():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r9 = dyn sort(p1);
    check L17() else D5();
  D5():
    deopt 22 [r9];
  L17():
    sort1 = ldf sort;
    check L18() else D6();
  D6():
    deopt 24 [];
  L18():
    p2 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c2 = ldf c in base;
      r13 = dyn c2(10.0, 15.0);
      goto L0(r13);
    L2():
      r11 = dyn base1(10.0, 15.0);
      goto L0(r11);
    };
    r15 = dyn sort1[, partial](p2, p3);
    check L19() else D7();
  D7():
    deopt 28 [r15];
  L19():
    sort2 = ldf sort;
    check L20() else D8();
  D8():
    deopt 30 [];
  L20():
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      r18 = `:`(2.0, 12.0);
      c3 = ldf c in base;
      r19 = dyn c3(<int 10, 9, 8, 7, 6, 5, 4, 3>, r18);
      goto L0(r19);
    L2():
      r16 = dyn base2(<lang `:`(10.0, 3.0)>, <lang `:`(2.0, 12.0)>);
      goto L0(r16);
    };
    r21 = dyn sort2[, method, `index.return`](p4, "shell", TRUE);
    check L21() else D9();
  D9():
    deopt 36 [r21];
  L21():
    sort3 = ldf sort;
    check L22() else D10();
  D10():
    deopt 38 [];
  L22():
    p5 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      r24 = `:`(2.0, 12.0);
      c4 = ldf c in base;
      r25 = dyn c4(<int 10, 9, 8, 7, 6, 5, 4, 3>, r24);
      goto L0(r25);
    L2():
      r22 = dyn base3(<lang `:`(10.0, 3.0)>, <lang `:`(2.0, 12.0)>);
      goto L0(r22);
    };
    r27 = dyn sort3[, method, `index.return`](p5, "quick", TRUE);
    check L23() else D11();
  D11():
    deopt 44 [r27];
  L23():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L24() else L25();
  L2(r29):
    st x = r29;
    is_unsorted = ldf `is.unsorted`;
    check L27() else D13();
  L24():
    c5 = ldf c in base;
    r30 = dyn c5(<int 1, 2, 3>, <int 3, 4, 5>, 10.0);
    check L26() else D12();
  L25():
    r28 = dyn base4(<lang `:`(1.0, 3.0)>, <lang `:`(3.0, 5.0)>, 10.0);
    goto L2(r28);
  D12():
    deopt 53 [r30];
  D13():
    deopt 56 [];
  L26():
    goto L2(r30);
  L27():
    p6 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r32 = dyn is_unsorted(p6);
    check L28() else D14();
  D14():
    deopt 58 [r32];
  L28():
    is_unsorted1 = ldf `is.unsorted`;
    check L29() else D15();
  D15():
    deopt 60 [];
  L29():
    p7 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    r34 = dyn is_unsorted1[, strictly](p7, TRUE);
    check L30() else D16();
  D16():
    deopt 64 [r34];
  L30():
    popenv;
    return r34;
  }
}
fun inner855828621(x, decreasing, `...`) {
  (reg x:*, reg decreasing:*, reg ddd:dots) -+> V { var x:*, var decreasing:*, reg decreasing_isMissing:L, reg decreasing_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg decreasing1:*, reg decreasing2:V, reg c:L, reg r2:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c6:L, reg r4:V, reg decreasing3:*, reg decreasing4:V, reg length:cls, reg r5:V, reg r6:V, reg c7:L, reg c8:V, reg c10:L, reg stop:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg UseMethod:cls, reg r11:V |
    mkenv;
    st x = x;
    decreasing_isMissing = missing.0(decreasing);
    if decreasing_isMissing then L0(FALSE) else L0(decreasing);
  L0(decreasing_orDefault):
    st decreasing = decreasing_orDefault;
    st `...` = ddd;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L2(c1) else L10();
  L7():
    decreasing1 = ld decreasing;
    check L9() else D0();
  L8():
    r = dyn base(<sym decreasing>);
    goto L1(r);
  D0():
    deopt 1 [decreasing1];
  L2(c2):
    c10 = `as.logical`(c2);
    if c10 then L16() else L4();
  L9():
    decreasing2 = force? decreasing1;
    checkMissing(decreasing2);
    c = `is.logical`(decreasing2);
    goto L1(c);
  L10():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L3(c6, r4):
    r6 = `!=`(r4, 1);
    c7 = `as.logical`(r6);
    c8 = `||`(c6, c7);
    goto L2(c8);
  L4():
    goto L5();
  L5():
    sym2 = ldf UseMethod;
    base2 = ldf UseMethod in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L11():
    decreasing3 = ld decreasing;
    check L13() else D1();
  L12():
    r3 = dyn base1(<sym decreasing>);
    goto L3(c1, r3);
  L16():
    stop = ldf stop;
    check L17() else D3();
  D1():
    deopt 7 [c1, decreasing3];
  D3():
    deopt 15 [];
  L6(r10):
    popenv;
    return r10;
  L13():
    decreasing4 = force? decreasing3;
    checkMissing(decreasing4);
    length = ldf length in base;
    r5 = dyn length(decreasing4);
    check L14() else D2();
  L17():
    r7 = dyn stop("'decreasing' must be a length-1 logical vector.\nDid you intend to set 'partial'?");
    check L18() else D4();
  L20():
    UseMethod = ldf UseMethod in base;
    r11 = dyn UseMethod("sort");
    goto L6(r11);
  L21():
    r9 = dyn base2("sort");
    goto L6(r9);
  D2():
    deopt 10 [c1, r5];
  D4():
    deopt 17 [r7];
  L14():
    goto L3(c1, r5);
  L18():
    goto L5();
  }
}