fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3830511868;
    st apropos = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3830511868(what, where, `ignore.case`, dot_internals, mode) {
  (reg what:*, reg where:*, reg ignore_case:*, reg dot_internals:*, reg mode:*) -+> V { var what:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var dot_internals:*, reg dot_internals_isMissing:L, reg dot_internals_orDefault:*, var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg what1:*, reg what2:V, reg c:L, reg p:p(V +), reg r3:V, reg character:cls, reg r4:V, reg mode1:*, reg mode2:V, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg search:cls, reg r8:V, reg r9:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg ignore_case1:*, reg ignore_case2:V, reg c2:L, reg grep:cls, reg what3:*, reg what4:V, reg p1:p(V +), reg ls:cls, reg i7:*, reg i8:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V, reg i9:I, reg r15:V, reg ls1:cls, reg i10:*, reg i11:V, reg p4:p(V +), reg what5:*, reg what6:V, reg p5:p(V +), reg r18:V, reg grep1:cls, reg li:*, reg li1:V, reg p6:p(V +), reg r20:V, reg dot_internals1:*, reg dot_internals2:V, reg r21:V, reg c3:L, reg i13:I, reg c5:V, reg sp:*, reg sp1:V, reg c6:L, reg i15:I, reg c8:L, reg sp3:V, reg dr:V, reg dc:L, reg dx:V, reg i17:I, reg c10:L, reg dx1:V, reg i18:*, reg i19:V, reg __:cls, reg r22:V, reg r23:V, reg c11:L, reg c12:V, reg c14:L, reg li2:*, reg li3:V, reg c15:L, reg i24:I, reg li5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i26:I, reg dx3:V, reg _in_:cls, reg li6:*, reg li7:V, reg p7:p(V +), reg _dot_internals:*, reg _dot_internals1:V, reg p8:p(V +), reg r26:V, reg r27:V, reg __1:cls, reg r28:V, reg i27:I, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg i30:I, reg r30:V, reg li8:*, reg li9:V, reg length:cls, reg r31:V, reg c16:L, reg check_mode:*, reg check_mode1:V, reg c17:L, reg li10:*, reg li11:V, reg c18:L, reg i36:I, reg li13:V, reg dr4:V, reg dc2:L, reg dx5:V, reg i38:I, reg dx6:V, reg vapply:cls, reg li14:*, reg li15:V, reg p9:p(V +), reg exists:*, reg exists1:V, reg p10:p(V +), reg i39:*, reg i40:V, reg p11:p(V +), reg mode3:*, reg mode4:V, reg p12:p(V +), reg r36:V, reg __2:cls, reg r37:V, reg i41:I, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg i44:I, reg r39:V, reg x1:*, reg x2:V, reg where1:*, reg where2:V, reg c19:L, reg structure:cls, reg li16:*, reg li17:V, reg p13:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg i47:*, reg i48:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg li18:*, reg li19:V, reg length1:cls, reg r45:V, reg rep_int:cls, reg r46:V, reg p14:p(V +), reg r48:V, reg i49:I, reg r49:V, reg li20:*, reg li21:V, reg c20:cls, reg r50:V, reg i50:I, reg sort:cls, reg x3:*, reg x4:V, reg p15:p(V +), reg r53:V |
    mkenv;
    st what = what;
    where_isMissing = missing.0(where);
    if where_isMissing then L0(FALSE) else L0(where);
  L0(where_orDefault):
    st where = where_orDefault;
    ignore_case_isMissing = missing.0(ignore_case);
    if ignore_case_isMissing then L1(TRUE) else L1(ignore_case);
  L1(ignore_case_orDefault):
    st `ignore.case` = ignore_case_orDefault;
    dot_internals_isMissing = missing.0(dot_internals);
    if dot_internals_isMissing then L2(FALSE) else L2(dot_internals);
  L2(dot_internals_orDefault):
    st dot_internals = dot_internals_orDefault;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L3("any") else L3(mode);
  L3(mode_orDefault):
    st mode = mode_orDefault;
    stopifnot = ldf stopifnot;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p = prom<V +>{
      sym = ldf `is.character`;
      base = ldf `is.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      c = `is.character`(what2);
      goto L0(c);
    L2():
      r = dyn base(<sym what>);
      goto L0(r);
    };
    r3 = dyn stopifnot(p);
    check L24() else D1();
  D1():
    deopt 3 [r3];
  L24():
    character = ldf character;
    check L25() else D2();
  D2():
    deopt 5 [];
  L25():
    r4 = dyn character(0);
    check L26() else D3();
  D3():
    deopt 7 [r4];
  L26():
    st x = r4;
    mode1 = ld mode;
    check L27() else D4();
  D4():
    deopt 9 [mode1];
  L27():
    mode2 = force? mode1;
    checkMissing(mode2);
    r5 = `!=`(mode2, "any");
    st `check.mode` = r5;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L4(r7):
    s = toForSeq(r7);
    l = length(s);
    i = 0;
    goto L5(i);
  L28():
    search = ldf search;
    check L30() else D5();
  L29():
    r6 = dyn base1(<lang `<-`(sp, search())>);
    goto L4(r6);
  D5():
    deopt 16 [];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L32() else L22();
  L30():
    r8 = dyn search();
    check L31() else D6();
  D6():
    deopt 17 [r8];
  L22():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    ignore_case1 = ld `ignore.case`;
    check L33() else D7();
  L31():
    st sp = r8;
    r9 = seq_along(r8);
    goto L4(r9);
  L32():
    sort = ldf sort;
    check L83() else D32();
  D7():
    deopt 20 [i2, ignore_case1];
  D32():
    deopt 123 [];
  L33():
    ignore_case2 = force? ignore_case1;
    checkMissing(ignore_case2);
    c2 = `as.logical`(ignore_case2);
    if c2 then L34() else L6();
  L83():
    p15 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r53 = dyn sort(p15);
    check L84() else D33();
  D33():
    deopt 125 [r53];
  L6():
    ls1 = ldf ls;
    check L38() else D10();
  L7(i9, r15):
    st li = r15;
    grep1 = ldf grep;
    check L40() else D12();
  L34():
    grep = ldf grep;
    check L35() else D8();
  L84():
    popenv;
    return r53;
  D8():
    deopt 23 [i2];
  D10():
    deopt 32 [i2];
  D12():
    deopt 42 [i9];
  L35():
    p1 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    p3 = prom<V +>{
      ls = ldf ls;
      p2 = prom<V +>{
        i7 = ld i;
        i8 = force? i7;
        checkMissing(i8);
        return i8;
      };
      r12 = dyn ls[pos, `all.names`](p2, TRUE);
      return r12;
    };
    r14 = dyn grep[, , `ignore.case`, value](p1, p3, TRUE, TRUE);
    check L36() else D9();
  L38():
    p4 = prom<V +>{
      i10 = ld i;
      i11 = force? i10;
      checkMissing(i11);
      return i11;
    };
    p5 = prom<V +>{
      what5 = ld what;
      what6 = force? what5;
      checkMissing(what6);
      return what6;
    };
    r18 = dyn ls1[pos, pattern, `all.names`](p4, p5, TRUE);
    check L39() else D11();
  L40():
    p6 = prom<V +>{
      li = ld li;
      li1 = force? li;
      checkMissing(li1);
      return li1;
    };
    r20 = dyn grep1[, , invert, value]("^[.](__|C_|F_)", p6, TRUE, TRUE);
    check L41() else D13();
  D9():
    deopt 30 [i2, r14];
  D11():
    deopt 39 [i2, r18];
  D13():
    deopt 49 [i9, r20];
  L36():
    goto L7(i2, r14);
  L39():
    goto L7(i2, r18);
  L41():
    st li = r20;
    dot_internals1 = ld dot_internals;
    check L42() else D14();
  D14():
    deopt 51 [i9, dot_internals1];
  L42():
    dot_internals2 = force? dot_internals1;
    checkMissing(dot_internals2);
    r21 = `!`(dot_internals2);
    c3 = `as.logical`(r21);
    if c3 then L43() else L8(i9, c3);
  L8(i13, c5):
    c14 = `as.logical`(c5);
    if c14 then L50() else L10();
  L43():
    sp = ld sp;
    check L44() else D15();
  D15():
    deopt 54 [i9, c3, sp];
  L10():
    goto L12(i13);
  L12(i27):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L58() else L59();
  L44():
    sp1 = force? sp;
    checkMissing(sp1);
    c6 = `is.object`(sp1);
    if c6 then L45() else L46(i9, c3, sp1);
  L50():
    li2 = ld li;
    check L51() else D17();
  D17():
    deopt 62 [i13, li2];
  L9(i17, c10, dx1):
    r23 = `==`(dx1, "package:base");
    c11 = `as.logical`(r23);
    c12 = `&&`(c10, c11);
    goto L8(i17, c12);
  L13(i30, r30):
    c16 = `as.logical`(r30);
    if c16 then L62() else L14();
  L45():
    dr = tryDispatchBuiltin.1("[", sp1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L47() else L46(i9, c3, dr);
  L46(i15, c8, sp3):
    i18 = ld i;
    check L48() else D16();
  L51():
    li3 = force? li2;
    checkMissing(li3);
    c15 = `is.object`(li3);
    if c15 then L52() else L53(i13, li3);
  L58():
    li8 = ld li;
    check L60() else D20();
  L59():
    r29 = dyn base2(<sym li>);
    goto L13(i27, r29);
  D16():
    deopt 56 [i15, c8, sp3, i18];
  D20():
    deopt 76 [i27, li8];
  L11(i26, dx3):
    st li = dx3;
    goto L12(i26);
  L14():
    goto L21(i30);
  L21(i50):
    goto L5(i50);
  L47():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(i9, c3, dx);
  L48():
    i19 = force? i18;
    __ = ldf `[` in base;
    r22 = dyn __(sp3, i19);
    goto L9(i15, c8, r22);
  L52():
    dr2 = tryDispatchBuiltin.1("[", li3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L54() else L53(i13, dr2);
  L53(i24, li5):
    _in_ = ldf `%in%`;
    check L55() else D18();
  L60():
    li9 = force? li8;
    checkMissing(li9);
    length = ldf length in base;
    r31 = dyn length(li9);
    check L61() else D21();
  L62():
    check_mode = ld `check.mode`;
    check L63() else D22();
  D18():
    deopt 65 [i24, li5];
  D21():
    deopt 79 [i27, r31];
  D22():
    deopt 80 [i30, check_mode];
  L54():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(i13, dx2);
  L55():
    p7 = prom<V +>{
      li6 = ld li;
      li7 = force? li6;
      checkMissing(li7);
      return li7;
    };
    p8 = prom<V +>{
      _dot_internals = ld `.dot_internals`;
      _dot_internals1 = force? _dot_internals;
      checkMissing(_dot_internals1);
      return _dot_internals1;
    };
    r26 = dyn _in_(p7, p8);
    check L56() else D19();
  L61():
    goto L13(i27, r31);
  L63():
    check_mode1 = force? check_mode;
    checkMissing(check_mode1);
    c17 = `as.logical`(check_mode1);
    if c17 then L64() else L15();
  D19():
    deopt 68 [i24, li5, r26];
  L15():
    goto L17(i30);
  L17(i41):
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L72() else L73();
  L56():
    r27 = `!`(r26);
    __1 = ldf `[` in base;
    r28 = dyn __1(li5, r27);
    goto L11(i24, r28);
  L64():
    li10 = ld li;
    check L65() else D23();
  D23():
    deopt 82 [i30, li10];
  L18(i44, r39):
    st x = r39;
    goto L21(i44);
  L65():
    li11 = force? li10;
    checkMissing(li11);
    c18 = `is.object`(li11);
    if c18 then L66() else L67(i30, li11);
  L72():
    x1 = ld x;
    check L74() else D26();
  L73():
    r38 = dyn base3(<sym x>, <lang if(where, structure(li, names=rep.int(i, length(li))), li)>);
    goto L18(i41, r38);
  D26():
    deopt 102 [i41, x1];
  L16(i38, dx6):
    st li = dx6;
    goto L17(i38);
  L66():
    dr4 = tryDispatchBuiltin.1("[", li11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L68() else L67(i30, dr4);
  L67(i36, li13):
    vapply = ldf vapply;
    check L69() else D24();
  L74():
    x2 = force? x1;
    checkMissing(x2);
    where1 = ld where;
    check L75() else D27();
  D24():
    deopt 85 [i36, li13];
  D27():
    deopt 104 [i41, where1];
  L68():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L16(i30, dx5);
  L69():
    p9 = prom<V +>{
      li14 = ld li;
      li15 = force? li14;
      checkMissing(li15);
      return li15;
    };
    p10 = prom<V +>{
      exists = ld exists;
      exists1 = force? exists;
      checkMissing(exists1);
      return exists1;
    };
    p11 = prom<V +>{
      i39 = ld i;
      i40 = force? i39;
      checkMissing(i40);
      return i40;
    };
    p12 = prom<V +>{
      mode3 = ld mode;
      mode4 = force? mode3;
      checkMissing(mode4);
      return mode4;
    };
    r36 = dyn vapply[, , , where, mode, inherits](p9, p10, NA_LGL, p11, p12, FALSE);
    check L70() else D25();
  L75():
    where2 = force? where1;
    checkMissing(where2);
    c19 = `as.logical`(where2);
    if c19 then L76() else L19();
  D25():
    deopt 95 [i36, li13, r36];
  L19():
    li20 = ld li;
    check L80() else D30();
  L20(i49, r49):
    c20 = ldf c in base;
    r50 = dyn c20(x2, r49);
    check L81() else D31();
  L70():
    __2 = ldf `[` in base;
    r37 = dyn __2(li13, r36);
    goto L16(i36, r37);
  L76():
    structure = ldf structure;
    check L77() else D28();
  D28():
    deopt 107 [i41];
  D30():
    deopt 112 [i41, li20];
  D31():
    deopt 115 [i49, r50];
  L77():
    p13 = prom<V +>{
      li16 = ld li;
      li17 = force? li16;
      checkMissing(li17);
      return li17;
    };
    p14 = prom<V +>{
      sym4 = ldf `rep.int`;
      base4 = ldf `rep.int` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r42):
      return r42;
    L2():
      i47 = ld i;
      i48 = force? i47;
      checkMissing(i48);
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r41 = dyn base4(<sym i>, <lang length(li)>);
      goto L0(r41);
    L1(r44):
      rep_int = ldf `rep.int` in base;
      r46 = dyn rep_int(i48, r44);
      goto L0(r46);
    L4():
      li18 = ld li;
      li19 = force? li18;
      checkMissing(li19);
      length1 = ldf length in base;
      r45 = dyn length1(li19);
      goto L1(r45);
    L5():
      r43 = dyn base5(<sym li>);
      goto L1(r43);
    };
    r48 = dyn structure[, names](p13, p14);
    check L78() else D29();
  L80():
    li21 = force? li20;
    checkMissing(li21);
    goto L20(i41, li21);
  L81():
    goto L18(i49, r50);
  D29():
    deopt 111 [i41, r48];
  L78():
    goto L20(i41, r48);
  }
}