fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2966827304;
    st plotNodeLimit = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2966827304(x1, x2, subtree, center) {
  (reg x1:*, reg x2:*, reg subtree:*, reg center:*) -+> V { var x1:*, var x2:*, var subtree:*, var center:*, reg is_leaf:cls, reg subtree1:*, reg subtree2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg c2:V, reg x3:*, reg x4:V, reg x5:*, reg x6:V, reg r3:V, reg c3:L, reg c4:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x7:*, reg x8:V, reg inner:*, reg inner1:V, reg c6:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg subtree3:*, reg subtree4:V, reg length:cls, reg r8:V, reg _memberDend:cls, reg subtree5:*, reg subtree6:V, reg p1:p(V +), reg r10:V, reg integer:cls, reg K:*, reg K1:V, reg p2:p(V +), reg r12:V, reg x9:*, reg x10:V, reg K2:*, reg K3:V, reg r13:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x11:V, reg _memberDend1:cls, reg subtree7:*, reg subtree8:V, reg c8:L, reg subtree10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg k:*, reg k1:V, reg __:cls, reg r14:V, reg p3:p(V +), reg r16:V, reg xx1:*, reg xx2:V, reg center1:*, reg center2:V, reg c9:L, reg x12:*, reg x13:V, reg x14:*, reg x15:V, reg r17:V, reg m:*, reg m1:V, reg r18:V, reg mTop:*, reg mTop1:V, reg r19:V, reg i7:I, reg xx5:V, reg r20:V, reg m2:*, reg m3:V, reg r21:V, reg xx6:*, reg xx7:V, reg l1:*, reg c10:L, reg i9:I, reg xx9:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i11:I, reg dx3:V, reg k2:*, reg k3:V, reg ___:cls, reg r22:V, reg limit:*, reg limit1:V, reg limit2:V, reg x16:*, reg x17:V, reg c11:cls, reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg subtree11:*, reg subtree12:V, reg attr:cls, reg r26:V, reg center3:*, reg center4:V, reg c12:L, reg c13:V, reg inner2:*, reg inner3:V, reg c15:L, reg c18:L, reg c19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg c24:L, reg c25:L, reg r28:V, reg mid:*, reg mid1:V, reg is_numeric:cls, reg r29:V, reg r30:V, reg c26:L, reg c27:V, reg c30:L, reg c31:V, reg center5:*, reg center6:V, reg c33:L, reg mean:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg x18:*, reg x19:V, reg x20:*, reg x21:V, reg c34:cls, reg r33:V, reg p4:p(V +), reg r35:V, reg r36:V, reg x22:*, reg x23:V, reg _midDend:cls, reg subtree13:*, reg subtree14:V, reg p5:p(V +), reg r38:V, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg x24:*, reg x25:V, reg limit3:*, reg limit4:V, reg list:cls, reg r42:V |
    mkenv;
    st x1 = x1;
    st x2 = x2;
    st subtree = subtree;
    st center = center;
    is_leaf = ldf `is.leaf`;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    p = prom<V +>{
      subtree1 = ld subtree;
      subtree2 = force? subtree1;
      checkMissing(subtree2);
      return subtree2;
    };
    r1 = dyn is_leaf(p);
    check L18() else D1();
  D1():
    deopt 3 [r1];
  L18():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L19() else L0(c);
  L0(c2):
    st inner = c2;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L19():
    x3 = ld x1;
    check L20() else D2();
  D2():
    deopt 5 [c, x3];
  L1(r5):
    st limit = r5;
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L20():
    x4 = force? x3;
    checkMissing(x4);
    x5 = ld x2;
    check L21() else D3();
  L23():
    x7 = ld x1;
    check L25() else D4();
  L24():
    r4 = dyn base(<sym x1>, <lang if(inner, {
        `<-`(K, length(subtree));
        `<-`(mTop, .memberDend(subtree));
        `<-`(limit, integer(K));
        `<-`(xx1, x1);
        for(k, `:`(1, K), {
            `<-`(m, .memberDend(`[[`(subtree, k)));
            `<-`(xx1, `+`(xx1, `(`(if(center, `/`(`*`(`(`(`-`(x2, x1)), m), mTop), m))));
            `<-`(`[`(limit, k), xx1)
          });
        limit
      }, x2)>);
    goto L1(r4);
  D3():
    deopt 6 [c, x4, x5];
  D4():
    deopt 13 [x7];
  L10(r25):
    st mid = r25;
    center3 = ld center;
    check L63() else D30();
  L21():
    x6 = force? x5;
    checkMissing(x6);
    r3 = `!=`(x4, x6);
    c3 = `as.logical`(r3);
    c4 = `&&`(c, c3);
    goto L0(c4);
  L25():
    x8 = force? x7;
    checkMissing(x8);
    inner = ld inner;
    check L26() else D5();
  L59():
    subtree11 = ld subtree;
    check L61() else D28();
  L60():
    r24 = dyn base2(<sym subtree>, "midpoint");
    goto L10(r24);
  D5():
    deopt 15 [inner];
  D28():
    deopt 82 [subtree11];
  D30():
    deopt 88 [center3];
  L26():
    inner1 = force? inner;
    checkMissing(inner1);
    c6 = `as.logical`(inner1);
    if c6 then L27() else L2();
  L61():
    subtree12 = force? subtree11;
    checkMissing(subtree12);
    attr = ldf attr in base;
    r26 = dyn attr(subtree12, "midpoint");
    check L62() else D29();
  L63():
    center4 = force? center3;
    checkMissing(center4);
    c12 = `as.logical`(center4);
    if c12 then L11(c12) else L64();
  D29():
    deopt 86 [r26];
  L2():
    x16 = ld x2;
    check L57() else D26();
  L9(limit2):
    c11 = ldf c in base;
    r23 = dyn c11(x8, limit2);
    check L58() else D27();
  L11(c13):
    st center = c13;
    center5 = ld center;
    check L73() else D34();
  L27():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L62():
    goto L10(r26);
  L64():
    inner2 = ld inner;
    check L65() else D31();
  D26():
    deopt 75 [x16];
  D27():
    deopt 78 [r23];
  D31():
    deopt 90 [c12, inner2];
  D34():
    deopt 102 [center5];
  L3(r7):
    st K = r7;
    _memberDend = ldf `.memberDend`;
    check L32() else D8();
  L28():
    subtree3 = ld subtree;
    check L30() else D6();
  L29():
    r6 = dyn base1(<sym subtree>);
    goto L3(r6);
  L57():
    x17 = force? x16;
    checkMissing(x17);
    goto L9(x17);
  L58():
    goto L1(r23);
  L65():
    inner3 = force? inner2;
    checkMissing(inner3);
    c15 = `as.logical`(inner3);
    if c15 then L66() else L12(c12, c15);
  L73():
    center6 = force? center5;
    checkMissing(center6);
    c33 = `as.logical`(center6);
    if c33 then L74() else L14();
  D6():
    deopt 19 [subtree3];
  D8():
    deopt 25 [];
  L12(c18, c19):
    c30 = `as.logical`(c19);
    c31 = `||`(c18, c30);
    goto L11(c31);
  L14():
    x22 = ld x1;
    check L78() else D37();
  L15(r36):
    st x = r36;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L81() else L82();
  L30():
    subtree4 = force? subtree3;
    checkMissing(subtree4);
    length = ldf length in base;
    r8 = dyn length(subtree4);
    check L31() else D7();
  L32():
    p1 = prom<V +>{
      subtree5 = ld subtree;
      subtree6 = force? subtree5;
      checkMissing(subtree6);
      return subtree6;
    };
    r10 = dyn _memberDend(p1);
    check L33() else D9();
  L66():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L67() else L68();
  L74():
    mean = ldf mean;
    check L75() else D35();
  D7():
    deopt 22 [r8];
  D9():
    deopt 27 [r10];
  D35():
    deopt 105 [];
  D37():
    deopt 108 [x22];
  L13(c24, c25, r28):
    r30 = `!`(r28);
    c26 = `as.logical`(r30);
    c27 = `&&`(c25, c26);
    goto L12(c24, c27);
  L16(r41):
    popenv;
    return r41;
  L31():
    goto L3(r8);
  L33():
    st mTop = r10;
    integer = ldf integer;
    check L34() else D10();
  L67():
    mid = ld mid;
    check L69() else D32();
  L68():
    r27 = dyn base3(<sym mid>);
    goto L13(c12, c15, r27);
  L75():
    p4 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      x18 = ld x1;
      x19 = force? x18;
      checkMissing(x19);
      x20 = ld x2;
      x21 = force? x20;
      checkMissing(x21);
      c34 = ldf c in base;
      r33 = dyn c34(x19, x21);
      goto L0(r33);
    L2():
      r31 = dyn base4(<sym x1>, <sym x2>);
      goto L0(r31);
    };
    r35 = dyn mean(p4);
    check L76() else D36();
  L78():
    x23 = force? x22;
    checkMissing(x23);
    _midDend = ldf `.midDend`;
    check L79() else D38();
  L81():
    x24 = ld x;
    check L83() else D40();
  L82():
    r40 = dyn base5[x, limit](<sym x>, <sym limit>);
    goto L16(r40);
  D10():
    deopt 30 [];
  D32():
    deopt 94 [c12, c15, mid];
  D36():
    deopt 107 [r35];
  D38():
    deopt 110 [x23];
  D40():
    deopt 117 [x24];
  L34():
    p2 = prom<V +>{
      K = ld K;
      K1 = force? K;
      checkMissing(K1);
      return K1;
    };
    r12 = dyn integer(p2);
    check L35() else D11();
  L69():
    mid1 = force? mid;
    checkMissing(mid1);
    is_numeric = ldf `is.numeric` in base;
    r29 = dyn is_numeric(mid1);
    check L70() else D33();
  L76():
    goto L15(r35);
  L79():
    p5 = prom<V +>{
      subtree13 = ld subtree;
      subtree14 = force? subtree13;
      checkMissing(subtree14);
      return subtree14;
    };
    r38 = dyn _midDend(p5);
    check L80() else D39();
  L83():
    x25 = force? x24;
    checkMissing(x25);
    limit3 = ld limit;
    check L84() else D41();
  D11():
    deopt 32 [r12];
  D33():
    deopt 97 [c12, c15, r29];
  D39():
    deopt 112 [x23, r38];
  D41():
    deopt 120 [limit3];
  L35():
    st limit = r12;
    x9 = ld x1;
    check L36() else D12();
  L70():
    goto L13(c12, c15, r29);
  L80():
    r39 = `+`(x23, r38);
    goto L15(r39);
  L84():
    limit4 = force? limit3;
    checkMissing(limit4);
    list = ldf list in base;
    r42 = dyn list(x25, limit4);
    check L85() else D42();
  D12():
    deopt 34 [x9];
  D42():
    deopt 124 [r42];
  L36():
    x10 = force? x9;
    checkMissing(x10);
    st xx1 = x10;
    K2 = ld K;
    check L37() else D13();
  L85():
    goto L16(r42);
  D13():
    deopt 38 [1, K2];
  L37():
    K3 = force? K2;
    checkMissing(K3);
    r13 = `:`(1, K3);
    s = toForSeq(r13);
    l = length(s);
    i = 0;
    goto L4(i);
  L4(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l, i2);
    if c7 then L38() else L8();
  L8():
    x11 = `[[`(s, i2, NULL, TRUE);
    st k = x11;
    _memberDend1 = ldf `.memberDend`;
    check L39() else D14();
  L38():
    limit = ld limit;
    check L55() else D25();
  D14():
    deopt 42 [i2];
  D25():
    deopt 73 [limit];
  L39():
    p3 = prom<V +>{
      subtree7 = ld subtree;
      subtree8 = force? subtree7;
      checkMissing(subtree8);
      c8 = `is.object`(subtree8);
      if c8 then L1() else L2(subtree8);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", subtree8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(subtree10):
      k = ld k;
      k1 = force? k;
      __ = ldf `[[` in base;
      r14 = dyn __(subtree10, k1);
      goto L0(r14);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r16 = dyn _memberDend1(p3);
    check L40() else D15();
  L55():
    limit1 = force? limit;
    checkMissing(limit1);
    goto L9(limit1);
  D15():
    deopt 44 [i2, r16];
  L40():
    st m = r16;
    xx1 = ld xx1;
    check L41() else D16();
  D16():
    deopt 46 [i2, xx1];
  L41():
    xx2 = force? xx1;
    checkMissing(xx2);
    center1 = ld center;
    check L42() else D17();
  D17():
    deopt 47 [i2, xx2, center1];
  L42():
    center2 = force? center1;
    checkMissing(center2);
    c9 = `as.logical`(center2);
    if c9 then L43() else L5();
  L5():
    m2 = ld m;
    check L49() else D22();
  L6(i7, xx5, r20):
    r21 = `+`(xx5, r20);
    st xx1 = r21;
    xx6 = ld xx1;
    check L50() else D23();
  L43():
    x12 = ld x2;
    check L44() else D18();
  D18():
    deopt 49 [i2, xx2, x12];
  D22():
    deopt 57 [i2, xx2, m2];
  D23():
    deopt 62 [i7, xx6];
  L44():
    x13 = force? x12;
    checkMissing(x13);
    x14 = ld x1;
    check L45() else D19();
  L49():
    m3 = force? m2;
    checkMissing(m3);
    goto L6(i2, xx2, m3);
  L50():
    xx7 = force? xx6;
    checkMissing(xx7);
    l1 = ld limit;
    c10 = `is.object`(l1);
    if c10 then L51() else L52(i7, xx7, l1);
  D19():
    deopt 50 [i2, xx2, x13, x14];
  L7(i11, dx3):
    st limit = dx3;
    goto L4(i11);
  L45():
    x15 = force? x14;
    checkMissing(x15);
    r17 = `-`(x13, x15);
    m = ld m;
    check L46() else D20();
  L51():
    dr2 = tryDispatchBuiltin.0("[<-", l1, xx7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(i7, xx7, dr2);
  L52(i9, xx9, l3):
    k2 = ld k;
    check L54() else D24();
  D20():
    deopt 52 [i2, xx2, r17, m];
  D24():
    deopt 65 [i9, xx9, l3, xx7, k2];
  L46():
    m1 = force? m;
    checkMissing(m1);
    r18 = `*`(r17, m1);
    mTop = ld mTop;
    check L47() else D21();
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(i7, dx2);
  L54():
    k3 = force? k2;
    ___ = ldf `[<-` in base;
    r22 = dyn ___(l3, xx7, k3);
    goto L7(i9, r22);
  D21():
    deopt 54 [i2, xx2, r18, mTop];
  L47():
    mTop1 = force? mTop;
    checkMissing(mTop1);
    r19 = `/`(r18, mTop1);
    goto L6(i2, xx2, r19);
  }
}