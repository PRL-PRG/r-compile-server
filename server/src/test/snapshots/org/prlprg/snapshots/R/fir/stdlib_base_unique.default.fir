fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner299408298;
    st `unique.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner299408298(x, incomparables, fromLast, nmax, `...`) {
  (reg x:*, reg incomparables:*, reg fromLast:*, reg nmax:*, reg ddd:dots) -+> V { var x:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var fromLast:*, reg fromLast_isMissing:L, reg fromLast_orDefault:*, var nmax:*, reg nmax_isMissing:L, reg nmax_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg incomparables1:*, reg incomparables2:V, reg fromLast1:*, reg fromLast2:V, reg nmax1:*, reg nmax2:V, reg unique:cls, reg r5:V, reg is_factor:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r9:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x7:*, reg x8:V, reg incomparables3:*, reg incomparables4:V, reg fromLast3:*, reg fromLast4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg x9:*, reg x10:V, reg length:cls, reg r16:V, reg nlevels:cls, reg x11:*, reg x12:V, reg p1:p(V +), reg r18:V, reg r19:V, reg min:cls, reg r20:V, reg unique1:cls, reg r21:V, reg factor:cls, reg z:*, reg z1:V, reg p2:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg nlevels1:cls, reg x13:*, reg x14:V, reg p3:p(V +), reg r26:V, reg r27:I, reg p4:p(V +), reg levels:cls, reg x15:*, reg x16:V, reg p5:p(V +), reg r30:V, reg p6:p(V +), reg is_ordered:cls, reg x17:*, reg x18:V, reg p7:p(V +), reg r33:V, reg p8:p(V +), reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg x19:*, reg x20:V, reg incomparables5:*, reg incomparables6:V, reg fromLast5:*, reg fromLast6:V, reg nmax3:*, reg nmax4:V, reg unique2:cls, reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg x21:*, reg x22:V, reg inherits:cls, reg r43:V, reg c3:L, reg structure:cls, reg z2:*, reg z3:V, reg p9:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg x23:*, reg x24:V, reg class:cls, reg r47:V, reg p10:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg x25:*, reg x26:V, reg attr:cls, reg r51:V, reg p11:p(V +), reg r53:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg x27:*, reg x28:V, reg inherits1:cls, reg r56:V, reg c4:L, reg structure1:cls, reg z4:*, reg z5:V, reg p12:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg x29:*, reg x30:V, reg class1:cls, reg r60:V, reg p13:p(V +), reg r62:V, reg z6:*, reg z7:V |
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
    nmax_isMissing = missing.0(nmax);
    if nmax_isMissing then L2(NA_LGL) else L2(nmax);
  L2(nmax_orDefault):
    st nmax = nmax_orDefault;
    st `...` = ddd;
    sym = ldf `is.object`;
    base = ldf `is.object` in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L3(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L20() else L4();
  L17():
    x1 = ld x;
    check L19() else D0();
  L18():
    r = dyn base(<sym x>);
    goto L3(r);
  D0():
    deopt 1 [x1];
  L4():
    is_factor = ldf `is.factor`;
    check L30() else D6();
  L19():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    goto L3(c);
  L20():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  D6():
    deopt 21 [];
  L5(r4):
    popenv;
    return r4;
  L21():
    x3 = ld x;
    check L23() else D1();
  L22():
    r3 = dyn base1(<lang unique(x, incomparables, fromLast, nmax)>);
    goto L5(r3);
  L30():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r9 = dyn is_factor(p);
    check L31() else D7();
  D1():
    deopt 7 [x3];
  D7():
    deopt 23 [r9];
  L23():
    x4 = force? x3;
    checkMissing(x4);
    incomparables1 = ld incomparables;
    check L24() else D2();
  L31():
    c2 = `as.logical`(r9);
    if c2 then L32() else L7();
  D2():
    deopt 9 [incomparables1];
  L7():
    sym6 = ldf `.Internal`;
    base6 = ldf `.Internal` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L52() else L53();
  L24():
    incomparables2 = force? incomparables1;
    checkMissing(incomparables2);
    fromLast1 = ld fromLast;
    check L25() else D3();
  L32():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  D3():
    deopt 11 [fromLast1];
  L8(r11):
    st z = r11;
    factor = ldf factor;
    check L48() else D17();
  L12(r39):
    st z = r39;
    sym7 = ldf inherits;
    base7 = ldf inherits in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L59() else L60();
  L25():
    fromLast2 = force? fromLast1;
    checkMissing(fromLast2);
    nmax1 = ld nmax;
    check L26() else D4();
  L33():
    x7 = ld x;
    check L35() else D8();
  L34():
    r10 = dyn base2(<lang unique(x, incomparables, fromLast, min(length(x), `+`(nlevels(x), 1)))>);
    goto L8(r10);
  L52():
    x19 = ld x;
    check L54() else D19();
  L53():
    r38 = dyn base6(<lang unique(x, incomparables, fromLast, nmax)>);
    goto L12(r38);
  D4():
    deopt 13 [nmax1];
  D8():
    deopt 26 [x7];
  D17():
    deopt 52 [];
  D19():
    deopt 66 [x19];
  L13(r42):
    c3 = `as.logical`(r42);
    if c3 then L63() else L14();
  L26():
    nmax2 = force? nmax1;
    checkMissing(nmax2);
    unique = ldf unique in base;
    r5 = dyn unique(x4, incomparables2, fromLast2, nmax2);
    check L27() else D5();
  L35():
    x8 = force? x7;
    checkMissing(x8);
    incomparables3 = ld incomparables;
    check L36() else D9();
  L48():
    p2 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    p4 = prom<V +>{
      sym5 = ldf seq_len;
      base5 = ldf seq_len in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      nlevels1 = ldf nlevels;
      p3 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        return x14;
      };
      r26 = dyn nlevels1(p3);
      r27 = seq_len(r26);
      goto L0(r27);
    L2():
      r23 = dyn base5(<lang nlevels(x)>);
      goto L0(r23);
    };
    p6 = prom<V +>{
      levels = ldf levels;
      p5 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        return x16;
      };
      r30 = dyn levels(p5);
      return r30;
    };
    p8 = prom<V +>{
      is_ordered = ldf `is.ordered`;
      p7 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        return x18;
      };
      r33 = dyn is_ordered(p7);
      return r33;
    };
    r35 = dyn factor[, levels, labels, ordered](p2, p4, p6, p8);
    check L49() else D18();
  L54():
    x20 = force? x19;
    checkMissing(x20);
    incomparables5 = ld incomparables;
    check L55() else D20();
  L59():
    x21 = ld x;
    check L61() else D24();
  L60():
    r41 = dyn base7(<sym x>, "POSIXct");
    goto L13(r41);
  D5():
    deopt 16 [r5];
  D9():
    deopt 28 [incomparables3];
  D18():
    deopt 60 [r35];
  D20():
    deopt 68 [incomparables5];
  D24():
    deopt 79 [x21];
  L14():
    sym10 = ldf inherits;
    base10 = ldf inherits in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L67() else L68();
  L27():
    goto L5(r5);
  L36():
    incomparables4 = force? incomparables3;
    checkMissing(incomparables4);
    fromLast3 = ld fromLast;
    check L37() else D10();
  L49():
    popenv;
    return r35;
  L55():
    incomparables6 = force? incomparables5;
    checkMissing(incomparables6);
    fromLast5 = ld fromLast;
    check L56() else D21();
  L61():
    x22 = force? x21;
    checkMissing(x22);
    inherits = ldf inherits in base;
    r43 = dyn inherits(x22, "POSIXct", FALSE);
    check L62() else D25();
  L63():
    structure = ldf structure;
    check L64() else D26();
  D10():
    deopt 30 [fromLast3];
  D21():
    deopt 70 [fromLast5];
  D25():
    deopt 84 [r43];
  D26():
    deopt 86 [];
  L15(r55):
    c4 = `as.logical`(r55);
    if c4 then L71() else L16();
  L37():
    fromLast4 = force? fromLast3;
    checkMissing(fromLast4);
    sym3 = ldf min;
    base3 = ldf min in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L56():
    fromLast6 = force? fromLast5;
    checkMissing(fromLast6);
    nmax3 = ld nmax;
    check L57() else D22();
  L62():
    goto L13(r43);
  L64():
    p9 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    p10 = prom<V +>{
      sym8 = ldf class;
      base8 = ldf class in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      class = ldf class in base;
      r47 = dyn class(x24);
      goto L0(r47);
    L2():
      r45 = dyn base8(<sym x>);
      goto L0(r45);
    };
    p11 = prom<V +>{
      sym9 = ldf attr;
      base9 = ldf attr in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      attr = ldf attr in base;
      r51 = dyn attr(x26, "tzone");
      goto L0(r51);
    L2():
      r49 = dyn base9(<sym x>, "tzone");
      goto L0(r49);
    };
    r53 = dyn structure[, class, tzone](p9, p10, p11);
    check L65() else D27();
  L67():
    x27 = ld x;
    check L69() else D28();
  L68():
    r54 = dyn base10(<sym x>, "Date");
    goto L15(r54);
  D22():
    deopt 72 [nmax3];
  D27():
    deopt 92 [r53];
  D28():
    deopt 95 [x27];
  L9(r13):
    unique1 = ldf unique in base;
    r21 = dyn unique1(x8, incomparables4, fromLast4, r13);
    check L47() else D16();
  L16():
    z6 = ld z;
    check L75() else D32();
  L38():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L39():
    r12 = dyn base3(<lang length(x)>, <lang `+`(nlevels(x), 1)>);
    goto L9(r12);
  L57():
    nmax4 = force? nmax3;
    checkMissing(nmax4);
    unique2 = ldf unique in base;
    r40 = dyn unique2(x20, incomparables6, fromLast6, nmax4);
    check L58() else D23();
  L65():
    popenv;
    return r53;
  L69():
    x28 = force? x27;
    checkMissing(x28);
    inherits1 = ldf inherits in base;
    r56 = dyn inherits1(x28, "Date", FALSE);
    check L70() else D29();
  L71():
    structure1 = ldf structure;
    check L72() else D30();
  D16():
    deopt 49 [r21];
  D23():
    deopt 75 [r40];
  D29():
    deopt 100 [r56];
  D30():
    deopt 102 [];
  D32():
    deopt 107 [z6];
  L10(r15):
    nlevels = ldf nlevels;
    check L44() else D13();
  L40():
    x9 = ld x;
    check L42() else D11();
  L41():
    r14 = dyn base4(<sym x>);
    goto L10(r14);
  L47():
    goto L8(r21);
  L58():
    goto L12(r40);
  L70():
    goto L15(r56);
  L72():
    p12 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      return z5;
    };
    p13 = prom<V +>{
      sym11 = ldf class;
      base11 = ldf class in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r59):
      return r59;
    L1():
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      class1 = ldf class in base;
      r60 = dyn class1(x30);
      goto L0(r60);
    L2():
      r58 = dyn base11(<sym x>);
      goto L0(r58);
    };
    r62 = dyn structure1[, class](p12, p13);
    check L73() else D31();
  L75():
    z7 = force? z6;
    checkMissing(z7);
    popenv;
    return z7;
  D11():
    deopt 36 [x9];
  D13():
    deopt 41 [];
  D31():
    deopt 106 [r62];
  L42():
    x10 = force? x9;
    checkMissing(x10);
    length = ldf length in base;
    r16 = dyn length(x10);
    check L43() else D12();
  L44():
    p1 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r18 = dyn nlevels(p1);
    check L45() else D14();
  L73():
    popenv;
    return r62;
  D12():
    deopt 39 [r16];
  D14():
    deopt 43 [r18];
  L43():
    goto L10(r16);
  L45():
    r19 = `+`(r18, 1);
    min = ldf min in base;
    r20 = dyn min(r15, r19);
    check L46() else D15();
  D15():
    deopt 47 [r20];
  L46():
    goto L9(r20);
  }
}