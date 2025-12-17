fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2206513454;
    st `anyDuplicated.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2206513454(x, incomparables, fromLast, `...`) {
  (reg x:*, reg incomparables:*, reg fromLast:*, reg ddd:dots) -+> V { var x:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var fromLast:*, reg fromLast_isMissing:L, reg fromLast_orDefault:*, var `...`:dots?, reg isFALSE:cls, reg incomparables1:*, reg incomparables2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg _NotYetUsed:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg lengths:cls, reg lapply:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg dim:*, reg dim1:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg r12:V, reg any:cls, reg r13:V, reg c1:L, reg lapply1:cls, reg x3:*, reg x4:V, reg c2:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i:*, reg i1:V, reg __:cls, reg r14:V, reg p4:p(V +), reg split_data_frame:*, reg split_data_frame1:V, reg p5:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg nrow:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg r20:V, reg r21:I, reg p7:p(V +), reg r23:V, reg l:*, reg c3:L, reg r25:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r27:V, reg dx3:V, reg i2:*, reg i3:V, reg ___:cls, reg r28:V, reg anyDuplicated:cls, reg do_call:cls, reg Map:*, reg Map1:V, reg p8:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg list:*, reg list1:V, reg x9:*, reg x10:V, reg c4:cls, reg r35:V, reg names__:cls, reg r36:V, reg p9:p(V +), reg r38:V, reg p10:p(V +), reg fromLast1:*, reg fromLast2:V, reg p11:p(V +), reg r41:V |
    mkenv;
    st x = x;
    incomparables_isMissing = missing.0(incomparables);
    if incomparables_isMissing then L0(FALSE) else L0(incomparables);
  L0(incomparables_orDefault):
    st incomparables = incomparables_orDefault;
    fromLast_isMissing = missing.0(fromLast);
    if fromLast_isMissing then L1(FALSE) else L1(fromLast);
  L1(fromLast_orDefault):
    st fromLast = fromLast_orDefault;
    st `...` = ddd;
    isFALSE = ldf isFALSE;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      incomparables1 = ld incomparables;
      incomparables2 = force? incomparables1;
      checkMissing(incomparables2);
      return incomparables2;
    };
    r1 = dyn isFALSE(p);
    check L9() else D1();
  D1():
    deopt 3 [r1];
  L9():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L10() else L2();
  L2():
    goto L3();
  L3():
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L10():
    _NotYetUsed = ldf `.NotYetUsed`;
    check L11() else D2();
  D2():
    deopt 6 [];
  L4(r6):
    c1 = `as.logical`(r6);
    if c1 then L19() else L5();
  L11():
    r3 = dyn _NotYetUsed("incomparables != FALSE");
    check L12() else D3();
  L14():
    lengths = ldf lengths;
    check L16() else D4();
  L15():
    r5 = dyn base(<lang `<-`(i, `(`(`==`(lengths(lapply(x, dim)), 2)))>);
    goto L4(r5);
  D3():
    deopt 8 [r3];
  D4():
    deopt 14 [];
  L5():
    goto L7();
  L7():
    anyDuplicated = ldf anyDuplicated;
    check L27() else D10();
  L12():
    goto L3();
  L16():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p2 = prom<V +>{
        dim = ld dim;
        dim1 = force? dim;
        checkMissing(dim1);
        return dim1;
      };
      r9 = dyn lapply(p1, p2);
      return r9;
    };
    r11 = dyn lengths(p3);
    check L17() else D5();
  L19():
    lapply1 = ldf lapply;
    check L20() else D7();
  D5():
    deopt 16 [r11];
  D7():
    deopt 23 [];
  D10():
    deopt 36 [];
  L17():
    r12 = `==`(r11, 2);
    st i = r12;
    any = ldf any in base;
    r13 = dyn any(r12);
    check L18() else D6();
  L20():
    p4 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c2 = `is.object`(x4);
      if c2 then L1() else L2(x4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x6):
      i = ld i;
      i1 = force? i;
      __ = ldf `[` in base;
      r14 = dyn __(x6, i1);
      goto L0(r14);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p5 = prom<V +>{
      split_data_frame = ld `split.data.frame`;
      split_data_frame1 = force? split_data_frame;
      checkMissing(split_data_frame1);
      return split_data_frame1;
    };
    p7 = prom<V +>{
      sym1 = ldf seq_len;
      base1 = ldf seq_len in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      nrow = ldf nrow;
      p6 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r20 = dyn nrow(p6);
      r21 = seq_len(r20);
      goto L0(r21);
    L2():
      r17 = dyn base1(<lang nrow(x)>);
      goto L0(r17);
    };
    r23 = dyn lapply1(p4, p5, p7);
    check L21() else D8();
  L27():
    p10 = prom<V +>{
      do_call = ldf `do.call`;
      p8 = prom<V +>{
        Map = ld Map;
        Map1 = force? Map;
        checkMissing(Map1);
        return Map1;
      };
      p9 = prom<V +>{
        sym2 = ldf `names<-`;
        base2 = ldf `names<-` in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L2() else L3();
      L0(r32):
        return r32;
      L2():
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L4() else L5();
      L3():
        r31 = dyn base2(<lang c(list, x)>, NULL);
        goto L0(r31);
      L1(r34):
        names__ = ldf `names<-` in base;
        r36 = dyn names__(r34, NULL);
        goto L0(r36);
      L4():
        list = ld list;
        list1 = force? list;
        checkMissing(list1);
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c4 = ldf c in base;
        r35 = dyn c4(list1, x10);
        goto L1(r35);
      L5():
        r33 = dyn base3(<sym list>, <sym x>);
        goto L1(r33);
      };
      r38 = dyn do_call(p8, p9);
      return r38;
    };
    p11 = prom<V +>{
      fromLast1 = ld fromLast;
      fromLast2 = force? fromLast1;
      checkMissing(fromLast2);
      return fromLast2;
    };
    r41 = dyn anyDuplicated[, fromLast](p10, p11);
    check L28() else D11();
  D6():
    deopt 21 [r13];
  D8():
    deopt 27 [r23];
  D11():
    deopt 40 [r41];
  L18():
    goto L4(r13);
  L21():
    l = ld x;
    c3 = `is.object`(l);
    if c3 then L22() else L23(r23, l);
  L28():
    popenv;
    return r41;
  L6(r27, dx3):
    st x = dx3;
    goto L7();
  L22():
    dr2 = tryDispatchBuiltin.0("[<-", l, r23);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(r23, dr2);
  L23(r25, l2):
    i2 = ld i;
    check L25() else D9();
  D9():
    deopt 29 [r25, l2, r23, i2];
  L24():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(r23, dx2);
  L25():
    i3 = force? i2;
    ___ = ldf `[<-` in base;
    r28 = dyn ___(l2, r23, i3);
    goto L6(r25, r28);
  }
}