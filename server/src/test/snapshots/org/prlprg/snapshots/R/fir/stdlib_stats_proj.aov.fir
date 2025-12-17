fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1719482137;
    st `proj.aov` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1719482137(object, onedf, `unweighted.scale`, `...`) {
  (reg object:*, reg onedf:*, reg unweighted_scale:*, reg ddd:dots) -+> V { var object:*, var onedf:*, reg onedf_isMissing:L, reg onedf_orDefault:*, var `unweighted.scale`:*, reg unweighted_scale_isMissing:L, reg unweighted_scale_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg inherits:cls, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg r5:cls, reg NextMethod:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg terms:cls, reg object3:*, reg object4:V, reg p:p(V +), reg r10:V, reg attr:cls, reg r11:V, reg factors_aov:cls, reg colnames:cls, reg projections:*, reg projections1:V, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg t_factor:*, reg t_factor1:V, reg p3:p(V +), reg r16:V, reg l:*, reg attr__:cls, reg r17:V, reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg l1:*, reg attr__1:cls, reg r19:V, reg t_factor2:*, reg t_factor3:V, reg l2:*, reg attr__2:cls, reg r20:V, reg l3:*, reg class__:cls, reg r21:V, reg projections2:*, reg projections3:V |
    mkenv;
    st object = object;
    onedf_isMissing = missing.0(onedf);
    if onedf_isMissing then L0(FALSE) else L0(onedf);
  L0(onedf_orDefault):
    st onedf = onedf_orDefault;
    unweighted_scale_isMissing = missing.0(unweighted_scale);
    if unweighted_scale_isMissing then L1(FALSE) else L1(unweighted_scale);
  L1(unweighted_scale_orDefault):
    st `unweighted.scale` = unweighted_scale_orDefault;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L2(r1):
    c = `as.logical`(r1);
    if c then L10() else L3();
  L6():
    object1 = ld object;
    check L8() else D0();
  L7():
    r = dyn base(<sym object>, "maov");
    goto L2(r);
  D0():
    deopt 2 [object1];
  L3():
    goto L4();
  L4():
    r5 = clos inner3925336243;
    st `factors.aov` = r5;
    NextMethod = ldf NextMethod;
    check L14() else D4();
  L8():
    object2 = force? object1;
    checkMissing(object2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(object2, "maov", FALSE);
    check L9() else D1();
  L10():
    stop = ldf stop;
    check L11() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 18 [];
  L9():
    goto L2(r2);
  L11():
    r3 = dyn stop("'proj' is not implemented for multiple responses");
    check L12() else D3();
  L14():
    r6 = dyn NextMethod("proj");
    check L15() else D5();
  D3():
    deopt 11 [r3];
  D5():
    deopt 20 [r6];
  L12():
    goto L4();
  L15():
    st projections = r6;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L5(r8):
    st `t.factor` = r8;
    factors_aov = ldf `factors.aov`;
    check L21() else D9();
  L16():
    terms = ldf terms;
    check L18() else D6();
  L17():
    r7 = dyn base1(<lang terms(object)>, "factors");
    goto L5(r7);
  D6():
    deopt 25 [];
  D9():
    deopt 33 [];
  L18():
    p = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r10 = dyn terms(p);
    check L19() else D7();
  L21():
    p2 = prom<V +>{
      colnames = ldf colnames;
      p1 = prom<V +>{
        projections = ld projections;
        projections1 = force? projections;
        checkMissing(projections1);
        return projections1;
      };
      r13 = dyn colnames(p1);
      return r13;
    };
    p3 = prom<V +>{
      t_factor = ld `t.factor`;
      t_factor1 = force? t_factor;
      checkMissing(t_factor1);
      return t_factor1;
    };
    r16 = dyn factors_aov(p2, p3);
    check L22() else D10();
  D7():
    deopt 27 [r10];
  D10():
    deopt 36 [r16];
  L19():
    attr = ldf attr in base;
    r11 = dyn attr(r10, "factors");
    check L20() else D8();
  L22():
    l = ld projections;
    attr__ = ldf `attr<-`;
    check L23() else D11();
  D8():
    deopt 30 [r11];
  D11():
    deopt 38 [r16, l, r16];
  L20():
    goto L5(r11);
  L23():
    r17 = dyn attr__(l, NULL, "factors", r16);
    check L24() else D12();
  D12():
    deopt 41 [r16, r17];
  L24():
    st projections = r17;
    object5 = ld object;
    check L25() else D13();
  D13():
    deopt 43 [object5];
  L25():
    object6 = force? object5;
    checkMissing(object6);
    c1 = `is.object`(object6);
    if c1 then L27() else L28(object6);
  L26(dx1):
    l1 = ld projections;
    attr__1 = ldf `attr<-`;
    check L30() else D14();
  L27():
    dr = tryDispatchBuiltin.1("$", object6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(object8):
    r18 = `$`(object8, <sym call>);
    goto L26(r18);
  D14():
    deopt 47 [dx1, l1, dx1];
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L26(dx);
  L30():
    r19 = dyn attr__1(l1, NULL, "call", dx1);
    check L31() else D15();
  D15():
    deopt 50 [dx1, r19];
  L31():
    st projections = r19;
    t_factor2 = ld `t.factor`;
    check L32() else D16();
  D16():
    deopt 52 [t_factor2];
  L32():
    t_factor3 = force? t_factor2;
    checkMissing(t_factor3);
    l2 = ld projections;
    attr__2 = ldf `attr<-`;
    check L33() else D17();
  D17():
    deopt 55 [t_factor3, l2, t_factor3];
  L33():
    r20 = dyn attr__2(l2, NULL, "t.factor", t_factor3);
    check L34() else D18();
  D18():
    deopt 58 [t_factor3, r20];
  L34():
    st projections = r20;
    l3 = ld projections;
    class__ = ldf `class<-`;
    check L35() else D19();
  D19():
    deopt 63 ["aovproj", l3, "aovproj"];
  L35():
    r21 = dyn class__(l3, NULL, "aovproj");
    check L36() else D20();
  D20():
    deopt 65 ["aovproj", r21];
  L36():
    st projections = r21;
    projections2 = ld projections;
    check L37() else D21();
  D21():
    deopt 67 [projections2];
  L37():
    projections3 = force? projections2;
    checkMissing(projections3);
    popenv;
    return projections3;
  }
}
fun inner3925336243(pnames, tfactor) {
  (reg pnames:*, reg tfactor:*) -+> V { var pnames:*, var tfactor:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg pnames1:*, reg pnames2:V, reg match:cls, reg r4:V, reg is_na:cls, reg r5:V, reg r6:V, reg c:L, reg pnames3:*, reg pnames4:V, reg c1:L, reg pnames6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg int:*, reg int1:V, reg r7:V, reg __:cls, reg r8:V, reg setNames:cls, reg lapply:cls, reg colnames:cls, reg tfactor1:*, reg tfactor2:V, reg p:p(V +), reg r10:V, reg p1:p(V +), reg r12:cls, reg p2:p(V +), reg tfactor3:*, reg tfactor4:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg colnames1:cls, reg tfactor5:*, reg tfactor6:V, reg p5:p(V +), reg r18:V, reg p6:p(V +), reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg pnames7:*, reg pnames8:V, reg match1:cls, reg r25:V, reg is_na1:cls, reg r26:V, reg r27:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg rownames:cls, reg tfactor7:*, reg tfactor8:V, reg p7:p(V +), reg r31:V, reg c3:L, reg r33:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg r38:V, reg tfactor9:*, reg tfactor10:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg r43:V, reg ncol:cls, reg tfactor11:*, reg tfactor12:V, reg p8:p(V +), reg r45:V, reg rep_int:cls, reg r46:V, reg ___:cls, reg r47:V, reg as_logical:cls, reg r48:V, reg __1:cls, reg r49:V, reg c4:cls, reg r50:V, reg append:cls, reg tnames:*, reg tnames1:V, reg p9:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg r53:V, reg enames:*, reg enames1:V, reg list:cls, reg r54:V, reg p10:p(V +), reg r56:V, reg tnames2:*, reg tnames3:V, reg c5:L, reg tnames5:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg tnames8:V, reg r59:V, reg pnames9:*, reg pnames10:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r60:V, reg tnames11:V, reg r61:V, reg tnames12:*, reg tnames13:V, reg names:cls, reg r62:V, reg match2:cls, reg r63:V, reg __2:cls, reg r64:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r65:V, reg r66:V, reg int2:*, reg int3:V, reg is_na2:cls, reg r67:V, reg r68:V, reg c6:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r69:V, reg r70:V, reg result:*, reg result1:V, reg c7:cls, reg r71:V, reg result2:*, reg result3:V |
    mkenv;
    st pnames = pnames;
    st tfactor = tfactor;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L0(r1):
    r6 = `!`(r1);
    c = `as.logical`(r6);
    if c then L27() else L2();
  L20():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L21():
    r = dyn base(<lang `<-`(int, match("(Intercept)", pnames))>);
    goto L0(r);
  L1(r3):
    st int = r3;
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(r3);
    check L26() else D2();
  L2():
    goto L4();
  L4():
    setNames = ldf setNames;
    check L34() else D5();
  L22():
    pnames1 = ld pnames;
    check L24() else D0();
  L23():
    r2 = dyn base1("(Intercept)", <sym pnames>);
    goto L1(r2);
  L27():
    pnames3 = ld pnames;
    check L28() else D3();
  D0():
    deopt 5 [pnames1];
  D2():
    deopt 13 [r5];
  D3():
    deopt 15 [pnames3];
  D5():
    deopt 25 [];
  L24():
    pnames2 = force? pnames1;
    checkMissing(pnames2);
    match = ldf match in base;
    r4 = dyn match("(Intercept)", pnames2, NA_INT, NULL);
    check L25() else D1();
  L26():
    goto L0(r5);
  L28():
    pnames4 = force? pnames3;
    checkMissing(pnames4);
    c1 = `is.object`(pnames4);
    if c1 then L29() else L30(pnames4);
  L34():
    p4 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        colnames = ldf colnames;
        p = prom<V +>{
          tfactor1 = ld tfactor;
          tfactor2 = force? tfactor1;
          checkMissing(tfactor2);
          return tfactor2;
        };
        r10 = dyn colnames(p);
        return r10;
      };
      p2 = prom<V +>{
        r12 = clos inner4286386836;
        return r12;
      };
      p3 = prom<V +>{
        tfactor3 = ld tfactor;
        tfactor4 = force? tfactor3;
        checkMissing(tfactor4);
        return tfactor4;
      };
      r15 = dyn lapply(p1, p2, p3);
      return r15;
    };
    p6 = prom<V +>{
      colnames1 = ldf colnames;
      p5 = prom<V +>{
        tfactor5 = ld tfactor;
        tfactor6 = force? tfactor5;
        checkMissing(tfactor6);
        return tfactor6;
      };
      r18 = dyn colnames1(p5);
      return r18;
    };
    r20 = dyn setNames(p4, p6);
    check L35() else D6();
  D1():
    deopt 10 [r4];
  D6():
    deopt 28 [r20];
  L3(dx1):
    st pnames = dx1;
    goto L4();
  L25():
    goto L1(r4);
  L29():
    dr = tryDispatchBuiltin.1("[", pnames4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(pnames6):
    int = ld int;
    check L32() else D4();
  L35():
    st tnames = r20;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  D4():
    deopt 17 [pnames6, int];
  L5(r22):
    r27 = `!`(r22);
    c2 = `as.logical`(r27);
    if c2 then L43() else L7();
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L32():
    int1 = force? int;
    checkMissing(int1);
    r7 = `-`(<missing>, int1);
    __ = ldf `[` in base;
    r8 = dyn __(pnames6, r7);
    goto L3(r8);
  L36():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L37():
    r21 = dyn base2(<lang match("Residuals", pnames)>);
    goto L5(r21);
  L6(r24):
    is_na1 = ldf `is.na` in base;
    r26 = dyn is_na1(r24);
    check L42() else D9();
  L7():
    goto L12();
  L12():
    tnames2 = ld tnames;
    check L65() else D21();
  L38():
    pnames7 = ld pnames;
    check L40() else D7();
  L39():
    r23 = dyn base3("Residuals", <sym pnames>);
    goto L6(r23);
  L43():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  D7():
    deopt 35 [pnames7];
  D9():
    deopt 42 [r26];
  D21():
    deopt 81 [tnames2];
  L8(r29):
    st enames = r29;
    append = ldf append;
    check L62() else D19();
  L40():
    pnames8 = force? pnames7;
    checkMissing(pnames8);
    match1 = ldf match in base;
    r25 = dyn match1("Residuals", pnames8, NA_INT, NULL);
    check L41() else D8();
  L42():
    goto L5(r26);
  L44():
    rownames = ldf rownames;
    check L46() else D10();
  L45():
    r28 = dyn base4(<lang `[`(rownames(tfactor), as.logical(`%*%`(tfactor, rep.int(1.0, ncol(tfactor)))))>, "Within");
    goto L8(r28);
  L65():
    tnames3 = force? tnames2;
    checkMissing(tnames3);
    c5 = `is.object`(tnames3);
    if c5 then L66() else L67(tnames3);
  D8():
    deopt 40 [r25];
  D10():
    deopt 47 [];
  D19():
    deopt 74 [];
  L13(dx6):
    st result = dx6;
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L77() else L78();
  L41():
    goto L6(r25);
  L46():
    p7 = prom<V +>{
      tfactor7 = ld tfactor;
      tfactor8 = force? tfactor7;
      checkMissing(tfactor8);
      return tfactor8;
    };
    r31 = dyn rownames(p7);
    check L47() else D11();
  L62():
    p9 = prom<V +>{
      tnames = ld tnames;
      tnames1 = force? tnames;
      checkMissing(tnames1);
      return tnames1;
    };
    p10 = prom<V +>{
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      enames = ld enames;
      enames1 = force? enames;
      checkMissing(enames1);
      list = ldf list in base;
      r54 = dyn list(enames1);
      goto L0(r54);
    L2():
      r52 = dyn base7[Residuals](<sym enames>);
      goto L0(r52);
    };
    r56 = dyn append(p9, p10);
    check L63() else D20();
  L66():
    dr4 = tryDispatchBuiltin.1("[", tnames3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L68() else L67(dr4);
  L67(tnames5):
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L69() else L70();
  D11():
    deopt 49 [r31];
  D20():
    deopt 77 [r56];
  L14(tnames8, r59):
    __2 = ldf `[` in base;
    r64 = dyn __2(tnames8, r59);
    goto L13(r64);
  L16(r66):
    r68 = `!`(r66);
    c6 = `as.logical`(r68);
    if c6 then L81() else L17();
  L47():
    c3 = `is.object`(r31);
    if c3 then L48() else L49(r31);
  L63():
    st tnames = r56;
    goto L12();
  L68():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx5);
  L69():
    pnames9 = ld pnames;
    check L71() else D22();
  L70():
    r58 = dyn base8(<sym pnames>, <lang names(tnames)>);
    goto L14(tnames5, r58);
  L77():
    int2 = ld int;
    check L79() else D26();
  L78():
    r65 = dyn base10(<sym int>);
    goto L16(r65);
  D22():
    deopt 85 [tnames5, pnames9];
  D26():
    deopt 101 [int2];
  L9(dx4):
    c4 = ldf c in base;
    r50 = dyn c4(dx4, "Within");
    check L61() else D18();
  L17():
    goto L19();
  L19():
    result2 = ld result;
    check L87() else D30();
  L48():
    dr2 = tryDispatchBuiltin.1("[", r31);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(dr2);
  L49(r33):
    sym5 = ldf `as.logical`;
    base5 = ldf `as.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L71():
    pnames10 = force? pnames9;
    checkMissing(pnames10);
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L72() else L73();
  L79():
    int3 = force? int2;
    checkMissing(int3);
    is_na2 = ldf `is.na` in base;
    r67 = dyn is_na2(int3);
    check L80() else D27();
  L81():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L82() else L83();
  D18():
    deopt 71 [r50];
  D27():
    deopt 104 [r67];
  D30():
    deopt 117 [result2];
  L10(r37, r38):
    __1 = ldf `[` in base;
    r49 = dyn __1(r37, r38);
    goto L9(r49);
  L15(tnames11, r61):
    match2 = ldf match in base;
    r63 = dyn match2(pnames10, r61, NA_INT, NULL);
    check L76() else D25();
  L18(r70):
    st result = r70;
    goto L19();
  L50():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx3);
  L51():
    tfactor9 = ld tfactor;
    check L53() else D12();
  L52():
    r36 = dyn base5(<lang `%*%`(tfactor, rep.int(1.0, ncol(tfactor)))>);
    goto L10(r33, r36);
  L61():
    goto L8(r50);
  L72():
    tnames12 = ld tnames;
    check L74() else D23();
  L73():
    r60 = dyn base9(<sym tnames>);
    goto L15(tnames5, r60);
  L80():
    goto L16(r67);
  L82():
    result = ld result;
    check L84() else D28();
  L83():
    r69 = dyn base11[`(Intercept)`, ]("(Intercept)", <sym result>);
    goto L18(r69);
  L87():
    result3 = force? result2;
    checkMissing(result3);
    popenv;
    return result3;
  D12():
    deopt 53 [r33, tfactor9];
  D23():
    deopt 89 [tnames5, tnames12];
  D25():
    deopt 96 [tnames11, r63];
  D28():
    deopt 110 [result];
  L53():
    tfactor10 = force? tfactor9;
    checkMissing(tfactor10);
    sym6 = ldf `rep.int`;
    base6 = ldf `rep.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  L74():
    tnames13 = force? tnames12;
    checkMissing(tnames13);
    names = ldf names in base;
    r62 = dyn names(tnames13);
    check L75() else D24();
  L76():
    goto L14(tnames11, r63);
  L84():
    result1 = force? result;
    checkMissing(result1);
    c7 = ldf c in base;
    r71 = dyn c7("(Intercept)", result1);
    check L85() else D29();
  D24():
    deopt 92 [tnames5, r62];
  D29():
    deopt 113 [r71];
  L11(r42, r43):
    ___ = ldf `%*%` in base;
    r47 = dyn ___(tfactor10, r43);
    check L59() else D16();
  L54():
    ncol = ldf ncol;
    check L56() else D13();
  L55():
    r41 = dyn base6(1.0, <lang ncol(tfactor)>);
    goto L11(r33, r41);
  L75():
    goto L15(tnames5, r62);
  L85():
    goto L18(r71);
  D13():
    deopt 59 [r33];
  D16():
    deopt 65 [r42, r47];
  L56():
    p8 = prom<V +>{
      tfactor11 = ld tfactor;
      tfactor12 = force? tfactor11;
      checkMissing(tfactor12);
      return tfactor12;
    };
    r45 = dyn ncol(p8);
    check L57() else D14();
  L59():
    as_logical = ldf `as.logical` in base;
    r48 = dyn as_logical(r47);
    check L60() else D17();
  D14():
    deopt 61 [r33, r45];
  D17():
    deopt 67 [r42, r48];
  L57():
    rep_int = ldf `rep.int` in base;
    r46 = dyn rep_int(1.0, r45);
    check L58() else D15();
  L60():
    goto L10(r42, r48);
  D15():
    deopt 63 [r33, r46];
  L58():
    goto L11(r33, r46);
  }
}
fun inner4286386836(x, mat) {
  (reg x:*, reg mat:*) -+> V { var x:*, var mat:*, reg rownames:cls, reg mat1:*, reg mat2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg mat3:*, reg mat4:V, reg c1:L, reg r5:V, reg mat6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r7:V, reg dx3:V, reg x1:*, reg x2:V, reg __:cls, reg r8:V, reg r9:V, reg __1:cls, reg r10:V |
    mkenv;
    st x = x;
    st mat = mat;
    rownames = ldf rownames;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      mat1 = ld mat;
      mat2 = force? mat1;
      checkMissing(mat2);
      return mat2;
    };
    r1 = dyn rownames(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    c = `is.object`(r1);
    if c then L4() else L5(r1);
  L0(dx1):
    popenv;
    return dx1;
  L4():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(r3):
    mat3 = ld mat;
    check L7() else D2();
  D2():
    deopt 4 [r3, mat3];
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L7():
    mat4 = force? mat3;
    checkMissing(mat4);
    c1 = `is.object`(mat4);
    if c1 then L8() else L9(r3, mat4);
  L1(r7, dx3):
    r9 = `>`(dx3, 0.0);
    __1 = ldf `[` in base;
    r10 = dyn __1(r7, r9);
    goto L0(r10);
  L8():
    dr2 = tryDispatchBuiltin.1("[", mat4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L10() else L9(r3, dr2);
  L9(r5, mat6):
    x1 = ld x;
    check L11() else D3();
  D3():
    deopt 7 [r5, mat6, x1];
  L10():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(r3, dx2);
  L11():
    x2 = force? x1;
    __ = ldf `[` in base;
    r8 = dyn __(mat4, <missing>, x2);
    goto L1(r5, r8);
  }
}