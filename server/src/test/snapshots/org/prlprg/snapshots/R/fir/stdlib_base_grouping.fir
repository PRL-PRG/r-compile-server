fun main() {
  () -+> V { reg r:cls, reg grouping:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg c2:cls, reg r11:V, reg p2:p(V +), reg r13:V, reg rbind:cls, reg x:*, reg x1:V, reg p3:p(V +), reg y:*, reg y1:V, reg p4:p(V +), reg z:*, reg z1:V, reg p5:p(V +), reg r17:V, reg c3:L, reg r19:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ii:*, reg ii1:V, reg __:cls, reg r20:V |
    mkenv;
    r = clos inner1246119658;
    st grouping = r;
    grouping = ldf grouping;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      st x = r2;
      invisible.0();
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(1.0, 1.0, <int 3, 2, 1>, <int 1, 2, 3, 4>, 3.0);
      goto L0(r3);
    L2():
      r1 = dyn base(1.0, 1.0, <lang `:`(3.0, 1.0)>, <lang `:`(1.0, 4.0)>, 3.0);
      goto L0(r1);
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      st y = r6;
      invisible.0();
      return r6;
    L1():
      c1 = ldf c in base;
      r7 = dyn c1(9.0, <int 9, 8, 7, 6, 5, 4, 3, 2, 1>);
      goto L0(r7);
    L2():
      r5 = dyn base1(9.0, <lang `:`(9.0, 1.0)>);
      goto L0(r5);
    };
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      st z = r10;
      invisible.0();
      return r10;
    L1():
      c2 = ldf c in base;
      r11 = dyn c2(2.0, <int 1, 2, 3, 4, 5, 6, 7, 8, 9>);
      goto L0(r11);
    L2():
      r9 = dyn base2(2.0, <lang `:`(1.0, 9.0)>);
      goto L0(r9);
    };
    r13 = dyn grouping(p, p1, p2);
    check L2() else D1();
  D1():
    deopt 8 [r13];
  L2():
    st ii = r13;
    rbind = ldf rbind;
    check L3() else D2();
  D2():
    deopt 11 [];
  L3():
    p3 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p4 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p5 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r17 = dyn rbind(p3, p4, p5);
    check L4() else D3();
  D3():
    deopt 15 [r17];
  L4():
    c3 = `is.object`(r17);
    if c3 then L5() else L6(r17);
  L0(dx1):
    popenv;
    return dx1;
  L5():
    dr = tryDispatchBuiltin.1("[", r17);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(r19):
    ii = ld ii;
    check L8() else D4();
  D4():
    deopt 17 [r19, ii];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    ii1 = force? ii;
    __ = ldf `[` in base;
    r20 = dyn __(r17, <missing>, ii1);
    goto L0(r20);
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg vapply:cls, reg z:*, reg z1:V, reg p:p(V +), reg is_object:*, reg is_object1:V, reg p1:p(V +), reg logical:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg any:cls, reg r10:V, reg c:L, reg lapply:cls, reg z2:*, reg z3:V, reg p3:p(V +), reg r12:cls, reg p4:p(V +), reg r14:V, reg do_call:cls, reg z4:*, reg z5:V, reg p5:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg z6:*, reg z7:V, reg length:cls, reg r23:V, reg rep_len:cls, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg _Internal:cls, reg radixsort:cls, reg nalast:*, reg nalast1:V, reg p6:p(V +), reg decreasing:*, reg decreasing1:V, reg p7:p(V +), reg group:*, reg group1:V, reg p8:p(V +), reg sortStr:*, reg sortStr1:V, reg p9:p(V +), reg ddd2:dots?, reg r31:V, reg p10:p(V +), reg r33:V |
    mkenv;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    st z = r1;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L7():
    list = ldf list;
    check L9() else D0();
  L8():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  L1(r4):
    c = `as.logical`(r4);
    if c then L16() else L2();
  L9():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L10() else D1();
  L11():
    vapply = ldf vapply;
    check L13() else D2();
  L12():
    r3 = dyn base1(<lang vapply(z, is.object, logical(1))>);
    goto L1(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 9 [];
  L2():
    st nalast = TRUE;
    sym2 = ldf rep_len;
    base2 = ldf rep_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L10():
    goto L0(r2);
  L13():
    p = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    p1 = prom<V +>{
      is_object = ld `is.object`;
      is_object1 = force? is_object;
      checkMissing(is_object1);
      return is_object1;
    };
    p2 = prom<V +>{
      logical = ldf logical;
      r7 = dyn logical(1);
      return r7;
    };
    r9 = dyn vapply(p, p1, p2);
    check L14() else D3();
  L16():
    lapply = ldf lapply;
    check L17() else D5();
  D3():
    deopt 13 [r9];
  D5():
    deopt 17 [];
  L4(r20):
    st decreasing = r20;
    st group = TRUE;
    st sortStr = FALSE;
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  L14():
    any = ldf any in base;
    r10 = dyn any(r9);
    check L15() else D4();
  L17():
    p3 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    p4 = prom<V +>{
      r12 = clos inner2501545716;
      return r12;
    };
    r14 = dyn lapply(p3, p4);
    check L18() else D6();
  L23():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L24():
    r19 = dyn base2(FALSE, <lang length(z)>);
    goto L4(r19);
  D4():
    deopt 15 [r10];
  D6():
    deopt 20 [r14];
  L5(r22):
    rep_len = ldf rep_len in base;
    r24 = dyn rep_len(FALSE, r22);
    check L29() else D11();
  L6(r26):
    popenv;
    return r26;
  L15():
    goto L1(r10);
  L18():
    st z = r14;
    do_call = ldf `do.call`;
    check L19() else D7();
  L25():
    z6 = ld z;
    check L27() else D9();
  L26():
    r21 = dyn base3(<sym z>);
    goto L5(r21);
  L30():
    _Internal = ldf `.Internal`;
    check L32() else D12();
  L31():
    r25 = dyn base4(<lang radixsort(nalast, decreasing, group, sortStr, ...)>);
    goto L6(r25);
  D7():
    deopt 23 [];
  D9():
    deopt 38 [z6];
  D11():
    deopt 43 [r24];
  D12():
    deopt 53 [];
  L19():
    p5 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      return z5;
    };
    r16 = dyn do_call("grouping", p5);
    check L20() else D8();
  L27():
    z7 = force? z6;
    checkMissing(z7);
    length = ldf length in base;
    r23 = dyn length(z7);
    check L28() else D10();
  L29():
    goto L4(r24);
  L32():
    p10 = prom<V +>{
      radixsort = ldf radixsort;
      p6 = prom<V +>{
        nalast = ld nalast;
        nalast1 = force? nalast;
        checkMissing(nalast1);
        return nalast1;
      };
      p7 = prom<V +>{
        decreasing = ld decreasing;
        decreasing1 = force? decreasing;
        checkMissing(decreasing1);
        return decreasing1;
      };
      p8 = prom<V +>{
        group = ld group;
        group1 = force? group;
        checkMissing(group1);
        return group1;
      };
      p9 = prom<V +>{
        sortStr = ld sortStr;
        sortStr1 = force? sortStr;
        checkMissing(sortStr1);
        return sortStr1;
      };
      ddd2 = ld `...`;
      r31 = dyn radixsort[, , , , `...`](p6, p7, p8, p9, ddd2);
      return r31;
    };
    r33 = dyn _Internal(p10);
    check L33() else D13();
  D8():
    deopt 26 [r16];
  D10():
    deopt 41 [r23];
  D13():
    deopt 55 [r33];
  L20():
    popenv;
    return r16;
  L28():
    goto L5(r23);
  L33():
    goto L6(r33);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg as_vector:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg xtfrm:cls, reg r4:V, reg p:p(V +), reg r6:V, reg x5:*, reg x6:V |
    mkenv;
    st x = x;
    sym = ldf `is.object`;
    base = ldf `is.object` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L5() else L1();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    x5 = ld x;
    check L9() else D3();
  L4():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    goto L0(c);
  L5():
    as_vector = ldf `as.vector`;
    check L6() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 8 [x5];
  L6():
    p = prom<V +>{
      sym1 = ldf xtfrm;
      base1 = ldf xtfrm in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      xtfrm = ldf xtfrm in base;
      r4 = dyn xtfrm(x4);
      goto L0(r4);
    L2():
      r2 = dyn base1(<sym x>);
      goto L0(r2);
    };
    r6 = dyn as_vector(p);
    check L7() else D2();
  L9():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  D2():
    deopt 7 [r6];
  L7():
    popenv;
    return r6;
  }
}