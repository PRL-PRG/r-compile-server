fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1738085019;
    st `.bibentry_expand_crossrefs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1738085019(x, more) {
  (reg x:*, reg more:*) -+> V { var x:*, var more:*, reg more_isMissing:L, reg more_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg more1:*, reg more2:V, reg length:cls, reg r6:V, reg c:L, reg do_call:cls, reg c1:*, reg c2:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg x1:*, reg x2:V, reg list1:cls, reg r12:V, reg more3:*, reg more4:V, reg c3:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg r16:V, reg x3:*, reg x4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg x5:*, reg x6:V, reg unclass:cls, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg y:*, reg y1:V, reg unclass1:cls, reg r22:V, reg lapply:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg __:*, reg __1:V, reg p4:p(V +), reg r25:V, reg which:cls, reg lengths:cls, reg crossrefs:*, reg crossrefs1:V, reg p5:p(V +), reg r27:V, reg r28:V, reg p6:p(V +), reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg pc:*, reg pc1:V, reg length1:cls, reg r33:V, reg c4:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg unlist:cls, reg crossrefs2:*, reg crossrefs3:V, reg c5:L, reg crossrefs5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pc2:*, reg pc3:V, reg __2:cls, reg r36:V, reg p7:p(V +), reg r38:V, reg _bibentry_get_key:cls, reg y2:*, reg y3:V, reg p8:p(V +), reg r40:V, reg match:cls, reg r41:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg r43:V, reg pk:*, reg pk1:V, reg is_na:cls, reg r44:V, reg r45:V, reg Map:cls, reg r46:cls, reg p9:p(V +), reg x9:*, reg x10:V, reg c6:L, reg x12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg pc4:*, reg pc5:V, reg c7:L, reg x14:V, reg pc7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg x16:V, reg dx5:V, reg ok:*, reg ok1:V, reg __3:cls, reg r48:V, reg __4:cls, reg r49:V, reg p10:p(V +), reg y4:*, reg y5:V, reg c8:L, reg y7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg pk2:*, reg pk3:V, reg c9:L, reg y9:V, reg pk5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg y11:V, reg dx9:V, reg ok2:*, reg ok3:V, reg __5:cls, reg r51:V, reg __6:cls, reg r52:V, reg p11:p(V +), reg r54:V, reg l:*, reg c10:L, reg r56:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg pc8:*, reg pc9:V, reg c11:L, reg r61:V, reg l4:*, reg r62:V, reg pc11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg r65:V, reg l6:*, reg r66:V, reg dx13:V, reg ok4:*, reg ok5:V, reg __7:cls, reg r67:V, reg ___:cls, reg r68:V, reg lapply1:cls, reg x17:*, reg x18:V, reg c12:L, reg x20:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg pc12:*, reg pc13:V, reg __8:cls, reg r69:V, reg p12:p(V +), reg r71:cls, reg p13:p(V +), reg r73:V, reg which1:cls, reg vapply:cls, reg status:*, reg status1:V, reg p14:p(V +), reg inherits:*, reg inherits1:V, reg p15:p(V +), reg r76:V, reg p16:p(V +), reg r78:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r79:V, reg r80:V, reg bad:*, reg bad1:V, reg length2:cls, reg r81:V, reg c13:L, reg bad2:*, reg bad3:V, reg s:V, reg l7:I, reg i:I, reg i1:I, reg i2:I, reg c14:L, reg x21:V, reg warning:cls, reg gettextf:cls, reg pc14:*, reg pc15:V, reg c15:L, reg pc17:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg b:*, reg b1:V, reg __9:cls, reg r82:V, reg p17:p(V +), reg conditionMessage:cls, reg status2:*, reg status3:V, reg c16:L, reg status5:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg b2:*, reg b3:V, reg __10:cls, reg r84:V, reg p18:p(V +), reg r86:V, reg p19:p(V +), reg r88:V, reg p20:p(V +), reg r90:V, reg l8:*, reg c17:L, reg r92:dots, reg l10:*, reg dr20:V, reg dc10:L, reg dx20:V, reg r94:dots, reg dx21:V, reg pc18:*, reg pc19:V, reg c18:L, reg r97:dots, reg l12:*, reg r98:dots, reg pc21:V, reg dr22:V, reg dc11:L, reg dx22:V, reg r101:dots, reg l14:*, reg r102:dots, reg dx23:V, reg bad4:*, reg bad5:V, reg __11:cls, reg r103:V, reg ___1:cls, reg r104:V, reg r105:dots, reg _bibentry:cls, reg x22:*, reg x23:V, reg p21:p(V +), reg r108:V |
    mkenv;
    st x = x;
    more_isMissing = missing.0(more);
    if more_isMissing then L0() else L1(more);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(more_orDefault):
    st more = more_orDefault;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L2(r5):
    c = `as.logical`(r5);
    if c then L25() else L3();
  L21():
    more1 = ld more;
    check L23() else D0();
  L22():
    r4 = dyn base1(<sym more>);
    goto L2(r4);
  D0():
    deopt 2 [more1];
  L3():
    x3 = ld x;
    check L29() else D4();
  L4(r16):
    st y = r16;
    sym4 = ldf unclass;
    base4 = ldf unclass in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  L23():
    more2 = force? more1;
    checkMissing(more2);
    length = ldf length in base;
    r6 = dyn length(more2);
    check L24() else D1();
  L25():
    do_call = ldf `do.call`;
    check L26() else D2();
  D1():
    deopt 5 [r6];
  D2():
    deopt 7 [];
  D4():
    deopt 11 [x3];
  L5(r18):
    st x = r18;
    sym5 = ldf unclass;
    base5 = ldf unclass in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L34() else L35();
  L24():
    goto L2(r6);
  L26():
    p1 = prom<V +>{
      c1 = ld c;
      c2 = force? c1;
      checkMissing(c2);
      return c2;
    };
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r9):
      return r9;
    L2():
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L3():
      r8 = dyn base2(<lang list(x)>, <sym more>);
      goto L0(r8);
    L1(r11):
      more3 = ld more;
      more4 = force? more3;
      checkMissing(more4);
      c3 = ldf c in base;
      r13 = dyn c3(r11, more4);
      goto L0(r13);
    L4():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      list1 = ldf list in base;
      r12 = dyn list1(x2);
      goto L1(r12);
    L5():
      r10 = dyn base3(<sym x>);
      goto L1(r10);
    };
    r15 = dyn do_call(p1, p2);
    check L27() else D3();
  L29():
    x4 = force? x3;
    checkMissing(x4);
    goto L4(x4);
  L30():
    x5 = ld x;
    check L32() else D5();
  L31():
    r17 = dyn base4(<sym x>);
    goto L5(r17);
  D3():
    deopt 10 [r15];
  D5():
    deopt 16 [x5];
  L6(r21):
    st y = r21;
    lapply = ldf lapply;
    check L38() else D9();
  L27():
    goto L4(r15);
  L32():
    x6 = force? x5;
    checkMissing(x6);
    unclass = ldf unclass in base;
    r19 = dyn unclass(x6);
    check L33() else D6();
  L34():
    y = ld y;
    check L36() else D7();
  L35():
    r20 = dyn base5(<sym y>);
    goto L6(r20);
  D6():
    deopt 19 [r19];
  D7():
    deopt 23 [y];
  D9():
    deopt 29 [];
  L33():
    goto L5(r19);
  L36():
    y1 = force? y;
    checkMissing(y1);
    unclass1 = ldf unclass in base;
    r22 = dyn unclass1(y1);
    check L37() else D8();
  L38():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p4 = prom<V +>{
      __ = ld `[[`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r25 = dyn lapply(p3, p4, "crossref");
    check L39() else D10();
  D8():
    deopt 26 [r22];
  D10():
    deopt 33 [r25];
  L37():
    goto L6(r22);
  L39():
    st crossrefs = r25;
    which = ldf which;
    check L40() else D11();
  D11():
    deopt 36 [];
  L40():
    p6 = prom<V +>{
      lengths = ldf lengths;
      p5 = prom<V +>{
        crossrefs = ld crossrefs;
        crossrefs1 = force? crossrefs;
        checkMissing(crossrefs1);
        return crossrefs1;
      };
      r27 = dyn lengths(p5);
      r28 = `>`(r27, 0);
      return r28;
    };
    r30 = dyn which(p6);
    check L41() else D12();
  D12():
    deopt 38 [r30];
  L41():
    st pc = r30;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L42() else L43();
  L7(r32):
    c4 = `as.logical`(r32);
    if c4 then L46() else L8();
  L42():
    pc = ld pc;
    check L44() else D13();
  L43():
    r31 = dyn base6(<sym pc>);
    goto L7(r31);
  D13():
    deopt 42 [pc];
  L8():
    goto L20();
  L20():
    _bibentry = ldf `.bibentry`;
    check L91() else D37();
  L44():
    pc1 = force? pc;
    checkMissing(pc1);
    length1 = ldf length in base;
    r33 = dyn length1(pc1);
    check L45() else D14();
  L46():
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L47() else L48();
  D14():
    deopt 45 [r33];
  D37():
    deopt 124 [];
  L9(r35):
    st pk = r35;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L54() else L55();
  L45():
    goto L7(r33);
  L47():
    unlist = ldf unlist;
    check L49() else D15();
  L48():
    r34 = dyn base7(<lang unlist(`[`(crossrefs, pc))>, <lang .bibentry_get_key(y)>);
    goto L9(r34);
  L91():
    p21 = prom<V +>{
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      return x23;
    };
    r108 = dyn _bibentry(p21);
    check L92() else D38();
  D15():
    deopt 49 [];
  D38():
    deopt 126 [r108];
  L10(r43):
    r45 = `!`(r43);
    st ok = r45;
    Map = ldf Map;
    check L58() else D22();
  L49():
    p7 = prom<V +>{
      crossrefs2 = ld crossrefs;
      crossrefs3 = force? crossrefs2;
      checkMissing(crossrefs3);
      c5 = `is.object`(crossrefs3);
      if c5 then L1() else L2(crossrefs3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", crossrefs3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(crossrefs5):
      pc2 = ld pc;
      pc3 = force? pc2;
      __2 = ldf `[` in base;
      r36 = dyn __2(crossrefs5, pc3);
      goto L0(r36);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r38 = dyn unlist(p7);
    check L50() else D16();
  L54():
    pk = ld pk;
    check L56() else D20();
  L55():
    r42 = dyn base8(<sym pk>);
    goto L10(r42);
  L92():
    popenv;
    return r108;
  D16():
    deopt 51 [r38];
  D20():
    deopt 63 [pk];
  D22():
    deopt 70 [];
  L50():
    _bibentry_get_key = ldf `.bibentry_get_key`;
    check L51() else D17();
  L56():
    pk1 = force? pk;
    checkMissing(pk1);
    is_na = ldf `is.na` in base;
    r44 = dyn is_na(pk1);
    check L57() else D21();
  L58():
    p9 = prom<V +>{
      r46 = clos inner4198313549;
      return r46;
    };
    p10 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c6 = `is.object`(x10);
      if c6 then L2() else L3(x10);
    L0(dx3):
      return dx3;
    L2():
      dr2 = tryDispatchBuiltin.1("[", x10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(x12):
      pc4 = ld pc;
      pc5 = force? pc4;
      checkMissing(pc5);
      c7 = `is.object`(pc5);
      if c7 then L5() else L6(x12, pc5);
    L1(x16, dx5):
      __4 = ldf `[` in base;
      r49 = dyn __4(x16, dx5);
      goto L0(r49);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      dr4 = tryDispatchBuiltin.1("[", pc5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(x12, dr4);
    L6(x14, pc7):
      ok = ld ok;
      ok1 = force? ok;
      __3 = ldf `[` in base;
      r48 = dyn __3(pc7, ok1);
      goto L1(x14, r48);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(x12, dx4);
    };
    p11 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      c8 = `is.object`(y5);
      if c8 then L2() else L3(y5);
    L0(dx7):
      return dx7;
    L2():
      dr6 = tryDispatchBuiltin.1("[", y5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(y7):
      pk2 = ld pk;
      pk3 = force? pk2;
      checkMissing(pk3);
      c9 = `is.object`(pk3);
      if c9 then L5() else L6(y7, pk3);
    L1(y11, dx9):
      __6 = ldf `[` in base;
      r52 = dyn __6(y11, dx9);
      goto L0(r52);
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    L5():
      dr8 = tryDispatchBuiltin.1("[", pk3);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(y7, dr8);
    L6(y9, pk5):
      ok2 = ld ok;
      ok3 = force? ok2;
      __5 = ldf `[` in base;
      r51 = dyn __5(pk5, ok3);
      goto L1(y9, r51);
    L7():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L1(y7, dx8);
    };
    r54 = dyn Map(p9, p10, p11);
    check L59() else D23();
  D17():
    deopt 53 [];
  D21():
    deopt 66 [r44];
  D23():
    deopt 74 [r54];
  L51():
    p8 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r40 = dyn _bibentry_get_key(p8);
    check L52() else D18();
  L57():
    goto L10(r44);
  L59():
    l = ld x;
    c10 = `is.object`(l);
    if c10 then L60() else L61(r54, l);
  D18():
    deopt 55 [r40];
  L11(dx11):
    st x = dx11;
    lapply1 = ldf lapply;
    check L68() else D26();
  L52():
    match = ldf match in base;
    r41 = dyn match(r38, r40, NA_INT, NULL);
    check L53() else D19();
  L60():
    dr10 = tryDispatchBuiltin.0("[<-", l, r54);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L62() else L61(r54, dr10);
  L61(r56, l2):
    pc8 = ld pc;
    check L63() else D24();
  D19():
    deopt 59 [r41];
  D24():
    deopt 76 [r56, l2, r54, pc8];
  D26():
    deopt 84 [];
  L53():
    goto L9(r41);
  L62():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L11(dx10);
  L63():
    pc9 = force? pc8;
    checkMissing(pc9);
    c11 = `is.object`(pc9);
    if c11 then L64() else L65(r56, l2, r54, pc9);
  L68():
    p12 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c12 = `is.object`(x18);
      if c12 then L1() else L2(x18);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", x18);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x20):
      pc12 = ld pc;
      pc13 = force? pc12;
      __8 = ldf `[` in base;
      r69 = dyn __8(x20, pc13);
      goto L0(r69);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p13 = prom<V +>{
      r71 = clos inner3708401697;
      return r71;
    };
    r73 = dyn lapply1(p12, p13);
    check L69() else D27();
  D27():
    deopt 87 [r73];
  L12(r65, l6, r66, dx13):
    ___ = ldf `[<-` in base;
    r68 = dyn ___(l6, r66, dx13);
    goto L11(r68);
  L64():
    dr12 = tryDispatchBuiltin.1("[", pc9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L66() else L65(r56, l2, r54, dr12);
  L65(r61, l4, r62, pc11):
    ok4 = ld ok;
    check L67() else D25();
  L69():
    st status = r73;
    which1 = ldf which;
    check L70() else D28();
  D25():
    deopt 78 [r61, l4, r62, pc11, ok4];
  D28():
    deopt 90 [];
  L66():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L12(r56, l2, r54, dx12);
  L67():
    ok5 = force? ok4;
    __7 = ldf `[` in base;
    r67 = dyn __7(pc11, ok5);
    goto L12(r61, l4, r62, r67);
  L70():
    p16 = prom<V +>{
      vapply = ldf vapply;
      p14 = prom<V +>{
        status = ld status;
        status1 = force? status;
        checkMissing(status1);
        return status1;
      };
      p15 = prom<V +>{
        inherits = ld inherits;
        inherits1 = force? inherits;
        checkMissing(inherits1);
        return inherits1;
      };
      r76 = dyn vapply(p14, p15, NA_LGL, "error");
      return r76;
    };
    r78 = dyn which1(p16);
    check L71() else D29();
  D29():
    deopt 92 [r78];
  L71():
    st bad = r78;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L72() else L73();
  L13(r80):
    c13 = `as.logical`(r80);
    if c13 then L76() else L14();
  L72():
    bad = ld bad;
    check L74() else D30();
  L73():
    r79 = dyn base9(<sym bad>);
    goto L13(r79);
  D30():
    deopt 96 [bad];
  L14():
    goto L19(NULL);
  L19(r105):
    goto L20();
  L74():
    bad1 = force? bad;
    checkMissing(bad1);
    length2 = ldf length in base;
    r81 = dyn length2(bad1);
    check L75() else D31();
  L76():
    bad2 = ld bad;
    check L77() else D32();
  D31():
    deopt 99 [r81];
  D32():
    deopt 100 [bad2];
  L75():
    goto L13(r81);
  L77():
    bad3 = force? bad2;
    checkMissing(bad3);
    s = toForSeq(bad3);
    l7 = length(s);
    i = 0;
    goto L15(i);
  L15(i1):
    i2 = `+`.1(i1, 1);
    c14 = `<`.1(l7, i2);
    if c14 then L78() else L16();
  L16():
    x21 = `[[`(s, i2, NULL, TRUE);
    st b = x21;
    warning = ldf warning;
    check L79() else D33();
  L78():
    l8 = ld x;
    c17 = `is.object`(l8);
    if c17 then L81() else L82(NULL, l8);
  D33():
    deopt 103 [i2];
  L17(r94, dx21):
    st x = dx21;
    goto L19(r94);
  L79():
    p20 = prom<V +>{
      gettextf = ldf gettextf;
      p17 = prom<V +>{
        pc14 = ld pc;
        pc15 = force? pc14;
        checkMissing(pc15);
        c15 = `is.object`(pc15);
        if c15 then L1() else L2(pc15);
      L0(dx17):
        return dx17;
      L1():
        dr16 = tryDispatchBuiltin.1("[", pc15);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(pc17):
        b = ld b;
        b1 = force? b;
        __9 = ldf `[` in base;
        r82 = dyn __9(pc17, b1);
        goto L0(r82);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx16);
      };
      p19 = prom<V +>{
        conditionMessage = ldf conditionMessage;
        p18 = prom<V +>{
          status2 = ld status;
          status3 = force? status2;
          checkMissing(status3);
          c16 = `is.object`(status3);
          if c16 then L1() else L2(status3);
        L0(dx19):
          return dx19;
        L1():
          dr18 = tryDispatchBuiltin.1("[[", status3);
          dc9 = getTryDispatchBuiltinDispatched(dr18);
          if dc9 then L3() else L2(dr18);
        L2(status5):
          b2 = ld b;
          b3 = force? b2;
          __10 = ldf `[[` in base;
          r84 = dyn __10(status5, b3);
          goto L0(r84);
        L3():
          dx18 = getTryDispatchBuiltinValue(dr18);
          goto L0(dx18);
        };
        r86 = dyn conditionMessage(p18);
        return r86;
      };
      r88 = dyn gettextf("Dropping invalid entry %d:\n%s", p17, p19);
      return r88;
    };
    r90 = dyn warning(p20);
    check L80() else D34();
  L81():
    dr20 = tryDispatchBuiltin.0("[<-", l8, NULL);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L83() else L82(NULL, dr20);
  L82(r92, l10):
    pc18 = ld pc;
    check L84() else D35();
  D34():
    deopt 105 [i2, r90];
  D35():
    deopt 112 [r92, l10, NULL, pc18];
  L80():
    goto L15(i2);
  L83():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L17(NULL, dx20);
  L84():
    pc19 = force? pc18;
    checkMissing(pc19);
    c18 = `is.object`(pc19);
    if c18 then L85() else L86(r92, l10, NULL, pc19);
  L18(r101, l14, r102, dx23):
    ___1 = ldf `[<-` in base;
    r104 = dyn ___1(l14, r102, dx23);
    goto L17(r101, r104);
  L85():
    dr22 = tryDispatchBuiltin.1("[", pc19);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L87() else L86(r92, l10, NULL, dr22);
  L86(r97, l12, r98, pc21):
    bad4 = ld bad;
    check L88() else D36();
  D36():
    deopt 114 [r97, l12, r98, pc21, bad4];
  L87():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L18(r92, l10, NULL, dx22);
  L88():
    bad5 = force? bad4;
    __11 = ldf `[` in base;
    r103 = dyn __11(pc21, bad5);
    goto L18(r97, l12, r98, r103);
  }
}
fun inner4198313549(u, v) {
  (reg u:*, reg v:*) -+> V { var u:*, var v:*, reg setdiff:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg v1:*, reg v2:V, reg names:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg u1:*, reg u2:V, reg names1:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg v3:*, reg v4:V, reg c:L, reg v6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg add:*, reg add1:V, reg __:cls, reg r9:V, reg l:*, reg c1:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx7:V, reg add2:*, reg add3:V, reg ___:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg tolower:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg u3:*, reg u4:V, reg attr:cls, reg r17:V, reg p2:p(V +), reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg c2:cls, reg r22:V, reg match:cls, reg r23:V, reg is_na:cls, reg r24:V, reg r25:V, reg c3:L, reg c5:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg c8:L, reg r27:V, reg u5:*, reg u6:V, reg c9:L, reg c11:L, reg u8:V, reg dr4:V, reg dc2:L, reg dx8:V, reg c13:L, reg dx9:V, reg r28:V, reg c14:V, reg c15:L, reg c16:V, reg c18:L, reg v7:*, reg v8:V, reg c19:L, reg v10:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg r29:V, reg l3:*, reg c20:L, reg dx13:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx15:V, reg dx16:V, reg dx17:V, reg r30:V, reg u9:*, reg u10:V |
    mkenv;
    st u = u;
    st v = v;
    setdiff = ldf setdiff;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      v1 = ld v;
      v2 = force? v1;
      checkMissing(v2);
      names = ldf names in base;
      r2 = dyn names(v2);
      goto L0(r2);
    L2():
      r = dyn base(<sym v>);
      goto L0(r);
    };
    p1 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      u1 = ld u;
      u2 = force? u1;
      checkMissing(u2);
      names1 = ldf names in base;
      r6 = dyn names1(u2);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym u>);
      goto L0(r4);
    };
    r8 = dyn setdiff(p, p1);
    check L10() else D1();
  D1():
    deopt 4 [r8];
  L10():
    st add = r8;
    v3 = ld v;
    check L11() else D2();
  D2():
    deopt 6 [v3];
  L11():
    v4 = force? v3;
    checkMissing(v4);
    c = `is.object`(v4);
    if c then L12() else L13(v4);
  L0(dx1):
    l = ld u;
    c1 = `is.object`(l);
    if c1 then L16() else L17(dx1, l);
  L12():
    dr = tryDispatchBuiltin.1("[", v4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(v6):
    add = ld add;
    check L15() else D3();
  D3():
    deopt 8 [v6, add];
  L1(dx7):
    st u = dx7;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L15():
    add1 = force? add;
    __ = ldf `[` in base;
    r9 = dyn __(v6, add1);
    goto L0(r9);
  L16():
    dr2 = tryDispatchBuiltin.0("[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(dx1, dr2);
  L17(dx3, l2):
    add2 = ld add;
    check L19() else D4();
  D4():
    deopt 12 [dx3, l2, dx1, add2];
  L2(r12):
    r25 = `!`(r12);
    c3 = `as.logical`(r25);
    if c3 then L31() else L5(c3);
  L18():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx5);
  L19():
    add3 = force? add2;
    ___ = ldf `[<-` in base;
    r10 = dyn ___(l2, dx1, add3);
    goto L1(r10);
  L20():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L21():
    r11 = dyn base2(<lang match(tolower(attr(u, "bibtype")), c("incollection", "inproceedings"))>);
    goto L2(r11);
  L3(r14):
    is_na = ldf `is.na` in base;
    r24 = dyn is_na(r14);
    check L30() else D9();
  L5(c5):
    c18 = `as.logical`(c5);
    if c18 then L40() else L7();
  L22():
    tolower = ldf tolower;
    check L24() else D5();
  L23():
    r13 = dyn base3(<lang tolower(attr(u, "bibtype"))>, <lang c("incollection", "inproceedings")>);
    goto L3(r13);
  L31():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L32() else L33();
  D5():
    deopt 21 [];
  D9():
    deopt 35 [r24];
  L6(c8, r27):
    c15 = `as.logical`(r27);
    c16 = `&&`(c8, c15);
    goto L5(c16);
  L7():
    goto L8();
  L8():
    u9 = ld u;
    check L51() else D12();
  L24():
    p2 = prom<V +>{
      sym4 = ldf attr;
      base4 = ldf attr in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      u3 = ld u;
      u4 = force? u3;
      checkMissing(u4);
      attr = ldf attr in base;
      r17 = dyn attr(u4, "bibtype");
      goto L0(r17);
    L2():
      r15 = dyn base4(<sym u>, "bibtype");
      goto L0(r15);
    };
    r19 = dyn tolower(p2);
    check L25() else D6();
  L30():
    goto L2(r24);
  L32():
    u5 = ld u;
    check L34() else D10();
  L33():
    r26 = dyn base6(<lang `$`(u, booktitle)>);
    goto L6(c3, r26);
  L40():
    v7 = ld v;
    check L41() else D11();
  D6():
    deopt 23 [r19];
  D10():
    deopt 38 [c3, u5];
  D11():
    deopt 43 [v7];
  D12():
    deopt 51 [u9];
  L25():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L26() else L27();
  L34():
    u6 = force? u5;
    checkMissing(u6);
    c9 = `is.object`(u6);
    if c9 then L36() else L37(c3, u6);
  L41():
    v8 = force? v7;
    checkMissing(v8);
    c19 = `is.object`(v8);
    if c19 then L43() else L44(v8);
  L51():
    u10 = force? u9;
    checkMissing(u10);
    popenv;
    return u10;
  L4(r21):
    match = ldf match in base;
    r23 = dyn match(r19, r21, NA_INT, NULL);
    check L29() else D8();
  L26():
    c2 = ldf c in base;
    r22 = dyn c2("incollection", "inproceedings");
    check L28() else D7();
  L27():
    r20 = dyn base5("incollection", "inproceedings");
    goto L4(r20);
  L35(c13, dx9):
    c14 = `==`(dx9, NULL);
    goto L6(c13, c14);
  L36():
    dr4 = tryDispatchBuiltin.1("$", u6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L38() else L37(c3, dr4);
  L37(c11, u8):
    r28 = `$`(u8, <sym booktitle>);
    goto L35(c11, r28);
  L42(dx11):
    l3 = ld u;
    c20 = `is.object`(l3);
    if c20 then L47() else L48(dx11, l3);
  L43():
    dr6 = tryDispatchBuiltin.1("$", v8);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L45() else L44(dr6);
  L44(v10):
    r29 = `$`(v10, <sym title>);
    goto L42(r29);
  D7():
    deopt 29 [r22];
  D8():
    deopt 33 [r23];
  L28():
    goto L4(r22);
  L29():
    goto L3(r23);
  L38():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L35(c3, dx8);
  L45():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L42(dx10);
  L46(dx16, dx17):
    st u = dx17;
    goto L8();
  L47():
    dr8 = tryDispatchBuiltin.0("$<-", l3, dx11);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L49() else L48(dx11, dr8);
  L48(dx13, l5):
    r30 = `$<-`(l5, <sym booktitle>, dx11);
    goto L46(dx13, r30);
  L49():
    dx15 = getTryDispatchBuiltinValue(dr8);
    goto L46(dx11, dx15);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg tryCatch:cls, reg _bibentry_check_bibentry1:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg identity:*, reg identity1:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st e = e;
    tryCatch = ldf tryCatch;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      _bibentry_check_bibentry1 = ldf `.bibentry_check_bibentry1`;
      p = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      r1 = dyn _bibentry_check_bibentry1(p, TRUE);
      return r1;
    };
    p2 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r4 = dyn tryCatch[, error](p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    popenv;
    return r4;
  }
}