fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `format.packageInfo` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg gettextf:cls, reg sQuote:cls, reg file_path:cls, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p:p(V +), reg r8:V, reg p1:p(V +), reg r10:V, reg p2:p(V +), reg r12:V, reg sprintf:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg gettext:cls, reg r15:V, reg gettext1:cls, reg r16:V, reg paste:cls, reg strwrap:cls, reg vignetteMsg:*, reg vignetteMsg1:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg r20:V, reg c2:cls, reg r21:V, reg p5:p(V +), reg r23:V, reg r24:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg gettextf1:cls, reg sQuote1:cls, reg x7:*, reg x8:V, reg c3:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r27:V, reg p6:p(V +), reg r29:V, reg p7:p(V +), reg r31:V, reg unlist:cls, reg lapply:cls, reg which:cls, reg vapply:cls, reg x11:*, reg x12:V, reg c4:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r32:V, reg p8:p(V +), reg is_null:*, reg is_null1:V, reg p9:p(V +), reg r35:V, reg r36:V, reg p10:p(V +), reg r38:V, reg p11:p(V +), reg r40:cls, reg p12:p(V +), reg r42:V, reg p13:p(V +), reg r44:V, reg c5:cls, reg r45:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>, "packageInfo");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    goto L2();
  L2():
    gettextf = ldf gettextf;
    check L12() else D4();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "packageInfo", FALSE);
    check L7() else D1();
  L8():
    stop = ldf stop;
    check L9() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 10 [];
  D4():
    deopt 16 [];
  L7():
    goto L0(r2);
  L9():
    r4 = dyn stop("wrong class");
    check L10() else D3();
  L12():
    p2 = prom<V +>{
      sQuote = ldf sQuote;
      p1 = prom<V +>{
        file_path = ldf `file.path`;
        p = prom<V +>{
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          c1 = `is.object`(x4);
          if c1 then L1() else L2(x4);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("$", x4);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(x6):
          r6 = `$`(x6, <sym path>);
          goto L0(r6);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r8 = dyn file_path(p, "doc");
        return r8;
      };
      r10 = dyn sQuote(p1);
      return r10;
    };
    r12 = dyn gettextf("Further information is available in the following vignettes in directory %s:", p2);
    check L13() else D5();
  D3():
    deopt 12 [r4];
  D5():
    deopt 19 [r12];
  L10():
    goto L2();
  L13():
    st vignetteMsg = r12;
    sprintf = ldf sprintf;
    check L14() else D6();
  D6():
    deopt 22 [];
  L14():
    p5 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      gettext = ldf gettext;
      r15 = dyn gettext("Description:");
      gettext1 = ldf gettext;
      r16 = dyn gettext1("Index:");
      paste = ldf paste;
      p4 = prom<V +>{
        strwrap = ldf strwrap;
        p3 = prom<V +>{
          vignetteMsg = ld vignetteMsg;
          vignetteMsg1 = force? vignetteMsg;
          checkMissing(vignetteMsg1);
          return vignetteMsg1;
        };
        r18 = dyn strwrap(p3);
        return r18;
      };
      r20 = dyn paste[, collapse](p4, "\n");
      c2 = ldf c in base;
      r21 = dyn c2(r15, r16, r20);
      goto L0(r21);
    L2():
      r13 = dyn base1(<lang gettext("Description:")>, <lang gettext("Index:")>, <lang paste(strwrap(vignetteMsg), collapse="\n")>);
      goto L0(r13);
    };
    r23 = dyn sprintf("\n%s\n", p5);
    check L15() else D7();
  D7():
    deopt 25 [r23];
  L15():
    st headers = r23;
    r24 = clos inner1387502191;
    st formatDocEntry = r24;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L3(r26):
    popenv;
    return r26;
  L16():
    gettextf1 = ldf gettextf;
    check L18() else D8();
  L17():
    r25 = dyn base2(<lang gettextf("\n\t\tInformation on package %s", sQuote(`$`(x, name)))>, <lang unlist(lapply(which(`!`(vapply(`$`(x, info), is.null, NA_LGL))), function((i=), c(`[`(headers, i), formatDocEntry(`[[`(`$`(x, info), i))), NULL)))>);
    goto L3(r25);
  D8():
    deopt 33 [];
  L18():
    p7 = prom<V +>{
      sQuote1 = ldf sQuote;
      p6 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        c3 = `is.object`(x8);
        if c3 then L1() else L2(x8);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", x8);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x10):
        r27 = `$`(x10, <sym name>);
        goto L0(r27);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r29 = dyn sQuote1(p6);
      return r29;
    };
    r31 = dyn gettextf1("\n\t\tInformation on package %s", p7);
    check L19() else D9();
  D9():
    deopt 36 [r31];
  L19():
    unlist = ldf unlist;
    check L20() else D10();
  D10():
    deopt 38 [];
  L20():
    p13 = prom<V +>{
      lapply = ldf lapply;
      p11 = prom<V +>{
        which = ldf which;
        p10 = prom<V +>{
          vapply = ldf vapply;
          p8 = prom<V +>{
            x11 = ld x;
            x12 = force? x11;
            checkMissing(x12);
            c4 = `is.object`(x12);
            if c4 then L1() else L2(x12);
          L0(dx5):
            return dx5;
          L1():
            dr4 = tryDispatchBuiltin.1("$", x12);
            dc2 = getTryDispatchBuiltinDispatched(dr4);
            if dc2 then L3() else L2(dr4);
          L2(x14):
            r32 = `$`(x14, <sym info>);
            goto L0(r32);
          L3():
            dx4 = getTryDispatchBuiltinValue(dr4);
            goto L0(dx4);
          };
          p9 = prom<V +>{
            is_null = ld `is.null`;
            is_null1 = force? is_null;
            checkMissing(is_null1);
            return is_null1;
          };
          r35 = dyn vapply(p8, p9, NA_LGL);
          r36 = `!`(r35);
          return r36;
        };
        r38 = dyn which(p10);
        return r38;
      };
      p12 = prom<V +>{
        r40 = clos inner854741286;
        return r40;
      };
      r42 = dyn lapply(p11, p12);
      return r42;
    };
    r44 = dyn unlist(p13);
    check L21() else D11();
  D11():
    deopt 40 [r44];
  L21():
    c5 = ldf c in base;
    r45 = dyn c5(r31, r44);
    check L22() else D12();
  D12():
    deopt 42 [r45];
  L22():
    goto L3(r45);
  }
}
fun inner1387502191(entry) {
  (reg entry:*) -+> V { var entry:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg entry1:*, reg entry2:V, reg is_list:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg entry3:*, reg entry4:V, reg is_matrix:cls, reg r5:V, reg c6:L, reg c7:V, reg c9:L, reg formatDL:cls, reg entry5:*, reg entry6:V, reg p:p(V +), reg r7:V, reg entry7:*, reg entry8:V |
    mkenv;
    st entry = entry;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L8();
  L4():
    entry1 = ld entry;
    check L6() else D0();
  L5():
    r = dyn base(<sym entry>);
    goto L0(r);
  D0():
    deopt 2 [entry1];
  L1(c1):
    c9 = `as.logical`(c1);
    if c9 then L14() else L3();
  L6():
    entry2 = force? entry1;
    checkMissing(entry2);
    is_list = ldf `is.list` in base;
    r2 = dyn is_list(entry2);
    check L7() else D1();
  L8():
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c6 = `as.logical`(r4);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L3():
    entry7 = ld entry;
    check L18() else D6();
  L7():
    goto L0(r2);
  L9():
    entry3 = ld entry;
    check L11() else D2();
  L10():
    r3 = dyn base1(<sym entry>);
    goto L2(c, r3);
  L14():
    formatDL = ldf formatDL;
    check L15() else D4();
  D2():
    deopt 8 [c, entry3];
  D4():
    deopt 14 [];
  D6():
    deopt 19 [entry7];
  L11():
    entry4 = force? entry3;
    checkMissing(entry4);
    is_matrix = ldf `is.matrix` in base;
    r5 = dyn is_matrix(entry4);
    check L12() else D3();
  L15():
    p = prom<V +>{
      entry5 = ld entry;
      entry6 = force? entry5;
      checkMissing(entry6);
      return entry6;
    };
    r7 = dyn formatDL[, style](p, "list");
    check L16() else D5();
  L18():
    entry8 = force? entry7;
    checkMissing(entry8);
    popenv;
    return entry8;
  D3():
    deopt 11 [c, r5];
  D5():
    deopt 18 [r7];
  L12():
    goto L2(c, r5);
  L16():
    popenv;
    return r7;
  }
}
fun inner854741286(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg headers:*, reg headers1:V, reg c:L, reg headers3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r2:V, reg formatDocEntry:cls, reg x:*, reg x1:V, reg c1:L, reg x3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r3:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg i3:*, reg i4:V, reg __1:cls, reg r4:V, reg p:p(V +), reg r6:V, reg c3:cls, reg r7:V |
    mkenv;
    st i = i;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    headers = ld headers;
    check L4() else D0();
  L3():
    r = dyn base(<lang `[`(headers, i)>, <lang formatDocEntry(`[[`(`$`(x, info), i))>);
    goto L0(r);
  D0():
    deopt 2 [headers];
  L4():
    headers1 = force? headers;
    checkMissing(headers1);
    c = `is.object`(headers1);
    if c then L5() else L6(headers1);
  L1(dx1):
    formatDocEntry = ldf formatDocEntry;
    check L9() else D2();
  L5():
    dr = tryDispatchBuiltin.1("[", headers1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(headers3):
    i1 = ld i;
    check L8() else D1();
  D1():
    deopt 4 [headers3, i1];
  D2():
    deopt 8 [];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L8():
    i2 = force? i1;
    __ = ldf `[` in base;
    r2 = dyn __(headers3, i2);
    goto L1(r2);
  L9():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      c1 = `is.object`(x1);
      if c1 then L2() else L3(x1);
    L1(dx3):
      c2 = `is.object`(dx3);
      if c2 then L5() else L6(dx3);
    L2():
      dr2 = tryDispatchBuiltin.1("$", x1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(x3):
      r3 = `$`(x3, <sym info>);
      goto L1(r3);
    L0(dx7):
      return dx7;
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    L5():
      dr4 = tryDispatchBuiltin.1("[[", dx3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(dx5):
      i3 = ld i;
      i4 = force? i3;
      __1 = ldf `[[` in base;
      r4 = dyn __1(dx5, i4);
      goto L0(r4);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx6);
    };
    r6 = dyn formatDocEntry(p);
    check L10() else D3();
  D3():
    deopt 10 [r6];
  L10():
    c3 = ldf c in base;
    r7 = dyn c3(dx1, r6);
    check L11() else D4();
  D4():
    deopt 12 [r7];
  L11():
    goto L0(r7);
  }
}