fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner319239564;
    st file_path_relative_to = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner319239564(x, start, parent) {
  (reg x:*, reg start:*, reg parent:*) -+> V { var x:*, var start:*, reg start_isMissing:L, reg start_orDefault:*, reg getwd:cls, reg r:V, reg p:p(V +), var parent:*, reg parent_isMissing:L, reg parent_orDefault:*, reg normalizePath:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r3:V, reg parent1:*, reg parent2:V, reg r4:V, reg c:L, reg normalizePath1:cls, reg start1:*, reg start2:V, reg c1:L, reg start4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg startsWith:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg p4:*, reg p5:V, reg p6:p(V +), reg r12:V, reg any:cls, reg r13:V, reg c2:L, reg substring:cls, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i:*, reg i1:V, reg __1:cls, reg r14:V, reg p7:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg p8:*, reg p9:V, reg nchar:cls, reg r18:V, reg r19:V, reg p10:p(V +), reg r21:V, reg l:*, reg c4:L, reg r23:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r25:V, reg dx5:V, reg i2:*, reg i3:V, reg ___:cls, reg r26:V, reg x9:*, reg x10:V, reg strsplit:cls, reg normalizePath2:cls, reg start5:*, reg start6:V, reg p11:p(V +), reg r29:V, reg p12:p(V +), reg r31:V, reg c5:L, reg r33:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r34:V, reg strsplit1:cls, reg x11:*, reg x12:V, reg p13:p(V +), reg r36:V, reg r37:cls, reg unlist:cls, reg Map:cls, reg f:*, reg f1:V, reg p14:p(V +), reg x13:*, reg x14:V, reg p15:p(V +), reg y:*, reg y1:V, reg p16:p(V +), reg r41:V, reg p17:p(V +), reg r43:V |
    mkenv;
    st x = x;
    start_isMissing = missing.0(start);
    if start_isMissing then L0() else L1(start);
  L0():
    p = prom<V +>{
      getwd = ldf getwd;
      r = dyn getwd();
      return r;
    };
    goto L1(p);
  L1(start_orDefault):
    st start = start_orDefault;
    parent_isMissing = missing.0(parent);
    if parent_isMissing then L2(TRUE) else L2(parent);
  L2(parent_orDefault):
    st parent = parent_orDefault;
    normalizePath = ldf normalizePath;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn normalizePath[, , mustWork](p1, "/", FALSE);
    check L10() else D1();
  D1():
    deopt 6 [r3];
  L10():
    st x = r3;
    parent1 = ld parent;
    check L11() else D2();
  D2():
    deopt 8 [parent1];
  L11():
    parent2 = force? parent1;
    checkMissing(parent2);
    r4 = `!`(parent2);
    c = `as.logical`(r4);
    if c then L12() else L3();
  L3():
    strsplit = ldf strsplit;
    check L30() else D12();
  L12():
    normalizePath1 = ldf normalizePath;
    check L13() else D3();
  D3():
    deopt 12 [];
  D12():
    deopt 44 [];
  L13():
    p2 = prom<V +>{
      start1 = ld start;
      start2 = force? start1;
      checkMissing(start2);
      c1 = `is.object`(start2);
      if c1 then L1() else L2(start2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", start2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(start4):
      __ = ldf `[` in base;
      r5 = dyn __(start4, 1);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn normalizePath1[, , mustWork](p2, "/", TRUE);
    check L14() else D4();
  L30():
    p12 = prom<V +>{
      normalizePath2 = ldf normalizePath;
      p11 = prom<V +>{
        start5 = ld start;
        start6 = force? start5;
        checkMissing(start6);
        return start6;
      };
      r29 = dyn normalizePath2[, , mustWork](p11, "/", FALSE);
      return r29;
    };
    r31 = dyn strsplit[, , fixed](p12, "/", TRUE);
    check L31() else D13();
  D4():
    deopt 17 [r7];
  D13():
    deopt 49 [r31];
  L14():
    st p = r7;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L31():
    c5 = `is.object`(r31);
    if c5 then L32() else L33(r31);
  L4(r9):
    c2 = `as.logical`(r9);
    if c2 then L20() else L5();
  L8(dx7):
    st p = dx7;
    strsplit1 = ldf strsplit;
    check L35() else D14();
  L15():
    startsWith = ldf startsWith;
    check L17() else D5();
  L16():
    r8 = dyn base(<lang `<-`(i, startsWith(x, p))>);
    goto L4(r8);
  L32():
    dr6 = tryDispatchBuiltin.1("[[", r31);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L34() else L33(dr6);
  L33(r33):
    __2 = ldf `[[` in base;
    r34 = dyn __2(r33, 1);
    goto L8(r34);
  D5():
    deopt 22 [];
  D14():
    deopt 55 [];
  L5():
    goto L7();
  L7():
    x9 = ld x;
    check L28() else D11();
  L17():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p6 = prom<V +>{
      p4 = ld p;
      p5 = force? p4;
      checkMissing(p5);
      return p5;
    };
    r12 = dyn startsWith(p3, p6);
    check L18() else D6();
  L20():
    substring = ldf substring;
    check L21() else D8();
  L34():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx6);
  L35():
    p13 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r36 = dyn strsplit1[, , fixed](p13, "/", TRUE);
    check L36() else D15();
  D6():
    deopt 25 [r12];
  D8():
    deopt 30 [];
  D11():
    deopt 41 [x9];
  D15():
    deopt 60 [r36];
  L18():
    st i = r12;
    any = ldf any in base;
    r13 = dyn any(r12);
    check L19() else D7();
  L21():
    p7 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c3 = `is.object`(x6);
      if c3 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      i = ld i;
      i1 = force? i;
      __1 = ldf `[` in base;
      r14 = dyn __1(x8, i1);
      goto L0(r14);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p10 = prom<V +>{
      sym1 = ldf nchar;
      base1 = ldf nchar in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r17):
      r19 = `+`(r17, 2);
      return r19;
    L1():
      p8 = ld p;
      p9 = force? p8;
      checkMissing(p9);
      nchar = ldf nchar in base;
      r18 = dyn nchar(p9, "chars", FALSE, NA_LGL);
      goto L0(r18);
    L2():
      r16 = dyn base1(<sym p>);
      goto L0(r16);
    };
    r21 = dyn substring(p7, p10);
    check L22() else D9();
  L28():
    x10 = force? x9;
    checkMissing(x10);
    popenv;
    return x10;
  L36():
    st y = r36;
    r37 = clos inner4198313549;
    st f = r37;
    unlist = ldf unlist;
    check L37() else D16();
  D7():
    deopt 28 [r13];
  D9():
    deopt 33 [r21];
  D16():
    deopt 66 [];
  L19():
    goto L4(r13);
  L22():
    l = ld x;
    c4 = `is.object`(l);
    if c4 then L23() else L24(r21, l);
  L37():
    p17 = prom<V +>{
      Map = ldf Map;
      p14 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      p15 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        return x14;
      };
      p16 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        return y1;
      };
      r41 = dyn Map[, , , `USE.NAMES`](p14, p15, p16, FALSE);
      return r41;
    };
    r43 = dyn unlist(p17);
    check L38() else D17();
  D17():
    deopt 68 [r43];
  L6(r25, dx5):
    st x = dx5;
    goto L7();
  L23():
    dr4 = tryDispatchBuiltin.0("[<-", l, r21);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L25() else L24(r21, dr4);
  L24(r23, l2):
    i2 = ld i;
    check L26() else D10();
  L38():
    popenv;
    return r43;
  D10():
    deopt 35 [r23, l2, r21, i2];
  L25():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(r21, dx4);
  L26():
    i3 = force? i2;
    ___ = ldf `[<-` in base;
    r26 = dyn ___(l2, r21, i3);
    goto L6(r23, r26);
  }
}
fun inner4198313549(u, v) {
  (reg u:*, reg v:*) -+> V { var u:*, var v:*, reg i:*, reg i1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg i4:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg i7:V, reg r3:V, reg v1:*, reg v2:V, reg length:cls, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg i10:V, reg r6:V, reg p:*, reg p1:V, reg length1:cls, reg r7:V, reg min:cls, reg r8:V, reg r9:V, reg c:L, reg v3:*, reg v4:V, reg c1:L, reg v6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i11:*, reg i12:V, reg __:cls, reg r10:V, reg p2:*, reg p3:V, reg c2:L, reg dx3:V, reg p5:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg i13:*, reg i14:V, reg __1:cls, reg r11:V, reg r12:V, reg c3:L, reg i15:*, reg i16:V, reg r13:V, reg i17:*, reg i18:V, reg r15:V, reg c4:L, reg u1:*, reg u2:V, reg i19:*, reg i20:V, reg r16:V, reg paste:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg p6:*, reg p7:V, reg length2:cls, reg r23:V, reg i21:*, reg i22:V, reg r24:V, reg rep_len:cls, reg r25:V, reg v7:*, reg v8:V, reg c5:L, reg v10:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg v13:V, reg r27:V, reg i23:*, reg i24:V, reg r28:I, reg r29:V, reg __2:cls, reg r30:V, reg c6:cls, reg r31:V, reg p8:p(V +), reg _Platform:*, reg _Platform1:V, reg c7:L, reg _Platform3:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg r33:V, reg p9:p(V +), reg r35:V |
    mkenv;
    st u = u;
    st v = v;
    st i = 1;
    goto L8();
  L8():
    i = ld i;
    check L10() else D0();
  D0():
    deopt 3 [i];
  L10():
    i1 = force? i;
    checkMissing(i1);
    sym = ldf min;
    base = ldf min in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(i4, r1):
    r9 = `<=`(i4, r1);
    c = `as.logical`(r9);
    if c then L22() else L3();
  L11():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L12():
    r = dyn base(<lang length(v)>, <lang length(p)>);
    goto L0(i1, r);
  L1(i7, r3):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L3():
    i17 = ld i;
    check L38() else D11();
  L13():
    v1 = ld v;
    check L15() else D1();
  L14():
    r2 = dyn base1(<sym v>);
    goto L1(i1, r2);
  L22():
    v3 = ld v;
    check L23() else D6();
  D1():
    deopt 8 [i1, v1];
  D6():
    deopt 21 [v3];
  D11():
    deopt 41 [i17];
  L2(i10, r6):
    min = ldf min in base;
    r8 = dyn min(r3, r6);
    check L21() else D5();
  L15():
    v2 = force? v1;
    checkMissing(v2);
    length = ldf length in base;
    r4 = dyn length(v2);
    check L16() else D2();
  L17():
    p = ld p;
    check L19() else D3();
  L18():
    r5 = dyn base2(<sym p>);
    goto L2(i7, r5);
  L23():
    v4 = force? v3;
    checkMissing(v4);
    c1 = `is.object`(v4);
    if c1 then L24() else L25(v4);
  L38():
    i18 = force? i17;
    checkMissing(i18);
    r15 = `==`(i18, 1);
    c4 = `as.logical`(r15);
    if c4 then L39() else L9();
  D2():
    deopt 11 [i1, r4];
  D3():
    deopt 14 [i7, p];
  D5():
    deopt 19 [i10, r8];
  L4(dx1):
    p2 = ld p;
    check L28() else D8();
  L9():
    i19 = ld i;
    check L42() else D13();
  L16():
    goto L1(i1, r4);
  L19():
    p1 = force? p;
    checkMissing(p1);
    length1 = ldf length in base;
    r7 = dyn length1(p1);
    check L20() else D4();
  L21():
    goto L0(i10, r8);
  L24():
    dr = tryDispatchBuiltin.1("[", v4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(dr);
  L25(v6):
    i11 = ld i;
    check L27() else D7();
  L39():
    u1 = ld u;
    check L40() else D12();
  D4():
    deopt 17 [i7, r7];
  D7():
    deopt 23 [v6, i11];
  D8():
    deopt 25 [dx1, p2];
  D12():
    deopt 45 [u1];
  D13():
    deopt 47 [i19];
  L20():
    goto L2(i7, r7);
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L27():
    i12 = force? i11;
    __ = ldf `[` in base;
    r10 = dyn __(v6, i12);
    goto L4(r10);
  L28():
    p3 = force? p2;
    checkMissing(p3);
    c2 = `is.object`(p3);
    if c2 then L29() else L30(dx1, p3);
  L40():
    u2 = force? u1;
    checkMissing(u2);
    popenv;
    return u2;
  L42():
    i20 = force? i19;
    checkMissing(i20);
    r16 = `-`(i20, 1);
    st i = r16;
    paste = ldf paste;
    check L43() else D14();
  D14():
    deopt 53 [];
  L5(dx6, dx7):
    r12 = `==`(dx6, dx7);
    c3 = `as.logical`(r12);
    if c3 then L33() else L6();
  L29():
    dr2 = tryDispatchBuiltin.1("[", p3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(dx1, dr2);
  L30(dx3, p5):
    i13 = ld i;
    check L32() else D9();
  L43():
    p8 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L0(r18):
      return r18;
    L5():
      sym4 = ldf rep_len;
      base4 = ldf rep_len in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L7() else L8();
    L6():
      r17 = dyn base3(<lang rep_len("..", `-`(length(p), i))>, <lang `[`(v, `-`(seq_len(i)))>);
      goto L0(r17);
    L1(r20):
      v7 = ld v;
      v8 = force? v7;
      checkMissing(v8);
      c5 = `is.object`(v8);
      if c5 then L11() else L12(v8);
    L7():
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L9() else L10();
    L8():
      r19 = dyn base4("..", <lang `-`(length(p), i)>);
      goto L1(r19);
    L2(r22):
      i21 = ld i;
      i22 = force? i21;
      checkMissing(i22);
      r24 = `-`(r22, i22);
      rep_len = ldf rep_len in base;
      r25 = dyn rep_len("..", r24);
      goto L1(r25);
    L3(dx9):
      c6 = ldf c in base;
      r31 = dyn c6(r20, dx9);
      goto L0(r31);
    L9():
      p6 = ld p;
      p7 = force? p6;
      checkMissing(p7);
      length2 = ldf length in base;
      r23 = dyn length2(p7);
      goto L2(r23);
    L10():
      r21 = dyn base5(<sym p>);
      goto L2(r21);
    L11():
      dr4 = tryDispatchBuiltin.1("[", v8);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L13() else L12(dr4);
    L12(v10):
      sym6 = ldf seq_len;
      base6 = ldf seq_len in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L14() else L15();
    L4(v13, r27):
      r29 = `-`(<missing>, r27);
      __2 = ldf `[` in base;
      r30 = dyn __2(v13, r29);
      goto L3(r30);
    L13():
      dx8 = getTryDispatchBuiltinValue(dr4);
      goto L3(dx8);
    L14():
      i23 = ld i;
      i24 = force? i23;
      checkMissing(i24);
      r28 = seq_len(i24);
      goto L4(v10, r28);
    L15():
      r26 = dyn base6(<sym i>);
      goto L4(v10, r26);
    };
    p9 = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c7 = `is.object`(_Platform1);
      if c7 then L1() else L2(_Platform1);
    L0(dx11):
      return dx11;
    L1():
      dr6 = tryDispatchBuiltin.1("$", _Platform1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(_Platform3):
      r33 = `$`(_Platform3, <sym file.sep>);
      goto L0(r33);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx10);
    };
    r35 = dyn paste[, collapse](p8, p9);
    check L44() else D15();
  D9():
    deopt 27 [dx3, p5, i13];
  D15():
    deopt 57 [r35];
  L6():
    goto L3();
  L31():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx1, dx5);
  L32():
    i14 = force? i13;
    __1 = ldf `[` in base;
    r11 = dyn __1(p5, i14);
    goto L5(dx3, r11);
  L33():
    i15 = ld i;
    check L34() else D10();
  L44():
    popenv;
    return r35;
  D10():
    deopt 31 [i15];
  L34():
    i16 = force? i15;
    checkMissing(i16);
    r13 = `+`(i16, 1);
    st i = r13;
    goto L8();
  }
}