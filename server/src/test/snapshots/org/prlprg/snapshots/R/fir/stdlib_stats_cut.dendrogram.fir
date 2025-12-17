fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3733460474;
    st `cut.dendrogram` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3733460474(x, h, `...`) {
  (reg x:*, reg h:*, reg ddd:dots) -+> V { var x:*, var h:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg r3:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg assignNodes:cls, reg x1:*, reg x2:V, reg p:p(V +), reg h1:*, reg h2:V, reg p1:p(V +), reg r8:V, reg LOWER:*, reg LOWER1:V, reg list1:cls, reg r9:V |
    mkenv;
    st x = x;
    st h = h;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st LOWER = r1;
    st X = 1.0;
    r3 = clos inner1098492662;
    st assignNodes = r3;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2():
    list = ldf list in base;
    r2 = dyn list();
    check L4() else D0();
  L3():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  L1(r5):
    popenv;
    return r5;
  L4():
    goto L0(r2);
  L5():
    assignNodes = ldf assignNodes;
    check L7() else D1();
  L6():
    r4 = dyn base1[upper, lower](<lang assignNodes(x, h)>, <sym LOWER>);
    goto L1(r4);
  D1():
    deopt 14 [];
  L7():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      h1 = ld h;
      h2 = force? h1;
      checkMissing(h2);
      return h2;
    };
    r8 = dyn assignNodes(p, p1);
    check L8() else D2();
  D2():
    deopt 17 [r8];
  L8():
    LOWER = ld LOWER;
    check L9() else D3();
  D3():
    deopt 19 [LOWER];
  L9():
    LOWER1 = force? LOWER;
    checkMissing(LOWER1);
    list1 = ldf list in base;
    r9 = dyn list1(r8, LOWER1);
    check L10() else D4();
  D4():
    deopt 23 [r9];
  L10():
    goto L1(r9);
  }
}
fun inner1098492662(subtree, h) {
  (reg subtree:*, reg h:*) -+> V { var subtree:*, var h:*, reg is_leaf:cls, reg subtree1:*, reg subtree2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg subtree3:*, reg subtree4:V, reg length:cls, reg r5:V, reg r6:V, reg c1:L, reg stop:cls, reg r7:V, reg K:*, reg K1:V, reg r9:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg subtree5:*, reg subtree6:V, reg c3:L, reg i6:I, reg subtree8:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg k:*, reg k1:V, reg __:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg i11:I, reg r12:V, reg sub:*, reg sub1:V, reg attr:cls, reg r13:V, reg h1:*, reg h2:V, reg r14:V, reg c4:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg i16:I, reg r16:V, reg sub2:*, reg sub3:V, reg attributes:cls, reg r17:V, reg l1:*, reg c5:L, reg i18:I, reg r19:L, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i20:I, reg dx3:V, reg r22:V, reg l4:*, reg c6:L, reg i22:I, reg r24:dots, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i24:I, reg dx5:V, reg r27:V, reg at:*, reg at1:V, reg c7:L, reg i26:I, reg at3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i28:I, reg dx7:V, reg r28:V, reg l7:*, reg c8:L, reg i30:I, reg dx9:V, reg l9:*, reg dr8:V, reg dc4:L, reg dx11:V, reg i32:I, reg dx13:V, reg r29:V, reg new_mem:*, reg new_mem1:V, reg l10:*, reg c9:L, reg i34:I, reg new_mem3:V, reg r31:I, reg l12:*, reg dr10:V, reg dc5:L, reg dx14:V, reg i36:I, reg new_mem5:V, reg r33:I, reg dx15:V, reg r34:V, reg r35:V, reg paste:cls, reg X:*, reg X1:V, reg p1:p(V +), reg r37:V, reg l13:*, reg c10:L, reg i38:I, reg r39:V, reg l15:*, reg dr12:V, reg dc6:L, reg dx16:V, reg i40:I, reg dx17:V, reg r42:V, reg X2:*, reg X3:V, reg l16:*, reg c11:L, reg i42:I, reg X5:V, reg l18:*, reg dr14:V, reg dc7:L, reg dx18:V, reg i44:I, reg dx19:V, reg k2:*, reg k3:V, reg ____:cls, reg r43:V, reg at4:*, reg at5:V, reg l19:*, reg c12:L, reg i46:I, reg at8:V, reg l22:*, reg at9:V, reg l23:*, reg dr16:V, reg dc8:L, reg dx20:V, reg i48:I, reg at12:V, reg l25:*, reg at13:V, reg dx21:V, reg k4:*, reg k5:V, reg __1:cls, reg r44:V, reg attributes__:cls, reg r45:V, reg c13:L, reg i50:I, reg at15:V, reg l27:*, reg dr18:V, reg dc9:L, reg dx22:V, reg i52:I, reg dx23:V, reg k6:*, reg k7:V, reg ____1:cls, reg r46:V, reg l28:*, reg class__:cls, reg r47:V, reg sub4:*, reg sub5:V, reg l29:*, reg c14:L, reg i54:I, reg sub7:V, reg l31:*, reg dr20:V, reg dc10:L, reg dx24:V, reg i56:I, reg dx25:V, reg X8:*, reg X9:V, reg ____2:cls, reg r48:V, reg X10:*, reg X11:V, reg r49:V, reg i57:I, reg assignNodes:cls, reg sub10:*, reg sub11:V, reg p2:p(V +), reg h3:*, reg h4:V, reg p3:p(V +), reg r53:V, reg l32:*, reg c15:L, reg i59:I, reg r55:V, reg l34:*, reg dr22:V, reg dc11:L, reg dx26:V, reg i61:I, reg dx27:V, reg k8:*, reg k9:V, reg ____3:cls, reg r58:V, reg new_mem6:*, reg new_mem7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r59:V, reg i64:I, reg new_mem10:V, reg r60:V, reg subtree9:*, reg subtree10:V, reg c16:L, reg i66:I, reg new_mem12:V, reg subtree12:V, reg dr24:V, reg dc12:L, reg dx28:V, reg i68:I, reg new_mem14:V, reg dx29:V, reg k10:*, reg k11:V, reg __2:cls, reg r61:V, reg attr1:cls, reg r62:V, reg r63:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r64:V, reg r65:V, reg subtree13:*, reg subtree14:V, reg attr2:cls, reg r66:V, reg l35:*, reg attr__:cls, reg r67:V, reg new_mem15:*, reg new_mem16:V, reg l36:*, reg attr__1:cls, reg r68:V, reg subtree15:*, reg subtree16:V |
    mkenv;
    st subtree = subtree;
    st h = h;
    is_leaf = ldf `is.leaf`;
    check L20() else D0();
  D0():
    deopt 1 [];
  L20():
    p = prom<V +>{
      subtree1 = ld subtree;
      subtree2 = force? subtree1;
      checkMissing(subtree2);
      return subtree2;
    };
    r1 = dyn is_leaf(p);
    check L21() else D1();
  D1():
    deopt 3 [r1];
  L21():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L22() else L0();
  L0():
    goto L19();
  L19():
    subtree15 = ld subtree;
    check L126() else D44();
  L22():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  D44():
    deopt 172 [subtree15];
  L1(r4):
    st K = r4;
    r6 = `!`(r4);
    c1 = `as.logical`(r6);
    if c1 then L27() else L2();
  L23():
    subtree3 = ld subtree;
    check L25() else D2();
  L24():
    r3 = dyn base(<sym subtree>);
    goto L1(r3);
  L126():
    subtree16 = force? subtree15;
    checkMissing(subtree16);
    popenv;
    return subtree16;
  D2():
    deopt 7 [subtree3];
  L2():
    goto L3();
  L3():
    st `new.mem` = 0;
    K = ld K;
    check L31() else D6();
  L25():
    subtree4 = force? subtree3;
    checkMissing(subtree4);
    length = ldf length in base;
    r5 = dyn length(subtree4);
    check L26() else D3();
  L27():
    stop = ldf stop;
    check L28() else D4();
  D3():
    deopt 10 [r5];
  D4():
    deopt 14 [];
  D6():
    deopt 23 [1, K];
  L26():
    goto L1(r5);
  L28():
    r7 = dyn stop("non-leaf subtree of length 0");
    check L29() else D5();
  L31():
    K1 = force? K;
    checkMissing(K1);
    r9 = `:`(1, K1);
    s = toForSeq(r9);
    l = length(s);
    i = 0;
    goto L4(i);
  D5():
    deopt 16 [r7];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L32() else L17();
  L29():
    goto L3();
  L17():
    x = `[[`(s, i2, NULL, TRUE);
    st k = x;
    subtree5 = ld subtree;
    check L33() else D7();
  L32():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L116() else L117();
  D7():
    deopt 26 [i2, subtree5];
  L18(r65):
    l35 = ld subtree;
    attr__ = ldf `attr<-`;
    check L120() else D39();
  L33():
    subtree6 = force? subtree5;
    checkMissing(subtree6);
    c3 = `is.object`(subtree6);
    if c3 then L34() else L35(i2, subtree6);
  L116():
    subtree13 = ld subtree;
    check L118() else D37();
  L117():
    r64 = dyn base4(<sym subtree>, "members");
    goto L18(r64);
  D37():
    deopt 151 [subtree13];
  D39():
    deopt 157 [r65, l35, r65];
  L5(i8, dx1):
    st sub = dx1;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L34():
    dr = tryDispatchBuiltin.1("[[", subtree6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(i2, dr);
  L35(i6, subtree8):
    k = ld k;
    check L37() else D8();
  L118():
    subtree14 = force? subtree13;
    checkMissing(subtree14);
    attr2 = ldf attr in base;
    r66 = dyn attr2(subtree14, "members");
    check L119() else D38();
  L120():
    r67 = dyn attr__(l35, NULL, "x.member", r65);
    check L121() else D40();
  D8():
    deopt 28 [i6, subtree8, k];
  D38():
    deopt 155 [r66];
  D40():
    deopt 160 [r65, r67];
  L6(i11, r12):
    h1 = ld h;
    check L42() else D11();
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(i2, dx);
  L37():
    k1 = force? k;
    __ = ldf `[[` in base;
    r10 = dyn __(subtree8, k1);
    goto L5(i6, r10);
  L38():
    sub = ld sub;
    check L40() else D9();
  L39():
    r11 = dyn base1(<sym sub>, "height");
    goto L6(i8, r11);
  L119():
    goto L18(r66);
  L121():
    st subtree = r67;
    new_mem15 = ld `new.mem`;
    check L122() else D41();
  D9():
    deopt 34 [i8, sub];
  D11():
    deopt 38 [i11, r12, h1];
  D41():
    deopt 162 [new_mem15];
  L40():
    sub1 = force? sub;
    checkMissing(sub1);
    attr = ldf attr in base;
    r13 = dyn attr(sub1, "height");
    check L41() else D10();
  L42():
    h2 = force? h1;
    checkMissing(h2);
    r14 = `<=`(r12, h2);
    c4 = `as.logical`(r14);
    if c4 then L43() else L7();
  L122():
    new_mem16 = force? new_mem15;
    checkMissing(new_mem16);
    l36 = ld subtree;
    attr__1 = ldf `attr<-`;
    check L123() else D42();
  D10():
    deopt 38 [i8, r13];
  D42():
    deopt 165 [new_mem16, l36, new_mem16];
  L7():
    assignNodes = ldf assignNodes;
    check L101() else D30();
  L13(i57):
    goto L4(i57);
  L41():
    goto L6(i8, r13);
  L43():
    sym2 = ldf attributes;
    base2 = ldf attributes in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  L123():
    r68 = dyn attr__1(l36, NULL, "members", new_mem16);
    check L124() else D43();
  D30():
    deopt 124 [i11];
  D43():
    deopt 168 [new_mem16, r68];
  L8(i16, r16):
    st at = r16;
    l1 = ld at;
    c5 = `is.object`(l1);
    if c5 then L49() else L50(i16, TRUE, l1);
  L44():
    sub2 = ld sub;
    check L46() else D12();
  L45():
    r15 = dyn base2(<sym sub>);
    goto L8(i11, r15);
  L101():
    p2 = prom<V +>{
      sub10 = ld sub;
      sub11 = force? sub10;
      checkMissing(sub11);
      return sub11;
    };
    p3 = prom<V +>{
      h3 = ld h;
      h4 = force? h3;
      checkMissing(h4);
      return h4;
    };
    r53 = dyn assignNodes(p2, p3);
    check L102() else D31();
  L124():
    st subtree = r68;
    goto L19();
  D12():
    deopt 43 [i11, sub2];
  D31():
    deopt 127 [i11, r53];
  L46():
    sub3 = force? sub2;
    checkMissing(sub3);
    attributes = ldf attributes in base;
    r17 = dyn attributes(sub3);
    check L47() else D13();
  L48(i20, dx3):
    st at = dx3;
    l4 = ld at;
    c6 = `is.object`(l4);
    if c6 then L53() else L54(i20, NULL, l4);
  L49():
    dr2 = tryDispatchBuiltin.0("$<-", l1, TRUE);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L51() else L50(i16, TRUE, dr2);
  L50(i18, r19, l3):
    r22 = `$<-`(l3, <sym leaf>, TRUE);
    goto L48(i18, r22);
  L102():
    l32 = ld subtree;
    c15 = `is.object`(l32);
    if c15 then L103() else L104(i11, r53, l32);
  D13():
    deopt 46 [i11, r17];
  L14(i61, dx27):
    st subtree = dx27;
    new_mem6 = ld `new.mem`;
    check L107() else D33();
  L47():
    goto L8(i11, r17);
  L51():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L48(i16, dx2);
  L52(i24, dx5):
    st at = dx5;
    at = ld at;
    check L56() else D14();
  L53():
    dr4 = tryDispatchBuiltin.0("$<-", l4, NULL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L55() else L54(i20, NULL, dr4);
  L54(i22, r24, l6):
    r27 = `$<-`(l6, <sym class>, NULL);
    goto L52(i22, r27);
  L103():
    dr22 = tryDispatchBuiltin.0("[[<-", l32, r53);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L105() else L104(i11, r53, dr22);
  L104(i59, r55, l34):
    k8 = ld k;
    check L106() else D32();
  D14():
    deopt 58 [i24, at];
  D32():
    deopt 129 [i59, r55, l34, r53, k8];
  D33():
    deopt 133 [i61, new_mem6];
  L55():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L52(i20, dx4);
  L56():
    at1 = force? at;
    checkMissing(at1);
    c7 = `is.object`(at1);
    if c7 then L58() else L59(i24, at1);
  L105():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L14(i11, dx26);
  L106():
    k9 = force? k8;
    ____3 = ldf `[[<-` in base;
    r58 = dyn ____3(l34, r53, k9);
    goto L14(i59, r58);
  L107():
    new_mem7 = force? new_mem6;
    checkMissing(new_mem7);
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L108() else L109();
  L15(i64, new_mem10, r60):
    r63 = `+`(new_mem10, r60);
    st `new.mem` = r63;
    goto L13(i64);
  L57(i28, dx7):
    l7 = ld at;
    c8 = `is.object`(l7);
    if c8 then L62() else L63(i28, dx7, l7);
  L58():
    dr6 = tryDispatchBuiltin.1("$", at1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L60() else L59(i24, dr6);
  L59(i26, at3):
    r28 = `$`(at3, <sym members>);
    goto L57(i26, r28);
  L108():
    subtree9 = ld subtree;
    check L110() else D34();
  L109():
    r59 = dyn base3(<lang `[[`(subtree, k)>, "members");
    goto L15(i61, new_mem7, r59);
  D34():
    deopt 136 [i61, new_mem7, subtree9];
  L60():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L57(i24, dx6);
  L61(i32, dx13):
    st at = dx13;
    new_mem = ld `new.mem`;
    check L65() else D15();
  L62():
    dr8 = tryDispatchBuiltin.0("$<-", l7, dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L64() else L63(i28, dx7, dr8);
  L63(i30, dx9, l9):
    r29 = `$<-`(l9, <sym x.member>, dx7);
    goto L61(i30, r29);
  L110():
    subtree10 = force? subtree9;
    checkMissing(subtree10);
    c16 = `is.object`(subtree10);
    if c16 then L111() else L112(i61, new_mem7, subtree10);
  D15():
    deopt 64 [i32, new_mem];
  L16(i68, new_mem14, dx29):
    attr1 = ldf attr in base;
    r62 = dyn attr1(dx29, "members");
    check L115() else D36();
  L64():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L61(i28, dx11);
  L65():
    new_mem1 = force? new_mem;
    checkMissing(new_mem1);
    l10 = ld at;
    c9 = `is.object`(l10);
    if c9 then L67() else L68(i32, new_mem1, 1, l10);
  L111():
    dr24 = tryDispatchBuiltin.1("[[", subtree10);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L113() else L112(i61, new_mem7, dr24);
  L112(i66, new_mem12, subtree12):
    k10 = ld k;
    check L114() else D35();
  D35():
    deopt 138 [i66, new_mem12, subtree12, k10];
  D36():
    deopt 143 [i68, new_mem14, r62];
  L66(i36, new_mem5, r33, dx15):
    st at = dx15;
    r35 = `+`(new_mem5, r33);
    st `new.mem` = r35;
    paste = ldf paste;
    check L70() else D16();
  L67():
    dr10 = tryDispatchBuiltin.0("$<-", l10, 1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L69() else L68(i32, new_mem1, 1, dr10);
  L68(i34, new_mem3, r31, l12):
    r34 = `$<-`(l12, <sym members>, 1);
    goto L66(i34, new_mem3, r31, r34);
  L113():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L16(i61, new_mem7, dx28);
  L114():
    k11 = force? k10;
    __2 = ldf `[[` in base;
    r61 = dyn __2(subtree12, k11);
    goto L16(i66, new_mem12, r61);
  L115():
    goto L15(i68, new_mem14, r62);
  D16():
    deopt 75 [i36];
  L69():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L66(i32, new_mem1, 1, dx14);
  L70():
    p1 = prom<V +>{
      X = ld X;
      X1 = force? X;
      checkMissing(X1);
      return X1;
    };
    r37 = dyn paste("Branch", p1);
    check L71() else D17();
  D17():
    deopt 78 [i36, r37];
  L71():
    l13 = ld at;
    c10 = `is.object`(l13);
    if c10 then L73() else L74(i36, r37, l13);
  L72(i40, dx17):
    st at = dx17;
    X2 = ld X;
    check L76() else D18();
  L73():
    dr12 = tryDispatchBuiltin.0("$<-", l13, r37);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L75() else L74(i36, r37, dr12);
  L74(i38, r39, l15):
    r42 = `$<-`(l15, <sym label>, r37);
    goto L72(i38, r42);
  D18():
    deopt 82 [i40, X2];
  L75():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L72(i36, dx16);
  L76():
    X3 = force? X2;
    checkMissing(X3);
    l16 = ld subtree;
    c11 = `is.object`(l16);
    if c11 then L77() else L78(i40, X3, l16);
  L9(i44, dx19):
    st subtree = dx19;
    at4 = ld at;
    check L81() else D20();
  L77():
    dr14 = tryDispatchBuiltin.0("[[<-", l16, X3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L79() else L78(i40, X3, dr14);
  L78(i42, X5, l18):
    k2 = ld k;
    check L80() else D19();
  D19():
    deopt 85 [i42, X5, l18, X3, k2];
  D20():
    deopt 89 [i44, at4];
  L79():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L9(i40, dx18);
  L80():
    k3 = force? k2;
    ____ = ldf `[[<-` in base;
    r43 = dyn ____(l18, X3, k3);
    goto L9(i42, r43);
  L81():
    at5 = force? at4;
    checkMissing(at5);
    l19 = ld subtree;
    c12 = `is.object`(l19);
    if c12 then L82() else L83(i44, at5, l19, at5, l19);
  L10(i48, at12, l25, at13, dx21):
    attributes__ = ldf `attributes<-`;
    check L86() else D22();
  L82():
    dr16 = tryDispatchBuiltin.1("[[", l19);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L84() else L83(i44, at5, l19, at5, dr16);
  L83(i46, at8, l22, at9, l23):
    k4 = ld k;
    check L85() else D21();
  D21():
    deopt 93 [i46, at8, l22, at9, l23, k4];
  D22():
    deopt 97 [i48, at12, l25, dx21, at13];
  L84():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L10(i44, at5, l19, at5, dx20);
  L85():
    k5 = force? k4;
    __1 = ldf `[[` in base;
    r44 = dyn __1(l23, k5);
    goto L10(i46, at8, l22, at9, r44);
  L86():
    r45 = dyn attributes__(dx21, NULL, at13);
    check L87() else D23();
  D23():
    deopt 99 [i48, at12, l25, r45];
  L87():
    c13 = `is.object`(l25);
    if c13 then L88() else L89(i48, at12, l25);
  L11(i52, dx23):
    st subtree = dx23;
    l28 = ld sub;
    class__ = ldf `class<-`;
    check L92() else D25();
  L88():
    dr18 = tryDispatchBuiltin.0("[[<-", l25, r45);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L90() else L89(i48, at12, dr18);
  L89(i50, at15, l27):
    k6 = ld k;
    check L91() else D24();
  D24():
    deopt 100 [i50, at15, l27, r45, k6];
  D25():
    deopt 107 [i52, "dendrogram", l28, "dendrogram"];
  L90():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L11(i48, dx22);
  L91():
    k7 = force? k6;
    ____1 = ldf `[[<-` in base;
    r46 = dyn ____1(l27, r45, k7);
    goto L11(i50, r46);
  L92():
    r47 = dyn class__(l28, NULL, "dendrogram");
    check L93() else D26();
  D26():
    deopt 109 [i52, "dendrogram", r47];
  L93():
    st sub = r47;
    sub4 = ld sub;
    check L94() else D27();
  D27():
    deopt 111 [i52, sub4];
  L94():
    sub5 = force? sub4;
    checkMissing(sub5);
    l29 = sld LOWER;
    c14 = `is.object`(l29);
    if c14 then L95() else L96(i52, sub5, l29);
  L12(i56, dx25):
    sst LOWER = dx25;
    X10 = ld X;
    check L99() else D29();
  L95():
    dr20 = tryDispatchBuiltin.0("[[<-", l29, sub5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L97() else L96(i52, sub5, dr20);
  L96(i54, sub7, l31):
    X8 = ld X;
    check L98() else D28();
  D28():
    deopt 114 [i54, sub7, l31, sub5, X8];
  D29():
    deopt 118 [i56, X10];
  L97():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L12(i52, dx24);
  L98():
    X9 = force? X8;
    ____2 = ldf `[[<-` in base;
    r48 = dyn ____2(l31, sub5, X9);
    goto L12(i54, r48);
  L99():
    X11 = force? X10;
    checkMissing(X11);
    r49 = `+`(X11, 1.0);
    sst X = r49;
    goto L13(i56);
  }
}