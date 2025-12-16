fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner59029807;
    st `duplicated.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner59029807(x, incomparables, fromLast, `...`) {
  (reg x:*, reg incomparables:*, reg fromLast:*, reg ddd:dots) -+> V { var x:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var fromLast:*, reg fromLast_isMissing:L, reg fromLast_orDefault:*, var `...`:dots?, reg isFALSE:cls, reg incomparables1:*, reg incomparables2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg _NotYetUsed:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg length:cls, reg r7:V, reg n:*, reg n1:V, reg r8:V, reg c1:L, reg duplicated:cls, reg logical:cls, reg nrow:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r10:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V, reg n2:*, reg n3:V, reg r15:V, reg c2:L, reg duplicated1:cls, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r16:V, reg p4:p(V +), reg fromLast1:*, reg fromLast2:V, reg p5:p(V +), reg ddd1:dots?, reg r19:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg vapply:cls, reg x9:*, reg x10:V, reg p6:p(V +), reg is_factor:*, reg is_factor1:V, reg p7:p(V +), reg r24:V, reg any:cls, reg r25:V, reg c4:L, reg lapply:cls, reg x11:*, reg x12:V, reg c5:L, reg x14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i:*, reg i1:V, reg __1:cls, reg r26:V, reg p8:p(V +), reg as_numeric:*, reg as_numeric1:V, reg p9:p(V +), reg r29:V, reg l:*, reg c6:L, reg r31:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r33:V, reg dx5:V, reg i2:*, reg i3:V, reg ___:cls, reg r34:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r36:V, reg r37:V, reg lengths:cls, reg lapply1:cls, reg x15:*, reg x16:V, reg p10:p(V +), reg dim:*, reg dim1:V, reg p11:p(V +), reg r40:V, reg p12:p(V +), reg r42:V, reg r43:V, reg any1:cls, reg r44:V, reg c7:L, reg lapply2:cls, reg x17:*, reg x18:V, reg c8:L, reg x20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i4:*, reg i5:V, reg __2:cls, reg r45:V, reg p13:p(V +), reg split_data_frame:*, reg split_data_frame1:V, reg p14:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r48:V, reg r49:V, reg nrow1:cls, reg x21:*, reg x22:V, reg p15:p(V +), reg r51:V, reg r52:I, reg p16:p(V +), reg r54:V, reg l3:*, reg c9:L, reg r56:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r58:V, reg dx9:V, reg i6:*, reg i7:V, reg ___1:cls, reg r59:V, reg duplicated2:cls, reg do_call:cls, reg Map:*, reg Map1:V, reg p17:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r62:V, reg r63:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r64:V, reg r65:V, reg list:*, reg list1:V, reg x23:*, reg x24:V, reg c10:cls, reg r66:V, reg names__:cls, reg r67:V, reg p18:p(V +), reg r69:V, reg p19:p(V +), reg fromLast3:*, reg fromLast4:V, reg p20:p(V +), reg r72:V |
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
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      incomparables1 = ld incomparables;
      incomparables2 = force? incomparables1;
      checkMissing(incomparables2);
      return incomparables2;
    };
    r1 = dyn isFALSE(p);
    check L16() else D1();
  D1():
    deopt 3 [r1];
  L16():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L17() else L2();
  L2():
    goto L3();
  L3():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L17():
    _NotYetUsed = ldf `.NotYetUsed`;
    check L18() else D2();
  D2():
    deopt 6 [];
  L4(r6):
    st n = r6;
    n = ld n;
    check L25() else D6();
  L18():
    r3 = dyn _NotYetUsed("incomparables != FALSE");
    check L19() else D3();
  L21():
    x1 = ld x;
    check L23() else D4();
  L22():
    r5 = dyn base(<sym x>);
    goto L4(r5);
  D3():
    deopt 8 [r3];
  D4():
    deopt 13 [x1];
  D6():
    deopt 18 [n];
  L19():
    goto L3();
  L23():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r7 = dyn length(x2);
    check L24() else D5();
  L25():
    n1 = force? n;
    checkMissing(n1);
    r8 = `!`(n1);
    c1 = `as.logical`(r8);
    if c1 then L26() else L5();
  D5():
    deopt 16 [r7];
  L5():
    n2 = ld n;
    check L30() else D9();
  L24():
    goto L4(r7);
  L26():
    duplicated = ldf duplicated;
    check L27() else D7();
  D7():
    deopt 22 [];
  D9():
    deopt 25 [n2];
  L27():
    p3 = prom<V +>{
      logical = ldf logical;
      p2 = prom<V +>{
        nrow = ldf nrow;
        p1 = prom<V +>{
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          return x4;
        };
        r10 = dyn nrow(p1);
        return r10;
      };
      r12 = dyn logical(p2);
      return r12;
    };
    r14 = dyn duplicated(p3);
    check L28() else D8();
  L30():
    n3 = force? n2;
    checkMissing(n3);
    r15 = `==`(n3, 1);
    c2 = `as.logical`(r15);
    if c2 then L31() else L6();
  D8():
    deopt 24 [r14];
  L6():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L28():
    popenv;
    return r14;
  L31():
    duplicated1 = ldf duplicated;
    check L32() else D10();
  D10():
    deopt 30 [];
  L7(r21):
    c4 = `as.logical`(r21);
    if c4 then L40() else L8();
  L32():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c3 = `is.object`(x6);
      if c3 then L1() else L2(x6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", x6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x8):
      __ = ldf `[[` in base;
      r16 = dyn __(x8, 1);
      goto L0(r16);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p5 = prom<V +>{
      fromLast1 = ld fromLast;
      fromLast2 = force? fromLast1;
      checkMissing(fromLast2);
      return fromLast2;
    };
    ddd1 = ld `...`;
    r19 = dyn duplicated1[, fromLast, `...`](p4, p5, ddd1);
    check L33() else D11();
  L35():
    vapply = ldf vapply;
    check L37() else D12();
  L36():
    r20 = dyn base1(<lang `<-`(i, vapply(x, is.factor, NA_LGL))>);
    goto L7(r20);
  D11():
    deopt 35 [r19];
  D12():
    deopt 39 [];
  L8():
    goto L10();
  L10():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L33():
    popenv;
    return r19;
  L37():
    p6 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p7 = prom<V +>{
      is_factor = ld `is.factor`;
      is_factor1 = force? is_factor;
      checkMissing(is_factor1);
      return is_factor1;
    };
    r24 = dyn vapply(p6, p7, NA_LGL);
    check L38() else D13();
  L40():
    lapply = ldf lapply;
    check L41() else D15();
  D13():
    deopt 43 [r24];
  D15():
    deopt 48 [];
  L11(r37):
    c7 = `as.logical`(r37);
    if c7 then L53() else L12();
  L38():
    st i = r24;
    any = ldf any in base;
    r25 = dyn any(r24);
    check L39() else D14();
  L41():
    p8 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      c5 = `is.object`(x12);
      if c5 then L1() else L2(x12);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x12);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x14):
      i = ld i;
      i1 = force? i;
      __1 = ldf `[` in base;
      r26 = dyn __1(x14, i1);
      goto L0(r26);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p9 = prom<V +>{
      as_numeric = ld `as.numeric`;
      as_numeric1 = force? as_numeric;
      checkMissing(as_numeric1);
      return as_numeric1;
    };
    r29 = dyn lapply(p8, p9);
    check L42() else D16();
  L48():
    lengths = ldf lengths;
    check L50() else D18();
  L49():
    r36 = dyn base2(<lang `<-`(i, `(`(`==`(lengths(lapply(x, dim)), 2)))>);
    goto L11(r36);
  D14():
    deopt 46 [r25];
  D16():
    deopt 51 [r29];
  D18():
    deopt 62 [];
  L12():
    goto L14();
  L14():
    duplicated2 = ldf duplicated;
    check L61() else D24();
  L39():
    goto L7(r25);
  L42():
    l = ld x;
    c6 = `is.object`(l);
    if c6 then L43() else L44(r29, l);
  L50():
    p12 = prom<V +>{
      lapply1 = ldf lapply;
      p10 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        return x16;
      };
      p11 = prom<V +>{
        dim = ld dim;
        dim1 = force? dim;
        checkMissing(dim1);
        return dim1;
      };
      r40 = dyn lapply1(p10, p11);
      return r40;
    };
    r42 = dyn lengths(p12);
    check L51() else D19();
  L53():
    lapply2 = ldf lapply;
    check L54() else D21();
  D19():
    deopt 64 [r42];
  D21():
    deopt 71 [];
  D24():
    deopt 84 [];
  L9(r33, dx5):
    st x = dx5;
    goto L10();
  L43():
    dr4 = tryDispatchBuiltin.0("[<-", l, r29);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L45() else L44(r29, dr4);
  L44(r31, l2):
    i2 = ld i;
    check L46() else D17();
  L51():
    r43 = `==`(r42, 2);
    st i = r43;
    any1 = ldf any in base;
    r44 = dyn any1(r43);
    check L52() else D20();
  L54():
    p13 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c8 = `is.object`(x18);
      if c8 then L1() else L2(x18);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", x18);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x20):
      i4 = ld i;
      i5 = force? i4;
      __2 = ldf `[` in base;
      r45 = dyn __2(x20, i5);
      goto L0(r45);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p14 = prom<V +>{
      split_data_frame = ld `split.data.frame`;
      split_data_frame1 = force? split_data_frame;
      checkMissing(split_data_frame1);
      return split_data_frame1;
    };
    p16 = prom<V +>{
      sym3 = ldf seq_len;
      base3 = ldf seq_len in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      nrow1 = ldf nrow;
      p15 = prom<V +>{
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        return x22;
      };
      r51 = dyn nrow1(p15);
      r52 = seq_len(r51);
      goto L0(r52);
    L2():
      r48 = dyn base3(<lang nrow(x)>);
      goto L0(r48);
    };
    r54 = dyn lapply2(p13, p14, p16);
    check L55() else D22();
  L61():
    p19 = prom<V +>{
      do_call = ldf `do.call`;
      p17 = prom<V +>{
        Map = ld Map;
        Map1 = force? Map;
        checkMissing(Map1);
        return Map1;
      };
      p18 = prom<V +>{
        sym4 = ldf `names<-`;
        base4 = ldf `names<-` in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L2() else L3();
      L0(r63):
        return r63;
      L2():
        sym5 = ldf c;
        base5 = ldf c in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L4() else L5();
      L3():
        r62 = dyn base4(<lang c(list, x)>, NULL);
        goto L0(r62);
      L1(r65):
        names__ = ldf `names<-` in base;
        r67 = dyn names__(r65, NULL);
        goto L0(r67);
      L4():
        list = ld list;
        list1 = force? list;
        checkMissing(list1);
        x23 = ld x;
        x24 = force? x23;
        checkMissing(x24);
        c10 = ldf c in base;
        r66 = dyn c10(list1, x24);
        goto L1(r66);
      L5():
        r64 = dyn base5(<sym list>, <sym x>);
        goto L1(r64);
      };
      r69 = dyn do_call(p17, p18);
      return r69;
    };
    p20 = prom<V +>{
      fromLast3 = ld fromLast;
      fromLast4 = force? fromLast3;
      checkMissing(fromLast4);
      return fromLast4;
    };
    r72 = dyn duplicated2[, fromLast](p19, p20);
    check L62() else D25();
  D17():
    deopt 53 [r31, l2, r29, i2];
  D20():
    deopt 69 [r44];
  D22():
    deopt 75 [r54];
  D25():
    deopt 88 [r72];
  L45():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(r29, dx4);
  L46():
    i3 = force? i2;
    ___ = ldf `[<-` in base;
    r34 = dyn ___(l2, r29, i3);
    goto L9(r31, r34);
  L52():
    goto L11(r44);
  L55():
    l3 = ld x;
    c9 = `is.object`(l3);
    if c9 then L56() else L57(r54, l3);
  L62():
    popenv;
    return r72;
  L13(r58, dx9):
    st x = dx9;
    goto L14();
  L56():
    dr8 = tryDispatchBuiltin.0("[<-", l3, r54);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L58() else L57(r54, dr8);
  L57(r56, l5):
    i6 = ld i;
    check L59() else D23();
  D23():
    deopt 77 [r56, l5, r54, i6];
  L58():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L13(r54, dx8);
  L59():
    i7 = force? i6;
    ___1 = ldf `[<-` in base;
    r59 = dyn ___1(l5, r54, i7);
    goto L13(r56, r59);
  }
}