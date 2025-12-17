fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2108579725;
    st `.xpdSignature` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2108579725(obj, sig, nadd) {
  (reg obj:*, reg sig:*, reg nadd:*) -+> V { var obj:*, var sig:*, var nadd:*, reg is:cls, reg obj1:*, reg obj2:V, reg p:p(V +), reg r1:V, reg c:L, reg sig1:*, reg sig2:V, reg l:*, reg ___:cls, reg r2:V, reg sig3:*, reg sig4:V, reg l1:*, reg ___1:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg obj3:*, reg obj4:V, reg is_environment:cls, reg r6:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg obj5:*, reg obj6:V, reg names:cls, reg r9:V, reg s:V, reg l2:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg get:cls, reg what:*, reg what1:V, reg p1:p(V +), reg obj7:*, reg obj8:V, reg p2:p(V +), reg r12:V, reg is1:cls, reg objw:*, reg objw1:V, reg p3:p(V +), reg r14:V, reg c3:L, reg __:cls, reg r15:V, reg packageSlot:cls, reg sigw:*, reg sigw1:V, reg p4:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg i9:I, reg r19:V, reg pkgw:*, reg pkgw1:V, reg length:cls, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg i12:I, reg r24:V, reg r25:V, reg sigw2:*, reg sigw3:V, reg length1:cls, reg r26:V, reg r27:V, reg c4:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg i17:I, reg r29:V, reg pkgw2:*, reg pkgw3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg i20:I, reg r31:V, reg rep:cls, reg r32:V, reg c5:cls, reg r33:V, reg i21:I, reg _simpleSignature:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg sigw4:*, reg sigw5:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg rep1:cls, reg r39:V, reg c6:cls, reg r40:V, reg p5:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg r43:V, reg sig6:*, reg sig7:V, reg names1:cls, reg r44:V, reg p6:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r46:V, reg r47:V, reg pkgw4:*, reg pkgw5:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r48:V, reg r49:V, reg rep2:cls, reg r50:V, reg c7:cls, reg r51:V, reg p7:p(V +), reg r53:V, reg sigw6:*, reg sigw7:V, reg l3:*, reg ___2:cls, reg r54:V, reg l4:*, reg ___3:cls, reg r55:V, reg remove:cls, reg what2:*, reg what3:V, reg p8:p(V +), reg obj9:*, reg obj10:V, reg p9:p(V +), reg r58:V, reg _pkgMethodLabel:cls, reg objw2:*, reg objw3:V, reg p10:p(V +), reg r60:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r61:V, reg i24:I, reg r62:V, reg var:*, reg var1:V, reg nzchar:cls, reg r63:V, reg c8:L, reg objw4:*, reg objw5:V, reg l5:*, reg c9:L, reg i28:I, reg objw7:V, reg l7:*, reg dr:V, reg dc:L, reg dx:V, reg i30:I, reg objw9:V, reg dx1:V, reg var2:*, reg var3:V, reg ____:cls, reg r64:V, reg i31:I, reg objw10:V, reg i32:I, reg obj11:*, reg obj12:V |
    mkenv;
    st obj = obj;
    st sig = sig;
    st nadd = nadd;
    is = ldf is;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    p = prom<V +>{
      obj1 = ld obj;
      obj2 = force? obj1;
      checkMissing(obj2);
      return obj2;
    };
    r1 = dyn is(p, "MethodDefinition");
    check L20() else D1();
  D1():
    deopt 4 [r1];
  L20():
    c = `as.logical`(r1);
    if c then L21() else L0();
  L0():
    sym = ldf `is.environment`;
    base = ldf `is.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L1():
    obj11 = ld obj;
    check L86() else D39();
  L21():
    sig1 = ld sig;
    check L22() else D2();
  D2():
    deopt 5 [sig1];
  D39():
    deopt 134 [obj11];
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L33() else L3();
  L22():
    sig2 = force? sig1;
    checkMissing(sig2);
    l = ld obj;
    ___ = ldf `@<-`;
    check L23() else D3();
  L29():
    obj3 = ld obj;
    check L31() else D8();
  L30():
    r4 = dyn base(<sym obj>);
    goto L2(r4);
  L86():
    obj12 = force? obj11;
    checkMissing(obj12);
    popenv;
    return obj12;
  D3():
    deopt 8 [sig2, l, sig2];
  D8():
    deopt 23 [obj3];
  L3():
    goto L1();
  L23():
    r2 = dyn ___(l, NULL, "defined", sig2);
    check L24() else D4();
  L31():
    obj4 = force? obj3;
    checkMissing(obj4);
    is_environment = ldf `is.environment` in base;
    r6 = dyn is_environment(obj4);
    check L32() else D9();
  L33():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  D4():
    deopt 11 [sig2, r2];
  D9():
    deopt 26 [r6];
  L4(r8):
    s = toForSeq(r8);
    l2 = length(s);
    i = 0;
    goto L5(i);
  L24():
    st obj = r2;
    sig3 = ld sig;
    check L25() else D5();
  L32():
    goto L2(r6);
  L34():
    obj5 = ld obj;
    check L36() else D10();
  L35():
    r7 = dyn base1(<sym obj>);
    goto L4(r7);
  D5():
    deopt 13 [sig3];
  D10():
    deopt 29 [obj5];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l2, i2);
    if c2 then L38() else L18();
  L25():
    sig4 = force? sig3;
    checkMissing(sig4);
    l1 = ld obj;
    ___1 = ldf `@<-`;
    check L26() else D6();
  L36():
    obj6 = force? obj5;
    checkMissing(obj6);
    names = ldf names in base;
    r9 = dyn names(obj6);
    check L37() else D11();
  D6():
    deopt 16 [sig4, l1, sig4];
  D11():
    deopt 32 [r9];
  L18():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    get = ldf get;
    check L39() else D12();
  L26():
    r3 = dyn ___1(l1, NULL, "target", sig4);
    check L27() else D7();
  L37():
    goto L4(r9);
  L38():
    goto L1();
  D7():
    deopt 19 [sig4, r3];
  D12():
    deopt 34 [i2];
  L27():
    st obj = r3;
    goto L1();
  L39():
    p1 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p2 = prom<V +>{
      obj7 = ld obj;
      obj8 = force? obj7;
      checkMissing(obj8);
      return obj8;
    };
    r12 = dyn get[, envir](p1, p2);
    check L40() else D13();
  D13():
    deopt 38 [i2, r12];
  L40():
    st objw = r12;
    is1 = ldf is;
    check L41() else D14();
  D14():
    deopt 41 [i2];
  L41():
    p3 = prom<V +>{
      objw = ld objw;
      objw1 = force? objw;
      checkMissing(objw1);
      return objw1;
    };
    r14 = dyn is1(p3, "MethodDefinition");
    check L42() else D15();
  D15():
    deopt 44 [i2, r14];
  L42():
    c3 = `as.logical`(r14);
    if c3 then L43() else L6();
  L6():
    goto L17(i2);
  L17(i32):
    goto L5(i32);
  L43():
    __ = ldf `@` in base;
    r15 = dyn __(<sym objw>, <sym defined>);
    st sigw = r15;
    packageSlot = ldf packageSlot;
    check L44() else D16();
  D16():
    deopt 49 [i2];
  L44():
    p4 = prom<V +>{
      sigw = ld sigw;
      sigw1 = force? sigw;
      checkMissing(sigw1);
      return sigw1;
    };
    r17 = dyn packageSlot(p4);
    check L45() else D17();
  D17():
    deopt 51 [i2, r17];
  L45():
    st pkgw = r17;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L7(i9, r19):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L46():
    pkgw = ld pkgw;
    check L48() else D18();
  L47():
    r18 = dyn base2(<sym pkgw>);
    goto L7(i2, r18);
  D18():
    deopt 55 [i2, pkgw];
  L8(i12, r24, r25):
    r27 = `<`(r24, r25);
    c4 = `as.logical`(r27);
    if c4 then L54() else L9();
  L48():
    pkgw1 = force? pkgw;
    checkMissing(pkgw1);
    length = ldf length in base;
    r20 = dyn length(pkgw1);
    check L49() else D19();
  L50():
    sigw2 = ld sigw;
    check L52() else D20();
  L51():
    r23 = dyn base3(<sym sigw>);
    goto L8(i9, r19, r23);
  D19():
    deopt 58 [i2, r20];
  D20():
    deopt 60 [i9, r19, sigw2];
  L9():
    goto L12(i12);
  L12(i21):
    _simpleSignature = ldf `.simpleSignature`;
    check L62() else D24();
  L49():
    goto L7(i2, r20);
  L52():
    sigw3 = force? sigw2;
    checkMissing(sigw3);
    length1 = ldf length in base;
    r26 = dyn length1(sigw3);
    check L53() else D21();
  L54():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  D21():
    deopt 63 [i9, r19, r26];
  D24():
    deopt 78 [i21];
  L10(i17, r29):
    st pkgw = r29;
    goto L12(i17);
  L53():
    goto L8(i9, r19, r26);
  L55():
    pkgw2 = ld pkgw;
    check L57() else D22();
  L56():
    r28 = dyn base4(<sym pkgw>, <lang rep("", `-`(length(sigw), length(pkgw)))>);
    goto L10(i12, r28);
  L62():
    p5 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r36):
      return r36;
    L2():
      sigw4 = ld sigw;
      sigw5 = force? sigw4;
      checkMissing(sigw5);
      sym7 = ldf rep;
      base7 = ldf rep in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L4() else L5();
    L3():
      r35 = dyn base6(<sym sigw>, <lang rep("ANY", nadd)>);
      goto L0(r35);
    L1(r38):
      c6 = ldf c in base;
      r40 = dyn c6(sigw5, r38);
      goto L0(r40);
    L4():
      rep1 = ldf rep in base;
      r39 = dyn rep1("ANY", <sym nadd>);
      goto L1(r39);
    L5():
      r37 = dyn base7("ANY", <sym nadd>);
      goto L1(r37);
    };
    p6 = prom<V +>{
      sym8 = ldf names;
      base8 = ldf names in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      sig6 = ld sig;
      sig7 = force? sig6;
      checkMissing(sig7);
      names1 = ldf names in base;
      r44 = dyn names1(sig7);
      goto L0(r44);
    L2():
      r42 = dyn base8(<sym sig>);
      goto L0(r42);
    };
    p7 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L2() else L3();
    L0(r47):
      return r47;
    L2():
      pkgw4 = ld pkgw;
      pkgw5 = force? pkgw4;
      checkMissing(pkgw5);
      sym10 = ldf rep;
      base10 = ldf rep in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L4() else L5();
    L3():
      r46 = dyn base9(<sym pkgw>, <lang rep("methods", nadd)>);
      goto L0(r46);
    L1(r49):
      c7 = ldf c in base;
      r51 = dyn c7(pkgw5, r49);
      goto L0(r51);
    L4():
      rep2 = ldf rep in base;
      r50 = dyn rep2("methods", <sym nadd>);
      goto L1(r50);
    L5():
      r48 = dyn base10("methods", <sym nadd>);
      goto L1(r48);
    };
    r53 = dyn _simpleSignature[, names, packages](p5, p6, p7);
    check L63() else D25();
  D22():
    deopt 67 [i12, pkgw2];
  D25():
    deopt 84 [i21, r53];
  L57():
    pkgw3 = force? pkgw2;
    checkMissing(pkgw3);
    sym5 = ldf rep;
    base5 = ldf rep in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L58() else L59();
  L63():
    st sigw = r53;
    sigw6 = ld sigw;
    check L64() else D26();
  D26():
    deopt 86 [i21, sigw6];
  L11(i20, r31):
    c5 = ldf c in base;
    r33 = dyn c5(pkgw3, r31);
    check L60() else D23();
  L58():
    rep = ldf rep in base;
    r32 = dyn rep("", <lang `-`(length(sigw), length(pkgw))>);
    goto L11(i12, r32);
  L59():
    r30 = dyn base5("", <lang `-`(length(sigw), length(pkgw))>);
    goto L11(i12, r30);
  L64():
    sigw7 = force? sigw6;
    checkMissing(sigw7);
    l3 = ld objw;
    ___2 = ldf `@<-`;
    check L65() else D27();
  D23():
    deopt 73 [i20, r33];
  D27():
    deopt 89 [i21, sigw7, l3, sigw7];
  L60():
    goto L10(i20, r33);
  L65():
    r54 = dyn ___2(l3, NULL, "target", sigw7);
    check L66() else D28();
  D28():
    deopt 92 [i21, sigw7, r54];
  L66():
    st objw = r54;
    l4 = ld objw;
    ___3 = ldf `@<-`;
    check L67() else D29();
  D29():
    deopt 95 [i21, sigw7, l4, sigw7];
  L67():
    r55 = dyn ___3(l4, NULL, "defined", sigw7);
    check L68() else D30();
  D30():
    deopt 98 [i21, sigw7, r55];
  L68():
    st objw = r55;
    remove = ldf remove;
    check L69() else D31();
  D31():
    deopt 101 [i21];
  L69():
    p8 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    p9 = prom<V +>{
      obj9 = ld obj;
      obj10 = force? obj9;
      checkMissing(obj10);
      return obj10;
    };
    r58 = dyn remove[list, envir](p8, p9);
    check L70() else D32();
  D32():
    deopt 106 [i21, r58];
  L70():
    _pkgMethodLabel = ldf `.pkgMethodLabel`;
    check L71() else D33();
  D33():
    deopt 108 [i21];
  L71():
    p10 = prom<V +>{
      objw2 = ld objw;
      objw3 = force? objw2;
      checkMissing(objw3);
      return objw3;
    };
    r60 = dyn _pkgMethodLabel(p10);
    check L72() else D34();
  D34():
    deopt 110 [i21, r60];
  L72():
    st var = r60;
    sym11 = ldf nzchar;
    base11 = ldf nzchar in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L73() else L74();
  L13(i24, r62):
    c8 = `as.logical`(r62);
    if c8 then L77() else L14();
  L73():
    var = ld var;
    check L75() else D35();
  L74():
    r61 = dyn base11(<sym var>);
    goto L13(i21, r61);
  D35():
    deopt 114 [i21, var];
  L14():
    goto L16(i24, NULL);
  L16(i31, objw10):
    goto L17(i31);
  L75():
    var1 = force? var;
    checkMissing(var1);
    nzchar = ldf nzchar in base;
    r63 = dyn nzchar(var1);
    check L76() else D36();
  L77():
    objw4 = ld objw;
    check L78() else D37();
  D36():
    deopt 117 [i21, r63];
  D37():
    deopt 118 [i24, objw4];
  L76():
    goto L13(i21, r63);
  L78():
    objw5 = force? objw4;
    checkMissing(objw5);
    l5 = ld obj;
    c9 = `is.object`(l5);
    if c9 then L79() else L80(i24, objw5, l5);
  L15(i30, objw9, dx1):
    st obj = dx1;
    goto L16(i30, objw9);
  L79():
    dr = tryDispatchBuiltin.0("[[<-", l5, objw5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L81() else L80(i24, objw5, dr);
  L80(i28, objw7, l7):
    var2 = ld var;
    check L82() else D38();
  D38():
    deopt 121 [i28, objw7, l7, objw5, var2];
  L81():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(i24, objw5, dx);
  L82():
    var3 = force? var2;
    ____ = ldf `[[<-` in base;
    r64 = dyn ____(l7, objw5, var3);
    goto L15(i28, objw7, r64);
  }
}