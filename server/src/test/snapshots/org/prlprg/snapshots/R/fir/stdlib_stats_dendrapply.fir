fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg as_dendrogram:cls, reg hclust:cls, reg dist:cls, reg USArrests:*, reg USArrests1:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg dhc:*, reg dhc1:V, reg c:L, reg dhc3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r12:V, reg dendrapply:cls, reg dhc21:*, reg dhc22:V, reg p4:p(V +), reg r14:cls, reg p5:p(V +), reg r16:V, reg r17:cls, reg r18:cls, reg r19:V, reg dendrapply1:cls, reg dhc23:*, reg dhc24:V, reg p6:p(V +), reg colLab:*, reg colLab1:V, reg p7:p(V +), reg r22:V, reg par:cls, reg p8:p(V +), reg r24:V, reg plot:cls, reg dhc25:*, reg dhc26:V, reg p9:p(V +), reg r26:V, reg plot1:cls, reg dL:*, reg dL1:V, reg p10:p(V +), reg r28:V, reg par1:cls, reg op:*, reg op1:V, reg p11:p(V +), reg r30:V |
    mkenv;
    r = clos inner3204550915;
    st dendrapply = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    as_dendrogram = ldf `as.dendrogram`;
    check L7() else D2();
  L3():
    require = ldf require;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L5():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L6() else D1();
  L7():
    p3 = prom<V +>{
      hclust = ldf hclust;
      p2 = prom<V +>{
        dist = ldf dist;
        p1 = prom<V +>{
          USArrests = ld USArrests;
          USArrests1 = force? USArrests;
          checkMissing(USArrests1);
          return USArrests1;
        };
        r6 = dyn dist(p1);
        return r6;
      };
      r8 = dyn hclust(p2, "ave");
      st hc = r8;
      invisible.0();
      return r8;
    };
    r10 = dyn as_dendrogram(p3);
    check L8() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r10];
  L6():
    goto L0();
  L8():
    st dhc = r10;
    dhc = ld dhc;
    check L9() else D4();
  D4():
    deopt 13 [dhc];
  L9():
    dhc1 = force? dhc;
    checkMissing(dhc1);
    c = `is.object`(dhc1);
    if c then L10() else L11(dhc1);
  L1(dx1):
    c1 = `is.object`(dx1);
    if c1 then L13() else L14(dx1);
  L10():
    dr = tryDispatchBuiltin.1("[[", dhc1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(dhc3):
    __ = ldf `[[` in base;
    r11 = dyn __(dhc3, 2.0);
    goto L1(r11);
  L2(dx5):
    st dhc21 = dx5;
    dendrapply = ldf dendrapply;
    check L16() else D5();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(dr2);
  L14(dx3):
    __1 = ldf `[[` in base;
    r12 = dyn __1(dx3, 1.0);
    goto L2(r12);
  D5():
    deopt 23 [];
  L15():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx4);
  L16():
    p4 = prom<V +>{
      dhc21 = ld dhc21;
      dhc22 = force? dhc21;
      checkMissing(dhc22);
      return dhc22;
    };
    p5 = prom<V +>{
      r14 = clos inner4266987626;
      return r14;
    };
    r16 = dyn dendrapply(p4, p5);
    check L17() else D6();
  D6():
    deopt 26 [r16];
  L17():
    r17 = clos inner2708337952;
    checkFun.0(r17);
    r18 = r17 as cls;
    r19 = dyn r18();
    check L18() else D7();
  D7():
    deopt 30 [r19];
  L18():
    dendrapply1 = ldf dendrapply;
    check L19() else D8();
  D8():
    deopt 32 [];
  L19():
    p6 = prom<V +>{
      dhc23 = ld dhc21;
      dhc24 = force? dhc23;
      checkMissing(dhc24);
      return dhc24;
    };
    p7 = prom<V +>{
      colLab = ld colLab;
      colLab1 = force? colLab;
      checkMissing(colLab1);
      return colLab1;
    };
    r22 = dyn dendrapply1(p6, p7);
    check L20() else D9();
  D9():
    deopt 35 [r22];
  L20():
    st dL = r22;
    par = ldf par;
    check L21() else D10();
  D10():
    deopt 38 [];
  L21():
    p8 = prom<V +>{
      return <int 2, 1>;
    };
    r24 = dyn par[mfrow](p8);
    check L22() else D11();
  D11():
    deopt 41 [r24];
  L22():
    st op = r24;
    plot = ldf plot;
    check L23() else D12();
  D12():
    deopt 44 [];
  L23():
    p9 = prom<V +>{
      dhc25 = ld dhc21;
      dhc26 = force? dhc25;
      checkMissing(dhc26);
      return dhc26;
    };
    r26 = dyn plot(p9);
    check L24() else D13();
  D13():
    deopt 46 [r26];
  L24():
    plot1 = ldf plot;
    check L25() else D14();
  D14():
    deopt 48 [];
  L25():
    p10 = prom<V +>{
      dL = ld dL;
      dL1 = force? dL;
      checkMissing(dL1);
      return dL1;
    };
    r28 = dyn plot1(p10);
    check L26() else D15();
  D15():
    deopt 50 [r28];
  L26():
    par1 = ldf par;
    check L27() else D16();
  D16():
    deopt 52 [];
  L27():
    p11 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r30 = dyn par1(p11);
    check L28() else D17();
  D17():
    deopt 54 [r30];
  L28():
    popenv;
    return r30;
  }
}
fun inner3204550915(X, FUN, `...`) {
  (reg X:*, reg FUN:*, reg ddd:dots) -+> V { var X:*, var FUN:*, var `...`:dots?, reg match_fun:cls, reg FUN1:*, reg FUN2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg X1:*, reg X2:V, reg inherits:cls, reg r4:V, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg r8:cls, reg Napply:cls, reg X3:*, reg X4:V, reg p1:p(V +), reg r10:V |
    mkenv;
    st X = X;
    st FUN = FUN;
    st `...` = ddd;
    match_fun = ldf `match.fun`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    r1 = dyn match_fun(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    st FUN = r1;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L9() else L1();
  L5():
    X1 = ld X;
    check L7() else D2();
  L6():
    r2 = dyn base(<sym X>, "dendrogram");
    goto L0(r2);
  D2():
    deopt 7 [X1];
  L1():
    goto L2();
  L2():
    r8 = clos inner1737462240;
    st Napply = r8;
    Napply = ldf Napply;
    check L13() else D6();
  L7():
    X2 = force? X1;
    checkMissing(X2);
    inherits = ldf inherits in base;
    r4 = dyn inherits(X2, "dendrogram", FALSE);
    check L8() else D3();
  L9():
    stop = ldf stop;
    check L10() else D4();
  D3():
    deopt 12 [r4];
  D4():
    deopt 15 [];
  D6():
    deopt 24 [];
  L8():
    goto L0(r4);
  L10():
    r6 = dyn stop("'X' is not a dendrogram");
    check L11() else D5();
  L13():
    p1 = prom<V +>{
      X3 = ld X;
      X4 = force? X3;
      checkMissing(X4);
      return X4;
    };
    r10 = dyn Napply(p1);
    check L14() else D7();
  D5():
    deopt 17 [r6];
  D7():
    deopt 26 [r10];
  L11():
    goto L2();
  L14():
    popenv;
    return r10;
  }
}
fun inner1737462240(d) {
  (reg d:*) -+> V { var d:*, reg FUN:cls, reg d1:*, reg d2:V, reg p:p(V +), reg ddd:*, reg r1:V, reg is_leaf:cls, reg d3:*, reg d4:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg r7:*, reg r8:V, reg is_list:cls, reg r9:V, reg r10:V, reg c1:L, reg as_list:cls, reg r11:*, reg r12:V, reg p2:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg r18:*, reg r19:V, reg length:cls, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg r25:V, reg d5:*, reg d6:V, reg length1:cls, reg r26:V, reg r27:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg n:*, reg n1:V, reg vector:cls, reg r30:V, reg l:*, reg c3:L, reg r32:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r34:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg l5:*, reg r41:V, reg r42:V, reg n2:*, reg n3:V, reg r43:I, reg ___:cls, reg r44:V, reg lapply:cls, reg d7:*, reg d8:V, reg p3:p(V +), reg Napply:*, reg Napply1:V, reg p4:p(V +), reg r48:V, reg l6:*, reg c4:L, reg r50:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r52:V, reg dx3:V, reg ___1:cls, reg r53:V, reg r55:*, reg r56:V |
    mkenv;
    st d = d;
    FUN = ldf FUN;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      d1 = ld d;
      d2 = force? d1;
      checkMissing(d2);
      return d2;
    };
    ddd = ld `...`;
    r1 = dyn FUN[, `...`](p, ddd);
    check L14() else D1();
  D1():
    deopt 4 [r1];
  L14():
    st r = r1;
    is_leaf = ldf `is.leaf`;
    check L15() else D2();
  D2():
    deopt 7 [];
  L15():
    p1 = prom<V +>{
      d3 = ld d;
      d4 = force? d3;
      checkMissing(d4);
      return d4;
    };
    r3 = dyn is_leaf(p1);
    check L16() else D3();
  D3():
    deopt 9 [r3];
  L16():
    r4 = `!`(r3);
    c = `as.logical`(r4);
    if c then L17() else L0();
  L0():
    goto L12();
  L12():
    r55 = ld r;
    check L52() else D17();
  L17():
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  D17():
    deopt 66 [r55];
  L1(r6):
    r10 = `!`(r6);
    c1 = `as.logical`(r10);
    if c1 then L22() else L2();
  L18():
    r7 = ld r;
    check L20() else D4();
  L19():
    r5 = dyn base(<sym r>);
    goto L1(r5);
  L52():
    r56 = force? r55;
    checkMissing(r56);
    popenv;
    return r56;
  D4():
    deopt 13 [r7];
  L2():
    goto L3();
  L3():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L20():
    r8 = force? r7;
    checkMissing(r8);
    is_list = ldf `is.list` in base;
    r9 = dyn is_list(r8);
    check L21() else D5();
  L22():
    as_list = ldf `as.list`;
    check L23() else D6();
  D5():
    deopt 16 [r9];
  D6():
    deopt 19 [];
  L4(r17):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L21():
    goto L1(r9);
  L23():
    p2 = prom<V +>{
      r11 = ld r;
      r12 = force? r11;
      checkMissing(r12);
      return r12;
    };
    r14 = dyn as_list(p2);
    check L24() else D7();
  L26():
    r18 = ld r;
    check L28() else D8();
  L27():
    r16 = dyn base1(<sym r>);
    goto L4(r16);
  D7():
    deopt 21 [r14];
  D8():
    deopt 27 [r18];
  L5(r24, r25):
    st n = r25;
    r27 = `<`(r24, r25);
    c2 = `as.logical`(r27);
    if c2 then L34() else L6();
  L24():
    st r = r14;
    goto L3();
  L28():
    r19 = force? r18;
    checkMissing(r19);
    length = ldf length in base;
    r20 = dyn length(r19);
    check L29() else D9();
  L30():
    d5 = ld d;
    check L32() else D10();
  L31():
    r23 = dyn base2(<sym d>);
    goto L5(r17, r23);
  D9():
    deopt 30 [r20];
  D10():
    deopt 32 [r17, d5];
  L6():
    goto L10();
  L10():
    lapply = ldf lapply;
    check L46() else D15();
  L29():
    goto L4(r20);
  L32():
    d6 = force? d5;
    checkMissing(d6);
    length1 = ldf length in base;
    r26 = dyn length1(d6);
    check L33() else D11();
  L34():
    sym3 = ldf vector;
    base3 = ldf vector in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  D11():
    deopt 35 [r17, r26];
  D15():
    deopt 55 [];
  L7(r29):
    l = ld r;
    c3 = `is.object`(l);
    if c3 then L39() else L40(r29, l);
  L33():
    goto L5(r17, r26);
  L35():
    n = ld n;
    check L37() else D12();
  L36():
    r28 = dyn base3("list", <sym n>);
    goto L7(r28);
  L46():
    p3 = prom<V +>{
      d7 = ld d;
      d8 = force? d7;
      checkMissing(d8);
      return d8;
    };
    p4 = prom<V +>{
      Napply = ld Napply;
      Napply1 = force? Napply;
      checkMissing(Napply1);
      return Napply1;
    };
    r48 = dyn lapply(p3, p4);
    check L47() else D16();
  D12():
    deopt 41 [n];
  D16():
    deopt 58 [r48];
  L8(r34, dx1):
    st r = dx1;
    goto L10();
  L37():
    n1 = force? n;
    checkMissing(n1);
    vector = ldf vector in base;
    r30 = dyn vector("list", n1);
    check L38() else D13();
  L39():
    dr = tryDispatchBuiltin.0("[<-", l, r29);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L41() else L40(r29, dr);
  L40(r32, l2):
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L47():
    l6 = ld r;
    c4 = `is.object`(l6);
    if c4 then L48() else L49(r48);
  D13():
    deopt 44 [r30];
  L9(r40, l5, r41, r42):
    ___ = ldf `[<-` in base;
    r44 = dyn ___(l5, r41, r42);
    goto L8(r40, r44);
  L11(r52, dx3):
    st r = dx3;
    goto L12();
  L38():
    goto L7(r30);
  L41():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(r29, dx);
  L42():
    n2 = ld n;
    check L44() else D14();
  L43():
    r39 = dyn base4(<sym n>);
    goto L9(r32, l2, r29, r39);
  L48():
    dr2 = tryDispatchBuiltin.0("[<-", l6, r48);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(r48);
  L49(r50):
    ___1 = ldf `[<-` in base;
    r53 = dyn ___1(l6, <missing>, r48);
    goto L11(r50, r53);
  D14():
    deopt 47 [r32, l2, r29, n2];
  L44():
    n3 = force? n2;
    checkMissing(n3);
    r43 = seq_len(n3);
    goto L9(r32, l2, r29, r43);
  L50():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(r48, dx2);
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg __:cls, reg r:V, reg r1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg n1:*, reg n2:V, reg attributes:cls, reg r4:V, reg p:p(V +), reg r6:V |
    mkenv;
    st n = n;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn __("utils", "str");
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      sym = ldf attributes;
      base = ldf attributes in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      attributes = ldf attributes in base;
      r4 = dyn attributes(n2);
      goto L0(r4);
    L2():
      r2 = dyn base(<sym n>);
      goto L0(r2);
    };
    r6 = dyn r1(p);
    check L2() else D2();
  D2():
    deopt 7 [r6];
  L2():
    popenv;
    return r6;
  }
}
fun inner2708337952() {
  () -+> V { reg r:cls, reg __:cls, reg r1:V, reg r2:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg dhc21:*, reg dhc22:V, reg attr:cls, reg r5:V, reg p:p(V +), reg r7:V |
    mkenv;
    r = clos inner4266987626;
    sst colLab = r;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn __("grDevices", "rainbow");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    checkFun.0(r1);
    r2 = r1 as cls;
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      dhc21 = ld dhc21;
      dhc22 = force? dhc21;
      checkMissing(dhc22);
      attr = ldf attr in base;
      r5 = dyn attr(dhc22, "members");
      goto L0(r5);
    L2():
      r3 = dyn base(<sym dhc21>, "members");
      goto L0(r3);
    };
    r7 = dyn r2(p);
    check L2() else D2();
  D2():
    deopt 10 [r7];
  L2():
    st mycols = r7;
    st i = 0.0;
    invisible.0();
    popenv;
    return 0.0;
  }
}