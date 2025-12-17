fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2072453558;
    st `.inheritedArgsExpression` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2072453558(target, defined, body) {
  (reg target:*, reg defined:*, reg body:*) -+> V { var target:*, var defined:*, var body:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg defined1:*, reg defined2:V, reg names:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg defined3:*, reg defined4:V, reg r8:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg extends:cls, reg setPackageSlot:cls, reg target1:*, reg target2:V, reg c1:L, reg target4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r9:V, reg p:p(V +), reg packageSlot:cls, reg target5:*, reg target6:V, reg p1:p(V +), reg r12:V, reg c2:L, reg r14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i7:*, reg i8:V, reg __1:cls, reg r15:V, reg p2:p(V +), reg r17:V, reg p3:p(V +), reg setPackageSlot1:cls, reg defined5:*, reg defined6:V, reg c3:L, reg defined8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i9:*, reg i10:V, reg __2:cls, reg r19:V, reg p4:p(V +), reg packageSlot1:cls, reg defined9:*, reg defined10:V, reg p5:p(V +), reg r22:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V, reg is:cls, reg ei:*, reg ei1:V, reg p8:p(V +), reg r28:V, reg c4:L, reg i12:I, reg c6:V, reg __3:cls, reg r29:V, reg r30:V, reg c7:L, reg c8:V, reg c10:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg i18:I, reg r32:V, reg substitute1:cls, reg r33:V, reg l1:*, reg c11:L, reg i20:I, reg r35:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i22:I, reg r37:V, reg dx7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg i25:I, reg r43:V, reg l6:*, reg r44:V, reg r45:V, reg expr:*, reg expr1:V, reg length:cls, reg r46:V, reg r47:V, reg ____:cls, reg r48:V, reg i26:I, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg expr2:*, reg expr3:V, reg length1:cls, reg r52:V, reg r53:V, reg c12:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg r55:V, reg body1:*, reg body2:V, reg list:cls, reg r56:V, reg l7:*, reg c13:L, reg r58:V, reg l9:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r65:V, reg r66:V, reg l12:*, reg r67:V, reg r68:V, reg expr4:*, reg expr5:V, reg length2:cls, reg r69:V, reg r70:V, reg ___:cls, reg r71:V, reg expr6:*, reg expr7:V |
    mkenv;
    st target = target;
    st defined = defined;
    st body = body;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    st expr = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L16():
    substitute = ldf substitute in base;
    r2 = dyn substitute(<lang {}>, <lang list(DUMMY="")>);
    goto L0(r2);
  L17():
    r = dyn base(<lang {}>, <lang list(DUMMY="")>);
    goto L0(r);
  L1(r4):
    st args = r4;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L18():
    defined1 = ld defined;
    check L20() else D0();
  L19():
    r3 = dyn base1(<sym defined>);
    goto L1(r3);
  D0():
    deopt 6 [defined1];
  L2(r7):
    s = toForSeq(r7);
    l = length(s);
    i = 0;
    goto L3(i);
  L20():
    defined2 = force? defined1;
    checkMissing(defined2);
    names = ldf names in base;
    r5 = dyn names(defined2);
    check L21() else D1();
  L22():
    defined3 = ld defined;
    check L24() else D2();
  L23():
    r6 = dyn base2(<sym defined>);
    goto L2(r6);
  D1():
    deopt 9 [r5];
  D2():
    deopt 12 [defined3];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L25() else L10();
  L21():
    goto L1(r5);
  L24():
    defined4 = force? defined3;
    checkMissing(defined4);
    r8 = seq_along(defined4);
    goto L2(r8);
  L10():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    extends = ldf extends;
    check L26() else D3();
  L25():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  D3():
    deopt 16 [i2];
  L11(r51):
    r53 = `>`(r51, 1);
    c12 = `as.logical`(r53);
    if c12 then L47() else L12();
  L26():
    p3 = prom<V +>{
      setPackageSlot = ldf setPackageSlot;
      p = prom<V +>{
        target1 = ld target;
        target2 = force? target1;
        checkMissing(target2);
        c1 = `is.object`(target2);
        if c1 then L1() else L2(target2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[[", target2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(target4):
        i5 = ld i;
        i6 = force? i5;
        __ = ldf `[[` in base;
        r9 = dyn __(target4, i6);
        goto L0(r9);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p2 = prom<V +>{
        packageSlot = ldf packageSlot;
        p1 = prom<V +>{
          target5 = ld target;
          target6 = force? target5;
          checkMissing(target6);
          return target6;
        };
        r12 = dyn packageSlot(p1);
        c2 = `is.object`(r12);
        if c2 then L1() else L2(r12);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", r12);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(r14):
        i7 = ld i;
        i8 = force? i7;
        __1 = ldf `[[` in base;
        r15 = dyn __1(r14, i8);
        goto L0(r15);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r17 = dyn setPackageSlot(p, p2);
      return r17;
    };
    p7 = prom<V +>{
      setPackageSlot1 = ldf setPackageSlot;
      p4 = prom<V +>{
        defined5 = ld defined;
        defined6 = force? defined5;
        checkMissing(defined6);
        c3 = `is.object`(defined6);
        if c3 then L1() else L2(defined6);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[[", defined6);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(defined8):
        i9 = ld i;
        i10 = force? i9;
        __2 = ldf `[[` in base;
        r19 = dyn __2(defined8, i10);
        goto L0(r19);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p6 = prom<V +>{
        packageSlot1 = ldf packageSlot;
        p5 = prom<V +>{
          defined9 = ld defined;
          defined10 = force? defined9;
          checkMissing(defined10);
          return defined10;
        };
        r22 = dyn packageSlot1(p5);
        return r22;
      };
      r24 = dyn setPackageSlot1(p4, p6);
      return r24;
    };
    r26 = dyn extends[, , fullInfo](p3, p7, TRUE);
    check L27() else D4();
  L43():
    expr2 = ld expr;
    check L45() else D9();
  L44():
    r50 = dyn base5(<sym expr>);
    goto L11(r50);
  D4():
    deopt 21 [i2, r26];
  D9():
    deopt 53 [expr2];
  L12():
    popenv;
    return NULL;
  L27():
    st ei = r26;
    is = ldf is;
    check L28() else D5();
  L45():
    expr3 = force? expr2;
    checkMissing(expr3);
    length1 = ldf length in base;
    r52 = dyn length1(expr3);
    check L46() else D10();
  L47():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L48() else L49();
  D5():
    deopt 24 [i2];
  D10():
    deopt 56 [r52];
  L13(r55):
    l7 = ld expr;
    c13 = `is.object`(l7);
    if c13 then L52() else L53(r55, l7);
  L28():
    p8 = prom<V +>{
      ei = ld ei;
      ei1 = force? ei;
      checkMissing(ei1);
      return ei1;
    };
    r28 = dyn is(p8, "SClassExtension");
    check L29() else D6();
  L46():
    goto L11(r52);
  L48():
    body1 = ld body;
    check L50() else D11();
  L49():
    r54 = dyn base6(<sym body>);
    goto L13(r54);
  D6():
    deopt 27 [i2, r28];
  D11():
    deopt 61 [body1];
  L14(dx9):
    st expr = dx9;
    expr6 = ld expr;
    check L59() else D15();
  L29():
    c4 = `as.logical`(r28);
    if c4 then L30() else L4(i2, c4);
  L50():
    body2 = force? body1;
    checkMissing(body2);
    list = ldf list in base;
    r56 = dyn list(body2);
    check L51() else D12();
  L52():
    dr8 = tryDispatchBuiltin.0("[<-", l7, r55);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L54() else L53(r55, dr8);
  L53(r58, l9):
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L55() else L56();
  D12():
    deopt 64 [r56];
  D15():
    deopt 76 [expr6];
  L4(i12, c6):
    c10 = `as.logical`(c6);
    if c10 then L32() else L5();
  L15(r66, l12, r67, r68):
    r70 = `+`(r68, 1);
    ___ = ldf `[<-` in base;
    r71 = dyn ___(l12, r67, r70);
    goto L14(r71);
  L30():
    __3 = ldf `@` in base;
    r29 = dyn __3(<sym ei>, <sym simple>);
    r30 = `!`(r29);
    c7 = `as.logical`(r30);
    c8 = `&&`(c4, c7);
    goto L4(i2, c8);
  L51():
    goto L13(r56);
  L54():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L14(dx8);
  L55():
    expr4 = ld expr;
    check L57() else D13();
  L56():
    r65 = dyn base7(<sym expr>);
    goto L15(r58, l9, r55, r65);
  L59():
    expr7 = force? expr6;
    checkMissing(expr7);
    popenv;
    return expr7;
  D13():
    deopt 68 [r58, l9, r55, expr4];
  L5():
    goto L9(i12);
  L9(i26):
    goto L3(i26);
  L32():
    sym3 = ldf substitute;
    base3 = ldf substitute in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L57():
    expr5 = force? expr4;
    checkMissing(expr5);
    length2 = ldf length in base;
    r69 = dyn length2(expr5);
    check L58() else D14();
  D14():
    deopt 71 [r58, l9, r55, r69];
  L6(i18, r32):
    l1 = ld expr;
    c11 = `is.object`(l1);
    if c11 then L35() else L36(i18, r32, l1);
  L33():
    substitute1 = ldf substitute in base;
    r33 = dyn substitute1(<lang `<-`(ARG, as(ARG, DEFINED, strict=FALSE))>, <lang list(ARG=as.name(`[[`(args, i)), DEFINED=as.character(`[[`(defined, i)))>);
    goto L6(i12, r33);
  L34():
    r31 = dyn base3(<lang `<-`(ARG, as(ARG, DEFINED, strict=FALSE))>, <lang list(ARG=as.name(`[[`(args, i)), DEFINED=as.character(`[[`(defined, i)))>);
    goto L6(i12, r31);
  L58():
    goto L15(r58, l9, r55, r69);
  L7(i22, r37, dx7):
    st expr = dx7;
    goto L9(i22);
  L35():
    dr6 = tryDispatchBuiltin.0("[[<-", l1, r32);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L37() else L36(i18, r32, dr6);
  L36(i20, r35, l3):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L8(i25, r43, l6, r44, r45):
    r47 = `+`(r45, 1);
    ____ = ldf `[[<-` in base;
    r48 = dyn ____(l6, r44, r47);
    goto L7(i25, r43, r48);
  L37():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L7(i18, r32, dx6);
  L38():
    expr = ld expr;
    check L40() else D7();
  L39():
    r42 = dyn base4(<sym expr>);
    goto L8(i20, r35, l3, r32, r42);
  D7():
    deopt 38 [i20, r35, l3, r32, expr];
  L40():
    expr1 = force? expr;
    checkMissing(expr1);
    length = ldf length in base;
    r46 = dyn length(expr1);
    check L41() else D8();
  D8():
    deopt 41 [i20, r35, l3, r32, r46];
  L41():
    goto L8(i20, r35, l3, r32, r46);
  }
}