fun main() {
  () -+> V { reg r:cls, reg isSealedMethod:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg isSealedClass:cls, reg r6:V, reg setClass:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg isSealedClass1:cls, reg r12:V, reg isSealedClass2:cls, reg r13:V, reg isSealedMethod1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg c2:cls, reg r16:V, reg p2:p(V +), reg r18:V, reg isSealedMethod2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg c3:cls, reg r21:V, reg p3:p(V +), reg r23:V, reg removeClass:cls, reg r24:V |
    mkenv;
    r = clos inner1738578249;
    st isSealedMethod = r;
    isSealedMethod = ldf isSealedMethod;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("numeric", "character");
      goto L0(r3);
    L2():
      r1 = dyn base("numeric", "character");
      goto L0(r1);
    };
    r5 = dyn isSealedMethod("+", p);
    check L1() else D1();
  D1():
    deopt 7 [r5];
  L1():
    isSealedClass = ldf isSealedClass;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    r6 = dyn isSealedClass("matrix");
    check L3() else D3();
  D3():
    deopt 11 [r6];
  L3():
    setClass = ldf setClass;
    check L4() else D4();
  D4():
    deopt 13 [];
  L4():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c1 = ldf c in base;
      r9 = dyn c1("numeric", "numeric");
      goto L0(r9);
    L2():
      r7 = dyn base1[x, y]("numeric", "numeric");
      goto L0(r7);
    };
    r11 = dyn setClass[, slots]("track", p1);
    check L5() else D5();
  D5():
    deopt 17 [r11];
  L5():
    isSealedClass1 = ldf isSealedClass;
    check L6() else D6();
  D6():
    deopt 19 [];
  L6():
    r12 = dyn isSealedClass1("track");
    check L7() else D7();
  D7():
    deopt 21 [r12];
  L7():
    isSealedClass2 = ldf isSealedClass;
    check L8() else D8();
  D8():
    deopt 23 [];
  L8():
    r13 = dyn isSealedClass2("A Name for an undefined Class");
    check L9() else D9();
  D9():
    deopt 25 [r13];
  L9():
    isSealedMethod1 = ldf isSealedMethod;
    check L10() else D10();
  D10():
    deopt 27 [];
  L10():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      c2 = ldf c in base;
      r16 = dyn c2("track", "numeric");
      goto L0(r16);
    L2():
      r14 = dyn base2("track", "numeric");
      goto L0(r14);
    };
    r18 = dyn isSealedMethod1("+", p2);
    check L11() else D11();
  D11():
    deopt 30 [r18];
  L11():
    isSealedMethod2 = ldf isSealedMethod;
    check L12() else D12();
  D12():
    deopt 32 [];
  L12():
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      c3 = ldf c in base;
      r21 = dyn c3("numeric", "track");
      goto L0(r21);
    L2():
      r19 = dyn base3("numeric", "track");
      goto L0(r19);
    };
    r23 = dyn isSealedMethod2("+", p3);
    check L13() else D13();
  D13():
    deopt 35 [r23];
  L13():
    removeClass = ldf removeClass;
    check L14() else D14();
  D14():
    deopt 37 [];
  L14():
    r24 = dyn removeClass("track");
    check L15() else D15();
  D15():
    deopt 39 [r24];
  L15():
    popenv;
    return r24;
  }
}
fun inner1738578249(f, signature, fdef, where) {
  (reg f:*, reg signature:*, reg fdef:*, reg where:*) -+> V { var f:*, var signature:*, var fdef:*, reg fdef_isMissing:L, reg fdef_orDefault:*, reg getGeneric:cls, reg f1:*, reg f2:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg getFunction:cls, reg f3:*, reg f4:V, reg p5:p(V +), reg where3:*, reg where4:V, reg p6:p(V +), reg r10:V, reg is_primitive:cls, reg fGen:*, reg fGen1:V, reg p7:p(V +), reg r12:V, reg r13:V, reg c:L, reg getMethod:cls, reg f5:*, reg f6:V, reg p8:p(V +), reg signature1:*, reg signature2:V, reg p9:p(V +), reg where5:*, reg where6:V, reg p10:p(V +), reg fGen2:*, reg fGen3:V, reg p11:p(V +), reg r18:V, reg is:cls, reg mdef:*, reg mdef1:V, reg p12:p(V +), reg r20:V, reg is1:cls, reg fdef1:*, reg fdef2:V, reg p13:p(V +), reg r24:V, reg c1:L, reg matchSignature:cls, reg signature3:*, reg signature4:V, reg p14:p(V +), reg fdef3:*, reg fdef4:V, reg p15:p(V +), reg r27:V, reg sym:cls, reg base:cls, reg guard:L, reg r29:V, reg r30:V, reg signature5:*, reg signature6:V, reg length:cls, reg r31:V, reg r32:V, reg c2:L, reg _in_:cls, reg f7:*, reg f8:V, reg p16:p(V +), reg _subsetFuns:*, reg _subsetFuns1:V, reg p17:p(V +), reg r35:V, reg c3:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r36:V, reg r37:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r38:V, reg r39:V, reg signature7:*, reg signature8:V, reg _BasicClasses:*, reg _BasicClasses1:V, reg match:cls, reg r40:V, reg anyNA:cls, reg r41:V, reg r42:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r43:V, reg r44:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg signature9:*, reg signature10:V, reg c4:L, reg signature12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r47:V, reg _BasicClasses2:*, reg _BasicClasses3:V, reg match1:cls, reg r48:V, reg is_na:cls, reg r49:V, reg r50:V, reg sealed:*, reg sealed1:V, reg c5:L, reg c7:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r51:V, reg c10:L, reg r52:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg c13:L, reg r54:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg c16:L, reg r56:V, reg f9:*, reg f10:V, reg getGroup:cls, reg f11:*, reg f12:V, reg p18:p(V +), reg r58:V, reg c17:cls, reg r59:V, reg match2:cls, reg r60:V, reg is_na1:cls, reg r61:V, reg r62:V, reg c18:L, reg c19:L, reg c20:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg c27:L, reg c28:L, reg r64:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r65:V, reg c33:L, reg c34:L, reg r66:V, reg f13:*, reg f14:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg c39:L, reg c40:L, reg r68:V, reg c41:cls, reg r69:V, reg match3:cls, reg r70:V, reg is_na2:cls, reg r71:V, reg r72:V, reg c42:L, reg c43:V, reg c46:L, reg c47:V, reg c49:L, reg sealed2:*, reg sealed3:V, reg c50:L, reg c52:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r73:V, reg c55:L, reg r74:V, reg signature13:*, reg signature14:V, reg length1:cls, reg r75:V, reg r76:V, reg c56:L, reg c57:V, reg c59:L, reg c61:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r77:V, reg c64:L, reg r78:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r79:V, reg c67:L, reg r80:V, reg signature15:*, reg signature16:V, reg c68:L, reg c70:L, reg signature18:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c72:L, reg dx3:V, reg __1:cls, reg r81:V, reg _BasicClasses4:*, reg _BasicClasses5:V, reg match4:cls, reg r82:V, reg is_na3:cls, reg r83:V, reg r84:V, reg c73:L, reg c74:V, reg sealed4:*, reg sealed5:V |
    mkenv;
    st f = f;
    st signature = signature;
    fdef_isMissing = missing.0(fdef);
    if fdef_isMissing then L0() else L1(fdef);
  L0():
    p2 = prom<V +>{
      getGeneric = ldf getGeneric;
      p = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      p1 = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r2 = dyn getGeneric[, , where](p, FALSE, p1);
      return r2;
    };
    goto L1(p2);
  L1(fdef_orDefault):
    st fdef = fdef_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L2() else L3(where);
  L2():
    p4 = prom<V +>{
      topenv = ldf topenv;
      p3 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r4 = dyn parent_frame();
        return r4;
      };
      r6 = dyn topenv(p3);
      return r6;
    };
    goto L3(p4);
  L3(where_orDefault):
    st where = where_orDefault;
    getFunction = ldf getFunction;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    p5 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p6 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r10 = dyn getFunction[, , , where](p5, TRUE, FALSE, p6);
    check L33() else D1();
  D1():
    deopt 7 [r10];
  L33():
    st fGen = r10;
    is_primitive = ldf `is.primitive`;
    check L34() else D2();
  D2():
    deopt 10 [];
  L34():
    p7 = prom<V +>{
      fGen = ld fGen;
      fGen1 = force? fGen;
      checkMissing(fGen1);
      return fGen1;
    };
    r12 = dyn is_primitive(p7);
    check L35() else D3();
  D3():
    deopt 12 [r12];
  L35():
    r13 = `!`(r12);
    c = `as.logical`(r13);
    if c then L36() else L4();
  L4():
    is1 = ldf is;
    check L43() else D8();
  L36():
    getMethod = ldf getMethod;
    check L37() else D4();
  D4():
    deopt 15 [];
  D8():
    deopt 35 [];
  L37():
    p8 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p9 = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    p10 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    p11 = prom<V +>{
      fGen2 = ld fGen;
      fGen3 = force? fGen2;
      checkMissing(fGen3);
      return fGen3;
    };
    r18 = dyn getMethod[, , optional, where, fdef](p8, p9, TRUE, p10, p11);
    check L38() else D5();
  L43():
    p13 = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r24 = dyn is1(p13, "genericFunction");
    check L44() else D9();
  D5():
    deopt 24 [r18];
  D9():
    deopt 38 [r24];
  L38():
    st mdef = r18;
    is = ldf is;
    check L39() else D6();
  L44():
    c1 = `as.logical`(r24);
    if c1 then L45() else L6();
  D6():
    deopt 27 [];
  L6():
    goto L7();
  L7():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L49() else L50();
  L39():
    p12 = prom<V +>{
      mdef = ld mdef;
      mdef1 = force? mdef;
      checkMissing(mdef1);
      return mdef1;
    };
    r20 = dyn is(p12, "SealedMethodDefinition");
    check L40() else D7();
  L45():
    matchSignature = ldf matchSignature;
    check L46() else D10();
  D7():
    deopt 30 [r20];
  D10():
    deopt 40 [];
  L8(r30):
    r32 = `==`(r30, 0);
    c2 = `as.logical`(r32);
    if c2 then L53() else L9();
  L40():
    popenv;
    return r20;
  L46():
    p14 = prom<V +>{
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      return signature4;
    };
    p15 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r27 = dyn matchSignature(p14, p15);
    check L47() else D11();
  L49():
    signature5 = ld signature;
    check L51() else D12();
  L50():
    r29 = dyn base(<sym signature>);
    goto L8(r29);
  D11():
    deopt 43 [r27];
  D12():
    deopt 49 [signature5];
  L9():
    _in_ = ldf `%in%`;
    check L55() else D14();
  L47():
    st signature = r27;
    goto L7();
  L51():
    signature6 = force? signature5;
    checkMissing(signature6);
    length = ldf length in base;
    r31 = dyn length(signature6);
    check L52() else D13();
  L53():
    popenv;
    return TRUE;
  D13():
    deopt 52 [r31];
  D14():
    deopt 58 [];
  L52():
    goto L8(r31);
  L55():
    p16 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    p17 = prom<V +>{
      _subsetFuns = ld `.subsetFuns`;
      _subsetFuns1 = force? _subsetFuns;
      checkMissing(_subsetFuns1);
      return _subsetFuns1;
    };
    r35 = dyn _in_(p16, p17);
    check L56() else D15();
  D15():
    deopt 61 [r35];
  L56():
    c3 = `as.logical`(r35);
    if c3 then L57() else L10();
  L10():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L67() else L68();
  L57():
    sym1 = ldf anyNA;
    base1 = ldf anyNA in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L58() else L59();
  L11(r37):
    r42 = `!`(r37);
    popenv;
    return r42;
  L13(r44):
    r50 = `!`(r44);
    st sealed = r50;
    sealed = ld sealed;
    check L78() else D24();
  L58():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L60() else L61();
  L59():
    r36 = dyn base1(<lang match(signature, .BasicClasses)>);
    goto L11(r36);
  L67():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L69() else L70();
  L68():
    r43 = dyn base3(<lang match(`[[`(signature, 1), .BasicClasses)>);
    goto L13(r43);
  D24():
    deopt 96 [sealed];
  L12(r39):
    anyNA = ldf anyNA in base;
    r41 = dyn anyNA(r39);
    check L65() else D19();
  L14(r46):
    is_na = ldf `is.na` in base;
    r49 = dyn is_na(r46);
    check L77() else D23();
  L60():
    signature7 = ld signature;
    check L62() else D16();
  L61():
    r38 = dyn base2(<sym signature>, <sym .BasicClasses>);
    goto L12(r38);
  L69():
    signature9 = ld signature;
    check L71() else D20();
  L70():
    r45 = dyn base4(<lang `[[`(signature, 1)>, <sym .BasicClasses>);
    goto L14(r45);
  L78():
    sealed1 = force? sealed;
    checkMissing(sealed1);
    c5 = `as.logical`(sealed1);
    if c5 then L79() else L16(c5);
  D16():
    deopt 66 [signature7];
  D19():
    deopt 75 [r41];
  D20():
    deopt 81 [signature9];
  D23():
    deopt 93 [r49];
  L16(c7):
    c49 = `as.logical`(c7);
    if c49 then L105() else L24();
  L62():
    signature8 = force? signature7;
    checkMissing(signature8);
    _BasicClasses = ld `.BasicClasses`;
    check L63() else D17();
  L65():
    goto L11(r41);
  L71():
    signature10 = force? signature9;
    checkMissing(signature10);
    c4 = `is.object`(signature10);
    if c4 then L72() else L73(signature10);
  L77():
    goto L13(r49);
  L79():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L80() else L81();
  D17():
    deopt 68 [_BasicClasses];
  L15(dx1):
    _BasicClasses2 = ld `.BasicClasses`;
    check L75() else D21();
  L17(c10, r52):
    r62 = `!`(r52);
    c18 = `as.logical`(r62);
    if c18 then L20(c10, c18) else L92();
  L24():
    goto L31();
  L31():
    sealed4 = ld sealed;
    check L127() else D42();
  L63():
    _BasicClasses1 = force? _BasicClasses;
    checkMissing(_BasicClasses1);
    match = ldf match in base;
    r40 = dyn match(signature8, _BasicClasses1, NA_INT, NULL);
    check L64() else D18();
  L72():
    dr = tryDispatchBuiltin.1("[[", signature10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L74() else L73(dr);
  L73(signature12):
    __ = ldf `[[` in base;
    r47 = dyn __(signature12, 1);
    goto L15(r47);
  L80():
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L82() else L83();
  L81():
    r51 = dyn base5(<lang match("Ops", c(f, getGroup(f, TRUE)))>);
    goto L17(c5, r51);
  L105():
    sealed2 = ld sealed;
    check L106() else D35();
  D18():
    deopt 73 [r40];
  D21():
    deopt 86 [_BasicClasses2];
  D35():
    deopt 143 [sealed2];
  D42():
    deopt 176 [sealed4];
  L18(c13, r54):
    is_na1 = ldf `is.na` in base;
    r61 = dyn is_na1(r54);
    check L91() else D30();
  L20(c19, c20):
    c46 = `as.logical`(c20);
    c47 = `&&`(c19, c46);
    goto L16(c47);
  L64():
    goto L12(r40);
  L74():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L75():
    _BasicClasses3 = force? _BasicClasses2;
    checkMissing(_BasicClasses3);
    match1 = ldf match in base;
    r48 = dyn match1(dx1, _BasicClasses3, NA_INT, NULL);
    check L76() else D22();
  L82():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L84() else L85();
  L83():
    r53 = dyn base6("Ops", <lang c(f, getGroup(f, TRUE))>);
    goto L18(c5, r53);
  L92():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L93() else L94();
  L106():
    sealed3 = force? sealed2;
    checkMissing(sealed3);
    c50 = `as.logical`(sealed3);
    if c50 then L107() else L25(c50);
  L127():
    sealed5 = force? sealed4;
    checkMissing(sealed5);
    popenv;
    return sealed5;
  D22():
    deopt 91 [r48];
  D30():
    deopt 119 [c13, r61];
  L19(c16, r56):
    match2 = ldf match in base;
    r60 = dyn match2("Ops", r56, NA_INT, NULL);
    check L90() else D29();
  L21(c27, c28, r64):
    r72 = `!`(r64);
    c42 = `as.logical`(r72);
    c43 = `||`(c28, c42);
    goto L20(c27, c43);
  L25(c52):
    c59 = `as.logical`(c52);
    if c59 then L113() else L27(c59);
  L76():
    goto L14(r48);
  L84():
    f9 = ld f;
    check L86() else D25();
  L85():
    r55 = dyn base7(<sym f>, <lang getGroup(f, TRUE)>);
    goto L19(c5, r55);
  L91():
    goto L17(c13, r61);
  L93():
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L95() else L96();
  L94():
    r63 = dyn base8(<lang match(f, c("%*%", "crossprod", "tcrossprod"))>);
    goto L21(c10, c18, r63);
  L107():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L108() else L109();
  D25():
    deopt 105 [c5, f9];
  D29():
    deopt 117 [c16, r60];
  L22(c33, c34, r66):
    is_na2 = ldf `is.na` in base;
    r71 = dyn is_na2(r66);
    check L102() else D34();
  L26(c55, r74):
    r76 = `>`(r74, 1);
    c56 = `as.logical`(r76);
    c57 = `&&`(c55, c56);
    goto L25(c57);
  L27(c61):
    st sealed = c61;
    goto L31();
  L86():
    f10 = force? f9;
    checkMissing(f10);
    getGroup = ldf getGroup;
    check L87() else D26();
  L90():
    goto L18(c16, r60);
  L95():
    f13 = ld f;
    check L97() else D31();
  L96():
    r65 = dyn base9(<sym f>, <lang c("%*%", "crossprod", "tcrossprod")>);
    goto L22(c10, c18, r65);
  L108():
    signature13 = ld signature;
    check L110() else D36();
  L109():
    r73 = dyn base11(<sym signature>);
    goto L26(c50, r73);
  L113():
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L114() else L115();
  D26():
    deopt 108 [c5];
  D31():
    deopt 125 [c10, c18, f13];
  D34():
    deopt 139 [c33, c34, r71];
  D36():
    deopt 147 [c50, signature13];
  L28(c64, r78):
    r84 = `!`(r78);
    c73 = `as.logical`(r84);
    c74 = `&&`(c64, c73);
    goto L27(c74);
  L87():
    p18 = prom<V +>{
      f11 = ld f;
      f12 = force? f11;
      checkMissing(f12);
      return f12;
    };
    r58 = dyn getGroup(p18, TRUE);
    check L88() else D27();
  L97():
    f14 = force? f13;
    checkMissing(f14);
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L98() else L99();
  L102():
    goto L21(c33, c34, r71);
  L110():
    signature14 = force? signature13;
    checkMissing(signature14);
    length1 = ldf length in base;
    r75 = dyn length1(signature14);
    check L111() else D37();
  L114():
    sym13 = ldf match;
    base13 = ldf match in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L116() else L117();
  L115():
    r77 = dyn base12(<lang match(`[[`(signature, 2), .BasicClasses)>);
    goto L28(c59, r77);
  D27():
    deopt 111 [c5, r58];
  D37():
    deopt 150 [c50, r75];
  L23(c39, c40, r68):
    match3 = ldf match in base;
    r70 = dyn match3(f14, r68, NA_INT, NULL);
    check L101() else D33();
  L29(c67, r80):
    is_na3 = ldf `is.na` in base;
    r83 = dyn is_na3(r80);
    check L124() else D41();
  L88():
    c17 = ldf c in base;
    r59 = dyn c17(f10, r58);
    check L89() else D28();
  L98():
    c41 = ldf c in base;
    r69 = dyn c41("%*%", "crossprod", "tcrossprod");
    check L100() else D32();
  L99():
    r67 = dyn base10("%*%", "crossprod", "tcrossprod");
    goto L23(c10, c18, r67);
  L111():
    goto L26(c50, r75);
  L116():
    signature15 = ld signature;
    check L118() else D38();
  L117():
    r79 = dyn base13(<lang `[[`(signature, 2)>, <sym .BasicClasses>);
    goto L29(c59, r79);
  D28():
    deopt 113 [c5, r59];
  D32():
    deopt 133 [c10, c18, r69];
  D33():
    deopt 137 [c39, c40, r70];
  D38():
    deopt 158 [c59, signature15];
  D41():
    deopt 170 [c67, r83];
  L89():
    goto L19(c5, r59);
  L100():
    goto L23(c10, c18, r69);
  L101():
    goto L22(c39, c40, r70);
  L118():
    signature16 = force? signature15;
    checkMissing(signature16);
    c68 = `is.object`(signature16);
    if c68 then L119() else L120(c59, signature16);
  L124():
    goto L28(c67, r83);
  L30(c72, dx3):
    _BasicClasses4 = ld `.BasicClasses`;
    check L122() else D39();
  L119():
    dr2 = tryDispatchBuiltin.1("[[", signature16);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L121() else L120(c59, dr2);
  L120(c70, signature18):
    __1 = ldf `[[` in base;
    r81 = dyn __1(signature18, 2);
    goto L30(c70, r81);
  D39():
    deopt 163 [c72, _BasicClasses4];
  L121():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L30(c59, dx2);
  L122():
    _BasicClasses5 = force? _BasicClasses4;
    checkMissing(_BasicClasses5);
    match4 = ldf match in base;
    r82 = dyn match4(dx3, _BasicClasses5, NA_INT, NULL);
    check L123() else D40();
  D40():
    deopt 168 [c72, r82];
  L123():
    goto L29(c72, r82);
  }
}