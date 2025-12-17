fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1807018334;
    st `[.check_details_changes` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1807018334(x, i, j, drop) {
  (reg x:*, reg i:*, reg j:*, reg drop:*) -+> V { var x:*, var i:*, var j:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nargs:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg r7:V, reg missing:cls, reg r8:V, reg r9:V, reg r10:V, reg r11:V, reg c:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg c5:L, reg r13:V, reg i1:*, reg i2:V, reg length:cls, reg r14:V, reg r15:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg c14:L, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg c17:L, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg c20:L, reg r21:V, reg i3:*, reg i4:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg c23:L, reg r23:V, reg c24:cls, reg r24:V, reg match:cls, reg r25:V, reg is_na:cls, reg r26:V, reg r27:V, reg any:cls, reg r28:V, reg c25:L, reg c26:V, reg c28:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg c29:cls, reg r31:V, reg r32:cls, reg encode:cls, reg x1:*, reg x2:V, reg c30:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r33:V, reg p:p(V +), reg r35:V, reg encode1:cls, reg x5:*, reg x6:V, reg c31:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r36:V, reg p1:p(V +), reg r38:V, reg do_call:cls, reg i5:*, reg i6:V, reg p2:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg old:*, reg old1:V, reg new:*, reg new1:V, reg list:cls, reg r42:V, reg p3:p(V +), reg r44:V, reg NextMethod:cls, reg r46:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    sym = ldf nargs;
    base = ldf nargs in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L1(r1):
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L13():
    nargs = ldf nargs in base;
    r2 = dyn nargs();
    check L15() else D0();
  L14():
    r = dyn base();
    goto L1(r);
  D0():
    deopt 3 [r2];
  L2(r6, r7):
    r9 = `!`(r7);
    r10 = `-`(r6, r9);
    r11 = `==`(r10, 3);
    c = `as.logical`(r11);
    if c then L18() else L3(c);
  L15():
    goto L1(r2);
  L16():
    missing = ldf missing in base;
    r8 = dyn missing(<sym drop>);
    goto L2(r1, r8);
  L17():
    r5 = dyn base1(<sym drop>);
    goto L2(r1, r5);
  L3(c2):
    c9 = `as.logical`(c2);
    if c9 then L24() else L5(c9);
  L18():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L4(c5, r13):
    r15 = `==`(r13, 1);
    c6 = `as.logical`(r15);
    c7 = `&&`(c5, c6);
    goto L3(c7);
  L5(c11):
    c28 = `as.logical`(c11);
    if c28 then L39() else L10();
  L19():
    i1 = ld i;
    check L21() else D1();
  L20():
    r12 = dyn base2(<sym i>);
    goto L4(c, r12);
  L24():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  D1():
    deopt 12 [c, i1];
  L6(c14, r17):
    c25 = `as.logical`(r17);
    c26 = `&&`(c14, c25);
    goto L5(c26);
  L10():
    goto L12();
  L12():
    NextMethod = ldf NextMethod;
    check L50() else D15();
  L21():
    i2 = force? i1;
    checkMissing(i2);
    length = ldf length in base;
    r14 = dyn length(i2);
    check L22() else D2();
  L25():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L27() else L28();
  L26():
    r16 = dyn base3(<lang `!`(is.na(match(i, c("==", "!=", "<", "<=", ">", ">="))))>);
    goto L6(c9, r16);
  L39():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L40() else L41();
  D2():
    deopt 15 [c, r14];
  D15():
    deopt 80 [];
  L7(c17, r19):
    r27 = `!`(r19);
    any = ldf any in base;
    r28 = dyn any(r27);
    check L37() else D7();
  L11(r30):
    st levels = r30;
    r32 = clos inner1236783023;
    st encode = r32;
    encode = ldf encode;
    check L43() else D9();
  L22():
    goto L4(c, r14);
  L27():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L29() else L30();
  L28():
    r18 = dyn base4(<lang match(i, c("==", "!=", "<", "<=", ">", ">="))>);
    goto L7(c9, r18);
  L40():
    c29 = ldf c in base;
    r31 = dyn c29("", "OK", "NOTE", "WARNING", "ERROR", "FAILURE");
    check L42() else D8();
  L41():
    r29 = dyn base7("", "OK", "NOTE", "WARNING", "ERROR", "FAILURE");
    goto L11(r29);
  L50():
    r46 = dyn NextMethod();
    check L51() else D16();
  D7():
    deopt 45 [c17, r28];
  D8():
    deopt 56 [r31];
  D9():
    deopt 62 [];
  D16():
    deopt 81 [r46];
  L8(c20, r21):
    is_na = ldf `is.na` in base;
    r26 = dyn is_na(r21);
    check L36() else D6();
  L29():
    i3 = ld i;
    check L31() else D3();
  L30():
    r20 = dyn base5(<sym i>, <lang c("==", "!=", "<", "<=", ">", ">=")>);
    goto L8(c9, r20);
  L37():
    goto L6(c17, r28);
  L42():
    goto L11(r31);
  L43():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c30 = `is.object`(x2);
      if c30 then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r33 = `$`(x4, <sym Old>);
      goto L0(r33);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r35 = dyn encode(p);
    check L44() else D10();
  L51():
    popenv;
    return r46;
  D3():
    deopt 25 [c9, i3];
  D6():
    deopt 42 [c20, r26];
  D10():
    deopt 64 [r35];
  L31():
    i4 = force? i3;
    checkMissing(i4);
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L32() else L33();
  L36():
    goto L7(c20, r26);
  L44():
    st old = r35;
    encode1 = ldf encode;
    check L45() else D11();
  D11():
    deopt 67 [];
  L9(c23, r23):
    match = ldf match in base;
    r25 = dyn match(i4, r23, NA_INT, NULL);
    check L35() else D5();
  L32():
    c24 = ldf c in base;
    r24 = dyn c24("==", "!=", "<", "<=", ">", ">=");
    check L34() else D4();
  L33():
    r22 = dyn base6("==", "!=", "<", "<=", ">", ">=");
    goto L9(c9, r22);
  L45():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c31 = `is.object`(x6);
      if c31 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r36 = `$`(x8, <sym New>);
      goto L0(r36);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r38 = dyn encode1(p1);
    check L46() else D12();
  D4():
    deopt 36 [c9, r24];
  D5():
    deopt 40 [c23, r25];
  D12():
    deopt 69 [r38];
  L34():
    goto L9(c9, r24);
  L35():
    goto L8(c23, r25);
  L46():
    st new = r38;
    do_call = ldf `do.call`;
    check L47() else D13();
  D13():
    deopt 72 [];
  L47():
    p2 = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    p3 = prom<V +>{
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      old = ld old;
      old1 = force? old;
      checkMissing(old1);
      new = ld new;
      new1 = force? new;
      checkMissing(new1);
      list = ldf list in base;
      r42 = dyn list(old1, new1);
      goto L0(r42);
    L2():
      r40 = dyn base8(<sym old>, <sym new>);
      goto L0(r40);
    };
    r44 = dyn do_call(p2, p3);
    check L48() else D14();
  D14():
    deopt 75 [r44];
  L48():
    st i = r44;
    goto L12();
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg sub:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg l:*, reg c:L, reg r3:S, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:S, reg l5:*, reg r12:S, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:S, reg l8:*, reg r20:S, reg r21:V, reg s3:*, reg s4:V, reg levels:*, reg levels1:V, reg match:cls, reg r22:V, reg is_na:cls, reg r23:V, reg ___:cls, reg r24:V, reg ordered:cls, reg s5:*, reg s6:V, reg p1:p(V +), reg levels2:*, reg levels3:V, reg p2:p(V +), reg r27:V |
    mkenv;
    st s = s;
    sub = ldf sub;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r1 = dyn sub("\n.*", "", p);
    check L4() else D1();
  D1():
    deopt 5 [r1];
  L4():
    st s = r1;
    l = ld s;
    c = `is.object`(l);
    if c then L5() else L6("", l);
  L0(dx1):
    st s = dx1;
    ordered = ldf ordered;
    check L16() else D6();
  L5():
    dr = tryDispatchBuiltin.0("[<-", l, "");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6("", dr);
  L6(r3, l2):
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  D6():
    deopt 27 [];
  L1(r11, l5, r12, r13):
    ___ = ldf `[<-` in base;
    r24 = dyn ___(l5, r12, r13);
    goto L0(r24);
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L9():
    r10 = dyn base(<lang match(s, levels)>);
    goto L1(r3, l2, "", r10);
  L16():
    p1 = prom<V +>{
      s5 = ld s;
      s6 = force? s5;
      checkMissing(s6);
      return s6;
    };
    p2 = prom<V +>{
      levels2 = ld levels;
      levels3 = force? levels2;
      checkMissing(levels3);
      return levels3;
    };
    r27 = dyn ordered(p1, p2);
    check L17() else D7();
  D7():
    deopt 30 [r27];
  L2(r19, l8, r20, r21):
    is_na = ldf `is.na` in base;
    r23 = dyn is_na(r21);
    check L15() else D5();
  L10():
    s3 = ld s;
    check L12() else D2();
  L11():
    r18 = dyn base1(<sym s>, <sym levels>);
    goto L2(r3, l2, "", r18);
  L17():
    popenv;
    return r27;
  D2():
    deopt 14 [r3, l2, "", s3];
  D5():
    deopt 23 [r19, l8, r20, r23];
  L12():
    s4 = force? s3;
    checkMissing(s4);
    levels = ld levels;
    check L13() else D3();
  L15():
    goto L1(r19, l8, r20, r23);
  D3():
    deopt 16 [r3, l2, "", levels];
  L13():
    levels1 = force? levels;
    checkMissing(levels1);
    match = ldf match in base;
    r22 = dyn match(s4, levels1, NA_INT, NULL);
    check L14() else D4();
  D4():
    deopt 21 [r3, l2, "", r22];
  L14():
    goto L2(r3, l2, "", r22);
  }
}