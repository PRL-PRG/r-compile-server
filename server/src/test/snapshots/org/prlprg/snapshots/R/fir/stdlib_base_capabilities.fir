fun main() {
  () -+> V { reg r:cls, reg capabilities:cls, reg r1:V, reg capabilities1:cls, reg r2:V, reg r3:V, reg c:L, reg warning:cls, reg r4:V, reg capabilities2:cls, reg r6:V |
    mkenv;
    r = clos inner4026201876;
    st capabilities = r;
    capabilities = ldf capabilities;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    r1 = dyn capabilities();
    check L3() else D1();
  D1():
    deopt 5 [r1];
  L3():
    capabilities1 = ldf capabilities;
    check L4() else D2();
  D2():
    deopt 7 [];
  L4():
    r2 = dyn capabilities1("ICU");
    check L5() else D3();
  D3():
    deopt 9 [r2];
  L5():
    r3 = `!`(r2);
    c = `as.logical`(r3);
    if c then L6() else L0();
  L0():
    goto L1();
  L1():
    capabilities2 = ldf capabilities;
    check L10() else D6();
  L6():
    warning = ldf warning;
    check L7() else D4();
  D4():
    deopt 12 [];
  D6():
    deopt 18 [];
  L7():
    r4 = dyn warning("ICU is not available");
    check L8() else D5();
  L10():
    r6 = dyn capabilities2[Xchk](FALSE);
    check L11() else D7();
  D5():
    deopt 14 [r4];
  D7():
    deopt 21 [r6];
  L8():
    goto L1();
  L11():
    popenv;
    return r6;
  }
}
fun inner4026201876(what, Xchk) {
  (reg what:*, reg Xchk:*) -+> V { var what:*, reg what_isMissing:L, reg what_orDefault:*, var Xchk:*, reg Xchk_isMissing:L, reg Xchk_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _in_:cls, reg nas:*, reg nas1:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg any:cls, reg r8:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg capabilities:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg what1:*, reg what2:V, reg c1:V, reg r15:V, reg c2:L, reg z:*, reg z1:V, reg c3:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg z6:V, reg r17:V, reg what3:*, reg what4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg z9:V, reg r19:V, reg z10:*, reg z11:V, reg names:cls, reg r20:V, reg match:cls, reg r21:V, reg __:cls, reg r22:V, reg _Platform:*, reg _Platform1:V, reg c4:L, reg _Platform3:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r23:V, reg r24:V, reg c5:L, reg c6:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg c10:L, reg r26:V, reg missing:cls, reg r27:V, reg r28:V, reg c11:L, reg c14:L, reg c15:V, reg isFALSE:cls, reg Xchk1:*, reg Xchk2:V, reg p3:p(V +), reg r30:V, reg c16:L, reg c17:V, reg c20:L, reg c21:V, reg c23:L, reg z12:*, reg z13:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg z14:*, reg z15:V, reg c24:L, reg z17:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg z20:V, reg r36:V, reg z21:*, reg z22:V, reg is_na:cls, reg r37:V, reg __1:cls, reg r38:V, reg names1:cls, reg r39:V, reg Xchk3:*, reg Xchk4:V, reg c25:L, reg tryCatch:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg r41:V, reg capabilitiesX11:cls, reg r42:V, reg p4:p(V +), reg r44:cls, reg p5:p(V +), reg r46:V, reg l:*, reg c26:L, reg r48:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx7:V, reg r50:V, reg dx8:V, reg nas2:*, reg nas3:V, reg ___:cls, reg r51:V, reg z23:*, reg z24:V |
    mkenv;
    what_isMissing = missing.0(what);
    if what_isMissing then L0(NULL) else L0(what);
  L0(what_orDefault):
    st what = what_orDefault;
    Xchk_isMissing = missing.0(Xchk);
    if Xchk_isMissing then L1() else L2(Xchk);
  L1():
    p2 = prom<V +>{
      sym = ldf any;
      base = ldf any in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      _in_ = ldf `%in%`;
      p = prom<V +>{
        nas = ld nas;
        nas1 = force? nas;
        checkMissing(nas1);
        return nas1;
      };
      p1 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r4):
        return r4;
      L1():
        c = ldf c in base;
        r5 = dyn c("X11", "jpeg", "png", "tiff");
        goto L0(r5);
      L2():
        r3 = dyn base1("X11", "jpeg", "png", "tiff");
        goto L0(r3);
      };
      r7 = dyn _in_(p, p1);
      any = ldf any in base;
      r8 = dyn any(r7);
      goto L0(r8);
    L2():
      r = dyn base(<lang `%in%`(nas, c("X11", "jpeg", "png", "tiff"))>);
      goto L0(r);
    };
    goto L2(p2);
  L2(Xchk_orDefault):
    st Xchk = Xchk_orDefault;
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L3(r11):
    st z = r11;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L21():
    capabilities = ldf capabilities in base;
    r12 = dyn capabilities();
    check L23() else D0();
  L22():
    r10 = dyn base2(<lang capabilities()>);
    goto L3(r10);
  D0():
    deopt 3 [r12];
  L4(r14):
    r15 = `!`(r14);
    c2 = `as.logical`(r15);
    if c2 then L27() else L5();
  L23():
    goto L3(r12);
  L24():
    what1 = ld what;
    check L26() else D1();
  L25():
    r13 = dyn base3(<sym what>);
    goto L4(r13);
  D1():
    deopt 6 [what1];
  L5():
    goto L9();
  L9():
    _Platform = ld `.Platform`;
    check L41() else D7();
  L26():
    what2 = force? what1;
    checkMissing(what2);
    c1 = `==`(what2, NULL);
    goto L4(c1);
  L27():
    z = ld z;
    check L28() else D2();
  D2():
    deopt 10 [z];
  D7():
    deopt 30 [_Platform];
  L28():
    z1 = force? z;
    checkMissing(z1);
    c3 = `is.object`(z1);
    if c3 then L29() else L30(z1);
  L41():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c4 = `is.object`(_Platform1);
    if c4 then L43() else L44(_Platform1);
  L6(dx1):
    st z = dx1;
    goto L9();
  L29():
    dr = tryDispatchBuiltin.1("[", z1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(z3):
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L32() else L33();
  L42(dx4):
    r24 = `==`(dx4, "windows");
    c5 = `as.logical`(r24);
    if c5 then L10(c5) else L46();
  L43():
    dr2 = tryDispatchBuiltin.1("$", _Platform1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L45() else L44(dr2);
  L44(_Platform3):
    r23 = `$`(_Platform3, <sym OS.type>);
    goto L42(r23);
  L7(z6, r17):
    __ = ldf `[` in base;
    r22 = dyn __(z6, r17);
    goto L6(r22);
  L10(c6):
    c23 = `as.logical`(c6);
    if c23 then L54() else L13();
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L32():
    what3 = ld what;
    check L34() else D3();
  L33():
    r16 = dyn base4(<sym what>, <lang names(z)>, 0);
    goto L7(z3, r16);
  L45():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L42(dx3);
  L46():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L47() else L48();
  D3():
    deopt 14 [z3, what3];
  L11(c10, r26):
    r28 = `!`(r26);
    c11 = `as.logical`(r28);
    if c11 then L49() else L12(c10, c11);
  L13():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L58() else L59();
  L34():
    what4 = force? what3;
    checkMissing(what4);
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L35() else L36();
  L47():
    missing = ldf missing in base;
    r27 = dyn missing(<sym Xchk>);
    goto L11(c5, r27);
  L48():
    r25 = dyn base6(<sym Xchk>);
    goto L11(c5, r25);
  L54():
    z12 = ld z;
    check L55() else D10();
  D10():
    deopt 45 [z12];
  L8(z9, r19):
    match = ldf match in base;
    r21 = dyn match(what4, r19, 0, NULL);
    check L39() else D6();
  L12(c14, c15):
    c20 = `as.logical`(c15);
    c21 = `||`(c14, c20);
    goto L10(c21);
  L15(r34):
    st nas = r34;
    Xchk3 = ld Xchk;
    check L69() else D15();
  L35():
    z10 = ld z;
    check L37() else D4();
  L36():
    r18 = dyn base5(<sym z>);
    goto L8(z3, r18);
  L49():
    isFALSE = ldf isFALSE;
    check L50() else D8();
  L55():
    z13 = force? z12;
    checkMissing(z13);
    popenv;
    return z13;
  L58():
    z14 = ld z;
    check L60() else D11();
  L59():
    r33 = dyn base7(<lang `[`(z, is.na(z))>);
    goto L15(r33);
  D4():
    deopt 18 [z3, z10];
  D6():
    deopt 25 [z9, r21];
  D8():
    deopt 40 [c10, c11];
  D11():
    deopt 52 [z14];
  D15():
    deopt 64 [Xchk3];
  L37():
    z11 = force? z10;
    checkMissing(z11);
    names = ldf names in base;
    r20 = dyn names(z11);
    check L38() else D5();
  L39():
    goto L7(z9, r21);
  L50():
    p3 = prom<V +>{
      Xchk1 = ld Xchk;
      Xchk2 = force? Xchk1;
      checkMissing(Xchk2);
      return Xchk2;
    };
    r30 = dyn isFALSE(p3);
    check L51() else D9();
  L60():
    z15 = force? z14;
    checkMissing(z15);
    c24 = `is.object`(z15);
    if c24 then L61() else L62(z15);
  L69():
    Xchk4 = force? Xchk3;
    checkMissing(Xchk4);
    c25 = `as.logical`(Xchk4);
    if c25 then L70() else L18();
  D5():
    deopt 21 [z3, r20];
  D9():
    deopt 42 [c10, c11, r30];
  L16(dx6):
    names1 = ldf names in base;
    r39 = dyn names1(dx6);
    check L68() else D14();
  L18():
    goto L20();
  L20():
    z23 = ld z;
    check L78() else D19();
  L38():
    goto L8(z3, r20);
  L51():
    c16 = `as.logical`(r30);
    c17 = `&&`(c11, c16);
    goto L12(c10, c17);
  L61():
    dr4 = tryDispatchBuiltin.1("[", z15);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L63() else L62(dr4);
  L62(z17):
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L64() else L65();
  L70():
    tryCatch = ldf tryCatch;
    check L71() else D16();
  D14():
    deopt 62 [r39];
  D16():
    deopt 67 [];
  D19():
    deopt 79 [z23];
  L17(z20, r36):
    __1 = ldf `[` in base;
    r38 = dyn __1(z20, r36);
    goto L16(r38);
  L63():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L16(dx5);
  L64():
    z21 = ld z;
    check L66() else D12();
  L65():
    r35 = dyn base8(<sym z>);
    goto L17(z17, r35);
  L68():
    goto L15(r39);
  L71():
    p4 = prom<V +>{
      sym9 = ldf `.Internal`;
      base9 = ldf `.Internal` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      capabilitiesX11 = ldf capabilitiesX11 in base;
      r42 = dyn capabilitiesX11();
      goto L0(r42);
    L2():
      r40 = dyn base9(<lang capabilitiesX11()>);
      goto L0(r40);
    };
    p5 = prom<V +>{
      r44 = clos inner3708401697;
      return r44;
    };
    r46 = dyn tryCatch[, error](p4, p5);
    check L72() else D17();
  L78():
    z24 = force? z23;
    checkMissing(z24);
    popenv;
    return z24;
  D12():
    deopt 56 [z17, z21];
  D17():
    deopt 71 [r46];
  L66():
    z22 = force? z21;
    checkMissing(z22);
    is_na = ldf `is.na` in base;
    r37 = dyn is_na(z22);
    check L67() else D13();
  L72():
    l = ld z;
    c26 = `is.object`(l);
    if c26 then L73() else L74(r46, l);
  D13():
    deopt 59 [z17, r37];
  L19(r50, dx8):
    st z = dx8;
    goto L20();
  L67():
    goto L17(z17, r37);
  L73():
    dr6 = tryDispatchBuiltin.0("[<-", l, r46);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L75() else L74(r46, dr6);
  L74(r48, l2):
    nas2 = ld nas;
    check L76() else D18();
  D18():
    deopt 73 [r48, l2, r46, nas2];
  L75():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L19(r46, dx7);
  L76():
    nas3 = force? nas2;
    ___ = ldf `[<-` in base;
    r51 = dyn ___(l2, r46, nas3);
    goto L19(r48, r51);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return FALSE;
  }
}