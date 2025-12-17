fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1746003223;
    st `kernapply.tskernel` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1746003223(x, k, `...`) {
  (reg x:*, reg k:*, reg ddd:dots) -+> V { var x:*, var k:*, var `...`:dots?, reg is_tskernel:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg is_tskernel1:cls, reg k1:*, reg k2:V, reg p1:p(V +), reg r6:V, reg r7:V, reg c1:L, reg stop1:cls, reg r8:V, reg k3:*, reg k4:V, reg c2:L, reg k6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg n:*, reg n1:V, reg rep_len:cls, reg r15:V, reg x3:*, reg x4:V, reg c3:L, reg x6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg x7:*, reg x8:V, reg c4:L, reg x11:V, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg x14:V, reg dx5:V, reg r16:V, reg r17:V, reg x15:*, reg x16:V, reg c5:L, reg x19:V, reg r19:V, reg x20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg x22:V, reg r21:V, reg dx7:V, reg r22:V, reg r23:V, reg __:cls, reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg n2:*, reg n3:V, reg rep_len1:cls, reg r27:V, reg c6:cls, reg r28:V, reg kernapply:cls, reg xx:*, reg xx1:V, reg p2:p(V +), reg k7:*, reg k8:V, reg p3:p(V +), reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg coef:*, reg coef1:V, reg length:cls, reg r34:V, reg ___:cls, reg r35:V, reg kernel:cls, reg coef2:*, reg coef3:V, reg c7:L, reg coef5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg m:*, reg m1:V, reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg coef8:V, reg r40:V, reg r41:V, reg coef9:*, reg coef10:V, reg length1:cls, reg r42:V, reg r43:V, reg __1:cls, reg r44:V, reg p4:p(V +), reg m2:*, reg m3:V, reg p5:p(V +), reg paste0:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r47:V, reg r48:V, reg x23:*, reg x24:V, reg attr:cls, reg r49:V, reg p6:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg r52:V, reg k9:*, reg k10:V, reg attr1:cls, reg r53:V, reg p7:p(V +), reg r55:V, reg p8:p(V +), reg r57:V |
    mkenv;
    st x = x;
    st k = k;
    st `...` = ddd;
    is_tskernel = ldf `is.tskernel`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_tskernel(p);
    check L10() else D1();
  D1():
    deopt 3 [r1];
  L10():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L11() else L0();
  L0():
    goto L1();
  L1():
    is_tskernel1 = ldf `is.tskernel`;
    check L15() else D4();
  L11():
    stop = ldf stop;
    check L12() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 12 [];
  L12():
    r3 = dyn stop("'x' is not a kernel");
    check L13() else D3();
  L15():
    p1 = prom<V +>{
      k1 = ld k;
      k2 = force? k1;
      checkMissing(k2);
      return k2;
    };
    r6 = dyn is_tskernel1(p1);
    check L16() else D5();
  D3():
    deopt 8 [r3];
  D5():
    deopt 14 [r6];
  L13():
    goto L1();
  L16():
    r7 = `!`(r6);
    c1 = `as.logical`(r7);
    if c1 then L17() else L2();
  L2():
    goto L3();
  L3():
    k3 = ld k;
    check L21() else D8();
  L17():
    stop1 = ldf stop;
    check L18() else D6();
  D6():
    deopt 17 [];
  D8():
    deopt 22 [k3];
  L18():
    r8 = dyn stop1("'k' is not a kernel");
    check L19() else D7();
  L21():
    k4 = force? k3;
    checkMissing(k4);
    c2 = `is.object`(k4);
    if c2 then L23() else L24(k4);
  D7():
    deopt 19 [r8];
  L19():
    goto L3();
  L22(dx1):
    st n = dx1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L23():
    dr = tryDispatchBuiltin.1("$", k4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(k6):
    r10 = `$`(k6, <sym m>);
    goto L22(r10);
  L4(r12):
    st xx = r12;
    kernapply = ldf kernapply;
    check L51() else D17();
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(dx);
  L26():
    sym1 = ldf rep_len;
    base1 = ldf rep_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L27():
    r11 = dyn base(<lang rep_len(0.0, n)>, <lang `[`(x, `:`(`-`(`$`(x, m)), `$`(x, m)))>, <lang rep_len(0.0, n)>);
    goto L4(r11);
  D17():
    deopt 56 [];
  L5(r14):
    x3 = ld x;
    check L32() else D11();
  L28():
    n = ld n;
    check L30() else D9();
  L29():
    r13 = dyn base1(0.0, <sym n>);
    goto L5(r13);
  L51():
    p2 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p3 = prom<V +>{
      k7 = ld k;
      k8 = force? k7;
      checkMissing(k8);
      return k8;
    };
    r31 = dyn kernapply[, , circular](p2, p3, TRUE);
    check L52() else D18();
  D9():
    deopt 31 [n];
  D11():
    deopt 35 [x3];
  D18():
    deopt 61 [r31];
  L30():
    n1 = force? n;
    checkMissing(n1);
    rep_len = ldf rep_len in base;
    r15 = dyn rep_len(0.0, n1);
    check L31() else D10();
  L32():
    x4 = force? x3;
    checkMissing(x4);
    c3 = `is.object`(x4);
    if c3 then L33() else L34(x4);
  L52():
    st coef = r31;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  D10():
    deopt 34 [r15];
  L6(dx3):
    sym2 = ldf rep_len;
    base2 = ldf rep_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L8(r33):
    ___ = ldf `%/%` in base;
    r35 = dyn ___(r33, 2);
    check L57() else D21();
  L31():
    goto L5(r15);
  L33():
    dr2 = tryDispatchBuiltin.1("[", x4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L35() else L34(dr2);
  L34(x6):
    x7 = ld x;
    check L36() else D12();
  L53():
    coef = ld coef;
    check L55() else D19();
  L54():
    r32 = dyn base3(<sym coef>);
    goto L8(r32);
  D12():
    deopt 37 [x6, x7];
  D19():
    deopt 66 [coef];
  D21():
    deopt 72 [r35];
  L7(r26):
    c6 = ldf c in base;
    r28 = dyn c6(r14, dx3, r26);
    check L50() else D16();
  L35():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L36():
    x8 = force? x7;
    checkMissing(x8);
    c4 = `is.object`(x8);
    if c4 then L38() else L39(x6, x8);
  L46():
    n2 = ld n;
    check L48() else D14();
  L47():
    r25 = dyn base2(0.0, <sym n>);
    goto L7(r25);
  L55():
    coef1 = force? coef;
    checkMissing(coef1);
    length = ldf length in base;
    r34 = dyn length(coef1);
    check L56() else D20();
  L57():
    st m = r35;
    kernel = ldf kernel;
    check L58() else D22();
  D14():
    deopt 48 [n2];
  D16():
    deopt 53 [r28];
  D20():
    deopt 69 [r34];
  D22():
    deopt 75 [];
  L37(x14, dx5):
    r17 = `-`(<missing>, dx5);
    x15 = ld x;
    check L41() else D13();
  L38():
    dr4 = tryDispatchBuiltin.1("$", x8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L40() else L39(x6, dr4);
  L39(x11, x12):
    r16 = `$`(x12, <sym m>);
    goto L37(x11, r16);
  L48():
    n3 = force? n2;
    checkMissing(n3);
    rep_len1 = ldf rep_len in base;
    r27 = dyn rep_len1(0.0, n3);
    check L49() else D15();
  L50():
    goto L4(r28);
  L56():
    goto L8(r34);
  L58():
    p4 = prom<V +>{
      coef2 = ld coef;
      coef3 = force? coef2;
      checkMissing(coef3);
      c7 = `is.object`(coef3);
      if c7 then L2() else L3(coef3);
    L0(dx9):
      return dx9;
    L2():
      dr8 = tryDispatchBuiltin.1("[", coef3);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(coef5):
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      r36 = `+`(m1, 1);
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L1(coef8, r40, r41):
      r43 = `:`(r40, r41);
      __1 = ldf `[` in base;
      r44 = dyn __1(coef8, r43);
      goto L0(r44);
    L4():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    L5():
      coef9 = ld coef;
      coef10 = force? coef9;
      checkMissing(coef10);
      length1 = ldf length in base;
      r42 = dyn length1(coef10);
      goto L1(coef5, r36, r42);
    L6():
      r39 = dyn base4(<sym coef>);
      goto L1(coef5, r36, r39);
    };
    p5 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    p8 = prom<V +>{
      paste0 = ldf paste0;
      p6 = prom<V +>{
        sym5 = ldf attr;
        base5 = ldf attr in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r48):
        return r48;
      L1():
        x23 = ld x;
        x24 = force? x23;
        checkMissing(x24);
        attr = ldf attr in base;
        r49 = dyn attr(x24, "name");
        goto L0(r49);
      L2():
        r47 = dyn base5(<sym x>, "name");
        goto L0(r47);
      };
      p7 = prom<V +>{
        sym6 = ldf attr;
        base6 = ldf attr in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r52):
        return r52;
      L1():
        k9 = ld k;
        k10 = force? k9;
        checkMissing(k10);
        attr1 = ldf attr in base;
        r53 = dyn attr1(k10, "name");
        goto L0(r53);
      L2():
        r51 = dyn base6(<sym k>, "name");
        goto L0(r51);
      };
      r55 = dyn paste0("Composite(", p6, ",", p7, ")");
      return r55;
    };
    r57 = dyn kernel(p4, p5, p8);
    check L59() else D23();
  D13():
    deopt 40 [x14, r17, x15];
  D15():
    deopt 51 [r27];
  D23():
    deopt 79 [r57];
  L40():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L37(x6, dx4);
  L41():
    x16 = force? x15;
    checkMissing(x16);
    c5 = `is.object`(x16);
    if c5 then L43() else L44(x14, r17, x16);
  L49():
    goto L7(r27);
  L59():
    popenv;
    return r57;
  L42(x22, r21, dx7):
    r23 = `:`(r21, dx7);
    __ = ldf `[` in base;
    r24 = dyn __(x22, r23);
    goto L6(r24);
  L43():
    dr6 = tryDispatchBuiltin.1("$", x16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L45() else L44(x14, r17, dr6);
  L44(x19, r19, x20):
    r22 = `$`(x20, <sym m>);
    goto L42(x19, r19, r22);
  L45():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L42(x14, r17, dx6);
  }
}