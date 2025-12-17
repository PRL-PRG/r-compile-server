fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner774037749;
    st `tail.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner774037749(x, n, keepnums, addrownums, `...`) {
  (reg x:*, reg n:*, reg keepnums:*, reg addrownums:*, reg ddd:dots) -+> V { var x:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var keepnums:*, reg keepnums_isMissing:L, reg keepnums_orDefault:*, var addrownums:*, var `...`:dots?, reg _checkHT:cls, reg n1:*, reg n2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg dim:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg dx:*, reg dx1:V, reg c:V, reg r8:V, reg c1:L, reg tail_array:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg n3:*, reg n4:V, reg p3:p(V +), reg keepnums1:*, reg keepnums2:V, reg p4:p(V +), reg addrownums1:*, reg addrownums2:V, reg p5:p(V +), reg ddd1:dots?, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg n5:*, reg n6:V, reg length:cls, reg r16:V, reg r17:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg x5:*, reg x6:V, reg length1:cls, reg r20:V, reg n7:*, reg n8:V, reg r21:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg xlen:*, reg xlen1:V, reg n9:*, reg n10:V, reg r24:V, reg max:cls, reg r25:V, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg n11:*, reg n12:V, reg xlen2:*, reg xlen3:V, reg min:cls, reg r28:V, reg x7:*, reg x8:V, reg c4:L, reg x10:V, reg dr:V, reg dc:L, reg dx2:V, reg dx3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg x13:V, reg r30:V, reg xlen4:*, reg xlen5:V, reg n13:*, reg n14:V, reg seq_int:cls, reg r31:V, reg __:cls, reg r32:V, reg stop:cls, reg gettextf:cls, reg deparse:cls, reg n15:*, reg n16:V, reg p6:p(V +), reg r34:V, reg p7:p(V +), reg sQuote:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg x14:*, reg x15:V, reg class:cls, reg r38:V, reg p8:p(V +), reg r40:V, reg p9:p(V +), reg r42:V, reg p10:p(V +), reg r44:V |
    mkenv;
    st x = x;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(6) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    keepnums_isMissing = missing.0(keepnums);
    if keepnums_isMissing then L1(FALSE) else L1(keepnums);
  L1(keepnums_orDefault):
    st keepnums = keepnums_orDefault;
    st addrownums = addrownums;
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
  L2(r7):
    r8 = `!`(r7);
    c1 = `as.logical`(r8);
    if c1 then L17() else L3();
  L14():
    dx = ld dx;
    check L16() else D2();
  L15():
    r6 = dyn base1(<sym dx>);
    goto L2(r6);
  D2():
    deopt 6 [dx];
  L3():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L16():
    dx1 = force? dx;
    checkMissing(dx1);
    c = `==`(dx1, NULL);
    goto L2(c);
  L17():
    tail_array = ldf `tail.array`;
    check L18() else D3();
  D3():
    deopt 11 [];
  L4(r15):
    r17 = `==`(r15, 1);
    c2 = `as.logical`(r17);
    if c2 then L25() else L5();
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
    p4 = prom<V +>{
      keepnums1 = ld keepnums;
      keepnums2 = force? keepnums1;
      checkMissing(keepnums2);
      return keepnums2;
    };
    p5 = prom<V +>{
      addrownums1 = ld addrownums;
      addrownums2 = force? addrownums1;
      checkMissing(addrownums2);
      return addrownums2;
    };
    ddd1 = ld `...`;
    r13 = dyn tail_array[, n, keepnums, addrownums, `...`](p2, p3, p4, p5, ddd1);
    check L19() else D4();
  L21():
    n5 = ld n;
    check L23() else D5();
  L22():
    r14 = dyn base2(<sym n>);
    goto L4(r14);
  D4():
    deopt 20 [r13];
  D5():
    deopt 23 [n5];
  L5():
    stop = ldf stop;
    check L53() else D20();
  L19():
    popenv;
    return r13;
  L23():
    n6 = force? n5;
    checkMissing(n6);
    length = ldf length in base;
    r16 = dyn length(n6);
    check L24() else D6();
  L25():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  D6():
    deopt 26 [r16];
  D20():
    deopt 72 [];
  L6(r19):
    st xlen = r19;
    n7 = ld n;
    check L30() else D9();
  L24():
    goto L4(r16);
  L26():
    x5 = ld x;
    check L28() else D7();
  L27():
    r18 = dyn base3(<sym x>);
    goto L6(r18);
  L53():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        deparse = ldf deparse;
        p6 = prom<V +>{
          n15 = ld n;
          n16 = force? n15;
          checkMissing(n16);
          return n16;
        };
        r34 = dyn deparse(p6);
        return r34;
      };
      p9 = prom<V +>{
        sQuote = ldf sQuote;
        p8 = prom<V +>{
          sym7 = ldf class;
          base7 = ldf class in base;
          guard7 = `==`.4(sym7, base7);
          if guard7 then L1() else L2();
        L0(r37):
          return r37;
        L1():
          x14 = ld x;
          x15 = force? x14;
          checkMissing(x15);
          class = ldf class in base;
          r38 = dyn class(x15);
          goto L0(r38);
        L2():
          r36 = dyn base7(<sym x>);
          goto L0(r36);
        };
        r40 = dyn sQuote(p8);
        return r40;
      };
      r42 = dyn gettextf("no method found for %s(., n=%s) and class %s", "tail", p7, p9);
      return r42;
    };
    r44 = dyn stop[, domain](p10, NA_LGL);
    check L54() else D21();
  D7():
    deopt 31 [x5];
  D9():
    deopt 36 [n7];
  D21():
    deopt 76 [r44];
  L28():
    x6 = force? x5;
    checkMissing(x6);
    length1 = ldf length in base;
    r20 = dyn length1(x6);
    check L29() else D8();
  L30():
    n8 = force? n7;
    checkMissing(n8);
    r21 = `<`(n8, 0);
    c3 = `as.logical`(r21);
    if c3 then L31() else L7();
  L54():
    popenv;
    return r44;
  D8():
    deopt 34 [r20];
  L7():
    sym5 = ldf min;
    base5 = ldf min in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L38() else L39();
  L9(r26):
    st n = r26;
    x7 = ld x;
    check L43() else D16();
  L29():
    goto L6(r20);
  L31():
    sym4 = ldf max;
    base4 = ldf max in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L32() else L33();
  D16():
    deopt 58 [x7];
  L8(r23):
    goto L9(r23);
  L32():
    xlen = ld xlen;
    check L34() else D10();
  L33():
    r22 = dyn base4(<lang `+`(xlen, n)>, 0);
    goto L8(r22);
  L38():
    n11 = ld n;
    check L40() else D13();
  L39():
    r27 = dyn base5(<sym n>, <sym xlen>);
    goto L9(r27);
  L43():
    x8 = force? x7;
    checkMissing(x8);
    c4 = `is.object`(x8);
    if c4 then L44() else L45(x8);
  D10():
    deopt 42 [xlen];
  D13():
    deopt 51 [n11];
  L10(dx3):
    popenv;
    return dx3;
  L34():
    xlen1 = force? xlen;
    checkMissing(xlen1);
    n9 = ld n;
    check L35() else D11();
  L40():
    n12 = force? n11;
    checkMissing(n12);
    xlen2 = ld xlen;
    check L41() else D14();
  L44():
    dr = tryDispatchBuiltin.1("[", x8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(x10):
    sym6 = ldf `seq.int`;
    base6 = ldf `seq.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L47() else L48();
  D11():
    deopt 43 [xlen1, n9];
  D14():
    deopt 53 [xlen2];
  L11(x13, r30):
    __ = ldf `[` in base;
    r32 = dyn __(x13, r30);
    goto L10(r32);
  L35():
    n10 = force? n9;
    checkMissing(n10);
    r24 = `+`(xlen1, n10);
    max = ldf max in base;
    r25 = dyn max(r24, 0);
    check L36() else D12();
  L41():
    xlen3 = force? xlen2;
    checkMissing(xlen3);
    min = ldf min in base;
    r28 = dyn min(n12, xlen3);
    check L42() else D15();
  L46():
    dx2 = getTryDispatchBuiltinValue(dr);
    goto L10(dx2);
  L47():
    xlen4 = ld xlen;
    check L49() else D17();
  L48():
    r29 = dyn base6[to, `length.out`](<sym xlen>, <sym n>);
    goto L11(x10, r29);
  D12():
    deopt 48 [r25];
  D15():
    deopt 56 [r28];
  D17():
    deopt 62 [x10, xlen4];
  L36():
    goto L8(r25);
  L42():
    goto L9(r28);
  L49():
    xlen5 = force? xlen4;
    checkMissing(xlen5);
    n13 = ld n;
    check L50() else D18();
  D18():
    deopt 65 [x10, n13];
  L50():
    n14 = force? n13;
    checkMissing(n14);
    seq_int = ldf `seq.int` in base;
    r31 = dyn seq_int(xlen5, n14);
    check L51() else D19();
  D19():
    deopt 69 [x10, r31];
  L51():
    goto L11(x10, r31);
  }
}