fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2376484726;
    st `tail.matrix` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2376484726(x, n, keepnums, addrownums, `...`) {
  (reg x:*, reg n:*, reg keepnums:*, reg addrownums:*, reg ddd:dots) -+> V { var x:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var keepnums:*, reg keepnums_isMissing:L, reg keepnums_orDefault:*, var addrownums:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg _Deprecated:cls, reg gettext:cls, reg r4:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg missing1:cls, reg r9:V, reg c1:L, reg addrownums1:*, reg addrownums2:V, reg addrownums3:V, reg _checkHT:cls, reg n1:*, reg n2:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x1:*, reg x2:V, reg dim:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg which:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg n3:*, reg n4:V, reg c2:L, reg n6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg n9:V, reg r19:V, reg d:*, reg d1:V, reg r20:I, reg __:cls, reg r21:V, reg is_na:cls, reg r22:V, reg r23:V, reg p3:p(V +), reg r25:V, reg lapply:cls, reg ii:*, reg ii1:V, reg p4:p(V +), reg r27:cls, reg p5:p(V +), reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg rep:cls, reg r32:V, reg sel:*, reg sel1:V, reg l:*, reg c3:L, reg sel3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ii2:*, reg ii3:V, reg r33:V, reg ___:cls, reg r34:V, reg do_call:cls, reg __1:*, reg __2:V, reg p6:p(V +), reg args:*, reg args1:V, reg p7:p(V +), reg r37:V, reg keepnums1:*, reg keepnums2:V, reg c4:L, reg c6:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg c9:L, reg r39:V, reg d2:*, reg d3:V, reg length:cls, reg r40:V, reg r41:V, reg c10:L, reg c11:V, reg c13:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg ans:*, reg ans1:V, reg dimnames:cls, reg r46:V, reg c14:L, reg r48:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ii4:*, reg ii5:V, reg __3:cls, reg r49:V, reg c15:V, reg r50:V, reg c16:L, reg which1:cls, reg vapply:cls, reg adnms:*, reg adnms1:V, reg p8:p(V +), reg is_null:*, reg is_null1:V, reg p9:p(V +), reg r53:V, reg p10:p(V +), reg r55:V, reg r56:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg ii6:*, reg ii7:V, reg r58:I, reg sym10:cls, reg base10:cls, reg guard10:L, reg r59:V, reg r60:V, reg jj:*, reg jj1:V, reg length1:cls, reg r61:V, reg r62:V, reg c17:L, reg lapply1:cls, reg jj2:*, reg jj3:V, reg p11:p(V +), reg r64:cls, reg p12:p(V +), reg r66:V, reg l3:*, reg dimnames1:cls, reg r67:V, reg c18:L, reg r70:V, reg l5:*, reg r71:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r73:V, reg l7:*, reg dx7:V, reg ii8:*, reg ii9:V, reg c19:L, reg r77:V, reg l9:*, reg r78:V, reg r79:V, reg ii11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg r83:V, reg l11:*, reg r84:V, reg r85:V, reg dx9:V, reg jj4:*, reg jj5:V, reg __4:cls, reg r86:V, reg ___1:cls, reg r87:V, reg dimnames__:cls, reg r88:V, reg r89:V, reg ans2:*, reg ans3:V |
    mkenv;
    st x = x;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(6) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    keepnums_isMissing = missing.0(keepnums);
    if keepnums_isMissing then L1(TRUE) else L1(keepnums);
  L1(keepnums_orDefault):
    st keepnums = keepnums_orDefault;
    st addrownums = addrownums;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L26() else L3();
  L24():
    missing = ldf missing in base;
    r2 = dyn missing(<sym addrownums>);
    goto L2(r2);
  L25():
    r = dyn base(<sym addrownums>);
    goto L2(r);
  L3():
    goto L7();
  L7():
    _checkHT = ldf `.checkHT`;
    check L35() else D3();
  L26():
    _Deprecated = ldf `.Deprecated`;
    check L27() else D0();
  D0():
    deopt 5 [];
  D3():
    deopt 20 [];
  L27():
    p = prom<V +>{
      gettext = ldf gettext;
      r4 = dyn gettext("tail(., addrownums = V) is deprecated.\nUse ", "tail(., keepnums = V) instead.\n");
      return r4;
    };
    r6 = dyn _Deprecated[msg](p);
    check L28() else D1();
  L35():
    p1 = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p2 = prom<V +>{
      sym2 = ldf dim;
      base2 = ldf dim in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      st d = r12;
      invisible.0();
      return r12;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      dim = ldf dim in base;
      r13 = dyn dim(x2);
      goto L0(r13);
    L2():
      r11 = dyn base2(<sym x>);
      goto L0(r11);
    };
    r15 = dyn _checkHT(p1, p2);
    check L36() else D4();
  D1():
    deopt 8 [r6];
  D4():
    deopt 23 [r15];
  L28():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L36():
    which = ldf which;
    check L37() else D5();
  D5():
    deopt 25 [];
  L4(r8):
    c1 = `as.logical`(r8);
    if c1 then L31() else L5();
  L29():
    missing1 = ldf missing in base;
    r9 = dyn missing1(<sym keepnums>);
    goto L4(r9);
  L30():
    r7 = dyn base1(<sym keepnums>);
    goto L4(r7);
  L37():
    p3 = prom<V +>{
      sym3 = ldf `is.na`;
      base3 = ldf `is.na` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L3() else L4();
    L0(r17):
      r23 = `!`(r17);
      return r23;
    L3():
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      c2 = `is.object`(n4);
      if c2 then L5() else L6(n4);
    L4():
      r16 = dyn base3(<lang `[`(n, seq_along(d))>);
      goto L0(r16);
    L1(dx1):
      is_na = ldf `is.na` in base;
      r22 = dyn is_na(dx1);
      goto L0(r22);
    L5():
      dr = tryDispatchBuiltin.1("[", n4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(n6):
      sym4 = ldf seq_along;
      base4 = ldf seq_along in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L8() else L9();
    L2(n9, r19):
      __ = ldf `[` in base;
      r21 = dyn __(n9, r19);
      goto L1(r21);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L8():
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      r20 = seq_along(d1);
      goto L2(n6, r20);
    L9():
      r18 = dyn base4(<sym d>);
      goto L2(n6, r18);
    };
    r25 = dyn which(p3);
    check L38() else D6();
  D6():
    deopt 27 [r25];
  L5():
    goto L6(NULL);
  L6(addrownums3):
    goto L7();
  L31():
    addrownums1 = ld addrownums;
    check L32() else D2();
  L38():
    st ii = r25;
    lapply = ldf lapply;
    check L39() else D7();
  D2():
    deopt 12 [addrownums1];
  D7():
    deopt 30 [];
  L32():
    addrownums2 = force? addrownums1;
    checkMissing(addrownums2);
    st keepnums = addrownums2;
    goto L6(addrownums2);
  L39():
    p4 = prom<V +>{
      ii = ld ii;
      ii1 = force? ii;
      checkMissing(ii1);
      return ii1;
    };
    p5 = prom<V +>{
      r27 = clos inner3002224933;
      return r27;
    };
    r29 = dyn lapply(p4, p5);
    check L40() else D8();
  D8():
    deopt 33 [r29];
  L40():
    st sel = r29;
    sym5 = ldf rep;
    base5 = ldf rep in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L41() else L42();
  L8(r31):
    st args = r31;
    sel = ld sel;
    check L43() else D9();
  L41():
    rep = ldf rep in base;
    r32 = dyn rep(<lang alist(x, , drop=FALSE)>, <lang c(1, length(d), 1)>);
    goto L8(r32);
  L42():
    r30 = dyn base5(<lang alist(x, , drop=FALSE)>, <lang c(1, length(d), 1)>);
    goto L8(r30);
  D9():
    deopt 39 [sel];
  L43():
    sel1 = force? sel;
    checkMissing(sel1);
    l = ld args;
    c3 = `is.object`(l);
    if c3 then L44() else L45(sel1, l);
  L9(dx3):
    st args = dx3;
    do_call = ldf `do.call`;
    check L48() else D11();
  L44():
    dr2 = tryDispatchBuiltin.0("[<-", l, sel1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L46() else L45(sel1, dr2);
  L45(sel3, l2):
    ii2 = ld ii;
    check L47() else D10();
  D10():
    deopt 43 [sel3, l2, sel1, 1, ii2];
  D11():
    deopt 49 [];
  L46():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L47():
    ii3 = force? ii2;
    checkMissing(ii3);
    r33 = `+`(1, ii3);
    ___ = ldf `[<-` in base;
    r34 = dyn ___(l2, sel1, r33);
    goto L9(r34);
  L48():
    p6 = prom<V +>{
      __1 = ld `[`;
      __2 = force? __1;
      checkMissing(__2);
      return __2;
    };
    p7 = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    r37 = dyn do_call(p6, p7);
    check L49() else D12();
  D12():
    deopt 52 [r37];
  L49():
    st ans = r37;
    keepnums1 = ld keepnums;
    check L50() else D13();
  D13():
    deopt 54 [keepnums1];
  L50():
    keepnums2 = force? keepnums1;
    checkMissing(keepnums2);
    c4 = `as.logical`(keepnums2);
    if c4 then L51() else L10(c4);
  L10(c6):
    c13 = `as.logical`(c6);
    if c13 then L57() else L12();
  L51():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L52() else L53();
  L11(c9, r39):
    r41 = `>`(r39, 1);
    c10 = `as.logical`(r41);
    c11 = `&&`(c9, c10);
    goto L10(c11);
  L12():
    goto L23();
  L23():
    ans2 = ld ans;
    check L96() else D32();
  L52():
    d2 = ld d;
    check L54() else D14();
  L53():
    r38 = dyn base6(<sym d>);
    goto L11(c4, r38);
  L57():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L58() else L59();
  D14():
    deopt 58 [c4, d2];
  D32():
    deopt 119 [ans2];
  L13(r43):
    r50 = `!`(r43);
    c16 = `as.logical`(r50);
    if c16 then L68() else L16();
  L54():
    d3 = force? d2;
    checkMissing(d3);
    length = ldf length in base;
    r40 = dyn length(d3);
    check L55() else D15();
  L58():
    sym8 = ldf dimnames;
    base8 = ldf dimnames in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L60() else L61();
  L59():
    r42 = dyn base7(<lang `<-`(adnms, `[`(dimnames(ans), ii))>);
    goto L13(r42);
  L96():
    ans3 = force? ans2;
    checkMissing(ans3);
    popenv;
    return ans3;
  D15():
    deopt 61 [c4, r40];
  L14(r45):
    c14 = `is.object`(r45);
    if c14 then L64() else L65(r45);
  L16():
    sym9 = ldf seq_along;
    base9 = ldf seq_along in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L72() else L73();
  L17(r56):
    st jj = r56;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L75() else L76();
  L55():
    goto L11(c4, r40);
  L60():
    ans = ld ans;
    check L62() else D16();
  L61():
    r44 = dyn base8(<sym ans>);
    goto L14(r44);
  L68():
    which1 = ldf which;
    check L69() else D19();
  D16():
    deopt 68 [ans];
  D19():
    deopt 79 [];
  L15(dx5):
    st adnms = dx5;
    c15 = `==`(dx5, NULL);
    goto L13(c15);
  L18(r60):
    r62 = `>`(r60, 0.0);
    c17 = `as.logical`(r62);
    if c17 then L79() else L19();
  L62():
    ans1 = force? ans;
    checkMissing(ans1);
    dimnames = ldf dimnames in base;
    r46 = dyn dimnames(ans1);
    check L63() else D17();
  L64():
    dr4 = tryDispatchBuiltin.1("[", r45);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L66() else L65(dr4);
  L65(r48):
    ii4 = ld ii;
    check L67() else D18();
  L69():
    p10 = prom<V +>{
      vapply = ldf vapply;
      p8 = prom<V +>{
        adnms = ld adnms;
        adnms1 = force? adnms;
        checkMissing(adnms1);
        return adnms1;
      };
      p9 = prom<V +>{
        is_null = ld `is.null`;
        is_null1 = force? is_null;
        checkMissing(is_null1);
        return is_null1;
      };
      r53 = dyn vapply(p8, p9, NA_LGL);
      return r53;
    };
    r55 = dyn which1(p10);
    check L70() else D20();
  L72():
    ii6 = ld ii;
    check L74() else D21();
  L73():
    r57 = dyn base9(<sym ii>);
    goto L17(r57);
  L75():
    jj = ld jj;
    check L77() else D22();
  L76():
    r59 = dyn base10(<sym jj>);
    goto L18(r59);
  D17():
    deopt 71 [r46];
  D18():
    deopt 72 [r48, ii4];
  D20():
    deopt 81 [r55];
  D21():
    deopt 83 [ii6];
  D22():
    deopt 89 [jj];
  L19():
    goto L22(NULL);
  L22(r89):
    goto L23();
  L63():
    goto L14(r46);
  L66():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(dx4);
  L67():
    ii5 = force? ii4;
    __3 = ldf `[` in base;
    r49 = dyn __3(r48, ii5);
    goto L15(r49);
  L70():
    goto L17(r55);
  L74():
    ii7 = force? ii6;
    checkMissing(ii7);
    r58 = seq_along(ii7);
    goto L17(r58);
  L77():
    jj1 = force? jj;
    checkMissing(jj1);
    length1 = ldf length in base;
    r61 = dyn length1(jj1);
    check L78() else D23();
  L79():
    lapply1 = ldf lapply;
    check L80() else D24();
  D23():
    deopt 92 [r61];
  D24():
    deopt 96 [];
  L78():
    goto L18(r61);
  L80():
    p11 = prom<V +>{
      jj2 = ld jj;
      jj3 = force? jj2;
      checkMissing(jj3);
      return jj3;
    };
    p12 = prom<V +>{
      r64 = clos inner2649136551;
      return r64;
    };
    r66 = dyn lapply1(p11, p12);
    check L81() else D25();
  D25():
    deopt 99 [r66];
  L81():
    l3 = ld ans;
    dimnames1 = ldf dimnames;
    check L82() else D26();
  D26():
    deopt 101 [r66, l3, r66];
  L82():
    r67 = dyn dimnames1(r66, NULL);
    check L83() else D27();
  D27():
    deopt 103 [r66, l3, r66, r67];
  L83():
    c18 = `is.object`(r67);
    if c18 then L84() else L85(r66, l3, r67);
  L20(r73, l7, dx7):
    dimnames__ = ldf `dimnames<-`;
    check L92() else D30();
  L84():
    dr6 = tryDispatchBuiltin.0("[<-", r67, r66);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L86() else L85(r66, l3, dr6);
  L85(r70, l5, r71):
    ii8 = ld ii;
    check L87() else D28();
  D28():
    deopt 105 [r70, l5, r71, r66, ii8];
  D30():
    deopt 111 [r73, l7, dx7];
  L86():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L20(r66, l3, dx6);
  L87():
    ii9 = force? ii8;
    checkMissing(ii9);
    c19 = `is.object`(ii9);
    if c19 then L88() else L89(r70, l5, r71, r66, ii9);
  L92():
    r88 = dyn dimnames__(l7, NULL, dx7);
    check L93() else D31();
  D31():
    deopt 113 [r73, r88];
  L21(r83, l11, r84, r85, dx9):
    ___1 = ldf `[<-` in base;
    r87 = dyn ___1(r84, r85, dx9);
    goto L20(r83, l11, r87);
  L88():
    dr8 = tryDispatchBuiltin.1("[", ii9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L90() else L89(r70, l5, r71, r66, dr8);
  L89(r77, l9, r78, r79, ii11):
    jj4 = ld jj;
    check L91() else D29();
  L93():
    st ans = r88;
    goto L22(r73);
  D29():
    deopt 107 [r77, l9, r78, r79, ii11, jj4];
  L90():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L21(r70, l5, r71, r66, dx8);
  L91():
    jj5 = force? jj4;
    __4 = ldf `[` in base;
    r86 = dyn __4(ii11, jj5);
    goto L21(r77, l9, r78, r79, r86);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg d:*, reg d1:V, reg c:L, reg d3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V, reg n:*, reg n1:V, reg c1:L, reg n3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __1:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg di:*, reg di1:V, reg ni:*, reg ni1:V, reg r4:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg di2:*, reg di3:V, reg ni2:*, reg ni3:V, reg r7:V, reg max:cls, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg ni4:*, reg ni5:V, reg di4:*, reg di5:V, reg min:cls, reg r11:V, reg seq_int:cls, reg r12:V |
    mkenv;
    st i = i;
    d = ld d;
    check L6() else D0();
  D0():
    deopt 0 [d];
  L6():
    d1 = force? d;
    checkMissing(d1);
    c = `is.object`(d1);
    if c then L7() else L8(d1);
  L0(dx1):
    st di = dx1;
    n = ld n;
    check L11() else D2();
  L7():
    dr = tryDispatchBuiltin.1("[", d1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(d3):
    i1 = ld i;
    check L10() else D1();
  D1():
    deopt 2 [d3, i1];
  D2():
    deopt 6 [n];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L10():
    i2 = force? i1;
    __ = ldf `[` in base;
    r = dyn __(d3, i2);
    goto L0(r);
  L11():
    n1 = force? n;
    checkMissing(n1);
    c1 = `is.object`(n1);
    if c1 then L12() else L13(n1);
  L1(dx3):
    st ni = dx3;
    sym = ldf `seq.int`;
    base = ldf `seq.int` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L12():
    dr2 = tryDispatchBuiltin.1("[", n1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(dr2);
  L13(n3):
    i3 = ld i;
    check L15() else D3();
  D3():
    deopt 8 [n3, i3];
  L2(r3):
    popenv;
    return r3;
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L15():
    i4 = force? i3;
    __1 = ldf `[` in base;
    r1 = dyn __1(n3, i4);
    goto L1(r1);
  L16():
    di = ld di;
    check L18() else D4();
  L17():
    r2 = dyn base[to, `length.out`](<sym di>, <lang if(`<`(ni, 0), max(`+`(di, ni), 0), min(ni, di))>);
    goto L2(r2);
  D4():
    deopt 14 [di];
  L18():
    di1 = force? di;
    checkMissing(di1);
    ni = ld ni;
    check L19() else D5();
  D5():
    deopt 17 [ni];
  L19():
    ni1 = force? ni;
    checkMissing(ni1);
    r4 = `<`(ni1, 0);
    c2 = `as.logical`(r4);
    if c2 then L20() else L3();
  L3():
    sym2 = ldf min;
    base2 = ldf min in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L5(r9):
    seq_int = ldf `seq.int` in base;
    r12 = dyn seq_int(di1, r9);
    check L32() else D12();
  L20():
    sym1 = ldf max;
    base1 = ldf max in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  D12():
    deopt 40 [r12];
  L4(r6):
    goto L5(r6);
  L21():
    di2 = ld di;
    check L23() else D6();
  L22():
    r5 = dyn base1(<lang `+`(di, ni)>, 0);
    goto L4(r5);
  L27():
    ni4 = ld ni;
    check L29() else D9();
  L28():
    r10 = dyn base2(<sym ni>, <sym di>);
    goto L5(r10);
  L32():
    goto L2(r12);
  D6():
    deopt 23 [di2];
  D9():
    deopt 32 [ni4];
  L23():
    di3 = force? di2;
    checkMissing(di3);
    ni2 = ld ni;
    check L24() else D7();
  L29():
    ni5 = force? ni4;
    checkMissing(ni5);
    di4 = ld di;
    check L30() else D10();
  D7():
    deopt 24 [di3, ni2];
  D10():
    deopt 34 [di4];
  L24():
    ni3 = force? ni2;
    checkMissing(ni3);
    r7 = `+`(di3, ni3);
    max = ldf max in base;
    r8 = dyn max(r7, 0);
    check L25() else D8();
  L30():
    di5 = force? di4;
    checkMissing(di5);
    min = ldf min in base;
    r11 = dyn min(ni5, di5);
    check L31() else D11();
  D8():
    deopt 29 [r8];
  D11():
    deopt 37 [r11];
  L25():
    goto L4(r8);
  L31():
    goto L5(r11);
  }
}
fun inner2649136551(k) {
  (reg k:*) -+> V { var k:*, reg ii:*, reg ii1:V, reg c:L, reg ii3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg k1:*, reg k2:V, reg __:cls, reg r:V, reg r1:V, reg c1:L, reg format:cls, reg sprintf:cls, reg sel:*, reg sel1:V, reg c2:L, reg sel3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg k3:*, reg k4:V, reg __1:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg dnum:*, reg dnum1:V, reg r7:V, reg c3:L, reg sprintf1:cls, reg sel4:*, reg sel5:V, reg c4:L, reg sel7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg k5:*, reg k6:V, reg __2:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg sel8:*, reg sel9:V, reg c5:L, reg sel11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg k7:*, reg k8:V, reg __3:cls, reg r11:V |
    mkenv;
    st k = k;
    ii = ld ii;
    check L4() else D0();
  D0():
    deopt 0 [ii];
  L4():
    ii1 = force? ii;
    checkMissing(ii1);
    c = `is.object`(ii1);
    if c then L5() else L6(ii1);
  L0(dx1):
    st dnum = dx1;
    r1 = `==`(dx1, 1);
    c1 = `as.logical`(r1);
    if c1 then L9() else L1();
  L5():
    dr = tryDispatchBuiltin.1("[", ii1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(ii3):
    k1 = ld k;
    check L8() else D1();
  D1():
    deopt 2 [ii3, k1];
  L1():
    dnum = ld dnum;
    check L13() else D4();
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    k2 = force? k1;
    __ = ldf `[` in base;
    r = dyn __(ii3, k2);
    goto L0(r);
  L9():
    format = ldf format;
    check L10() else D2();
  D2():
    deopt 9 [];
  D4():
    deopt 14 [dnum];
  L10():
    p1 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        sel = ld sel;
        sel1 = force? sel;
        checkMissing(sel1);
        c2 = `is.object`(sel1);
        if c2 then L1() else L2(sel1);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", sel1);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(sel3):
        k3 = ld k;
        k4 = force? k3;
        __1 = ldf `[[` in base;
        r2 = dyn __1(sel3, k4);
        goto L0(r2);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r4 = dyn sprintf("[%d,]", p);
      return r4;
    };
    r6 = dyn format[, justify](p1, "right");
    check L11() else D3();
  L13():
    dnum1 = force? dnum;
    checkMissing(dnum1);
    r7 = `==`(dnum1, 2);
    c3 = `as.logical`(r7);
    if c3 then L14() else L2();
  D3():
    deopt 13 [r6];
  L2():
    sel8 = ld sel;
    check L18() else D7();
  L11():
    popenv;
    return r6;
  L14():
    sprintf1 = ldf sprintf;
    check L15() else D5();
  D5():
    deopt 19 [];
  D7():
    deopt 23 [sel8];
  L15():
    p2 = prom<V +>{
      sel4 = ld sel;
      sel5 = force? sel4;
      checkMissing(sel5);
      c4 = `is.object`(sel5);
      if c4 then L1() else L2(sel5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", sel5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(sel7):
      k5 = ld k;
      k6 = force? k5;
      __2 = ldf `[[` in base;
      r8 = dyn __2(sel7, k6);
      goto L0(r8);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r10 = dyn sprintf1("[,%d]", p2);
    check L16() else D6();
  L18():
    sel9 = force? sel8;
    checkMissing(sel9);
    c5 = `is.object`(sel9);
    if c5 then L19() else L20(sel9);
  D6():
    deopt 22 [r10];
  L3(dx7):
    popenv;
    return dx7;
  L16():
    popenv;
    return r10;
  L19():
    dr6 = tryDispatchBuiltin.1("[[", sel9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L21() else L20(dr6);
  L20(sel11):
    k7 = ld k;
    check L22() else D8();
  D8():
    deopt 25 [sel11, k7];
  L21():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L3(dx6);
  L22():
    k8 = force? k7;
    __3 = ldf `[[` in base;
    r11 = dyn __3(sel11, k8);
    goto L3(r11);
  }
}