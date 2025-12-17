fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4227816699;
    st `head.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4227816699(x, n, `...`) {
  (reg x:*, reg n:*, reg ddd:dots) -+> V { var x:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var `...`:dots?, reg _checkHT:cls, reg n1:*, reg n2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg dim:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg dx:*, reg dx1:V, reg c:V, reg r8:V, reg c1:L, reg head_array:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg n3:*, reg n4:V, reg p3:p(V +), reg ddd1:dots?, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg n5:*, reg n6:V, reg length:cls, reg r14:V, reg r15:V, reg c2:L, reg n7:*, reg n8:V, reg r16:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg x5:*, reg x6:V, reg length1:cls, reg r21:V, reg n9:*, reg n10:V, reg r22:V, reg max:cls, reg r23:V, reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg n11:*, reg n12:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg x7:*, reg x8:V, reg length2:cls, reg r28:V, reg min:cls, reg r29:V, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr:V, reg dc:L, reg dx2:V, reg dx3:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg x15:V, reg r31:V, reg n13:*, reg n14:V, reg r32:I, reg __:cls, reg r33:V, reg stop:cls, reg gettextf:cls, reg deparse:cls, reg n15:*, reg n16:V, reg p4:p(V +), reg r35:V, reg p5:p(V +), reg sQuote:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r37:V, reg r38:V, reg x16:*, reg x17:V, reg class:cls, reg r39:V, reg p6:p(V +), reg r41:V, reg p7:p(V +), reg r43:V, reg p8:p(V +), reg r45:V |
    mkenv;
    st x = x;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(6) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    st `...` = ddd;
    _checkHT = ldf `.checkHT`;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p1 = prom<V +>{
      sym = ldf dim;
      base = ldf dim in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      st dx = r2;
      invisible.0();
      return r2;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      dim = ldf dim in base;
      r3 = dyn dim(x2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym x>);
      goto L0(r1);
    };
    r5 = dyn _checkHT(p, p1);
    check L13() else D1();
  D1():
    deopt 4 [r5];
  L13():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L1(r7):
    r8 = `!`(r7);
    c1 = `as.logical`(r8);
    if c1 then L17() else L2();
  L14():
    dx = ld dx;
    check L16() else D2();
  L15():
    r6 = dyn base1(<sym dx>);
    goto L1(r6);
  D2():
    deopt 6 [dx];
  L2():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L16():
    dx1 = force? dx;
    checkMissing(dx1);
    c = `==`(dx1, NULL);
    goto L1(c);
  L17():
    head_array = ldf `head.array`;
    check L18() else D3();
  D3():
    deopt 11 [];
  L3(r13):
    r15 = `==`(r13, 1);
    c2 = `as.logical`(r15);
    if c2 then L25() else L4();
  L18():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      return n4;
    };
    ddd1 = ld `...`;
    r11 = dyn head_array[, , `...`](p2, p3, ddd1);
    check L19() else D4();
  L21():
    n5 = ld n;
    check L23() else D5();
  L22():
    r12 = dyn base2(<sym n>);
    goto L3(r12);
  D4():
    deopt 15 [r11];
  D5():
    deopt 18 [n5];
  L4():
    stop = ldf stop;
    check L53() else D18();
  L19():
    popenv;
    return r11;
  L23():
    n6 = force? n5;
    checkMissing(n6);
    length = ldf length in base;
    r14 = dyn length(n6);
    check L24() else D6();
  L25():
    n7 = ld n;
    check L26() else D7();
  D6():
    deopt 21 [r14];
  D7():
    deopt 24 [n7];
  D18():
    deopt 62 [];
  L24():
    goto L3(r14);
  L26():
    n8 = force? n7;
    checkMissing(n8);
    r16 = `<`(n8, 0);
    c3 = `as.logical`(r16);
    if c3 then L27() else L5();
  L53():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        deparse = ldf deparse;
        p4 = prom<V +>{
          n15 = ld n;
          n16 = force? n15;
          checkMissing(n16);
          return n16;
        };
        r35 = dyn deparse(p4);
        return r35;
      };
      p7 = prom<V +>{
        sQuote = ldf sQuote;
        p6 = prom<V +>{
          sym8 = ldf class;
          base8 = ldf class in base;
          guard8 = `==`.4(sym8, base8);
          if guard8 then L1() else L2();
        L0(r38):
          return r38;
        L1():
          x16 = ld x;
          x17 = force? x16;
          checkMissing(x17);
          class = ldf class in base;
          r39 = dyn class(x17);
          goto L0(r39);
        L2():
          r37 = dyn base8(<sym x>);
          goto L0(r37);
        };
        r41 = dyn sQuote(p6);
        return r41;
      };
      r43 = dyn gettextf("no method found for %s(., n=%s) and class %s", "head", p5, p7);
      return r43;
    };
    r45 = dyn stop[, domain](p8, NA_LGL);
    check L54() else D19();
  D19():
    deopt 66 [r45];
  L5():
    sym5 = ldf min;
    base5 = ldf min in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L37() else L38();
  L8(r24):
    st n = r24;
    x9 = ld x;
    check L45() else D16();
  L27():
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L54():
    popenv;
    return r45;
  D16():
    deopt 54 [x9];
  L6(r18):
    goto L8(r18);
  L28():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  L29():
    r17 = dyn base3(<lang `+`(length(x), n)>, 0);
    goto L6(r17);
  L37():
    n11 = ld n;
    check L39() else D12();
  L38():
    r25 = dyn base5(<sym n>, <lang length(x)>);
    goto L8(r25);
  L45():
    x10 = force? x9;
    checkMissing(x10);
    c4 = `is.object`(x10);
    if c4 then L46() else L47(x10);
  D12():
    deopt 43 [n11];
  L7(r20):
    n9 = ld n;
    check L34() else D10();
  L10(dx3):
    popenv;
    return dx3;
  L30():
    x5 = ld x;
    check L32() else D8();
  L31():
    r19 = dyn base4(<sym x>);
    goto L7(r19);
  L39():
    n12 = force? n11;
    checkMissing(n12);
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L40() else L41();
  L46():
    dr = tryDispatchBuiltin.1("[", x10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L48() else L47(dr);
  L47(x12):
    sym7 = ldf seq_len;
    base7 = ldf seq_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L49() else L50();
  D8():
    deopt 32 [x5];
  D10():
    deopt 35 [r20, n9];
  L9(r27):
    min = ldf min in base;
    r29 = dyn min(n12, r27);
    check L44() else D15();
  L11(x15, r31):
    __ = ldf `[` in base;
    r33 = dyn __(x15, r31);
    goto L10(r33);
  L32():
    x6 = force? x5;
    checkMissing(x6);
    length1 = ldf length in base;
    r21 = dyn length1(x6);
    check L33() else D9();
  L34():
    n10 = force? n9;
    checkMissing(n10);
    r22 = `+`(r20, n10);
    max = ldf max in base;
    r23 = dyn max(r22, 0);
    check L35() else D11();
  L40():
    x7 = ld x;
    check L42() else D13();
  L41():
    r26 = dyn base6(<sym x>);
    goto L9(r26);
  L48():
    dx2 = getTryDispatchBuiltinValue(dr);
    goto L10(dx2);
  L49():
    n13 = ld n;
    check L51() else D17();
  L50():
    r30 = dyn base7(<sym n>);
    goto L11(x12, r30);
  D9():
    deopt 35 [r21];
  D11():
    deopt 40 [r23];
  D13():
    deopt 47 [x7];
  D15():
    deopt 52 [r29];
  D17():
    deopt 57 [x12, n13];
  L33():
    goto L7(r21);
  L35():
    goto L6(r23);
  L42():
    x8 = force? x7;
    checkMissing(x8);
    length2 = ldf length in base;
    r28 = dyn length2(x8);
    check L43() else D14();
  L44():
    goto L8(r29);
  L51():
    n14 = force? n13;
    checkMissing(n14);
    r32 = seq_len(n14);
    goto L11(x12, r32);
  D14():
    deopt 50 [r28];
  L43():
    goto L9(r28);
  }
}