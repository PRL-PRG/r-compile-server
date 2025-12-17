fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.checkRdContents` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg r1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg character:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg which:cls, reg vapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg __:*, reg __1:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg r11:V, reg length:cls, reg r12:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg gettext:cls, reg r15:V, reg _pretty_format:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg res:*, reg res1:V, reg names:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg c1:cls, reg r21:V, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg unlist:cls, reg lapply:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg x3:*, reg x4:V, reg names1:cls, reg r27:V, reg p4:p(V +), reg _fmt:*, reg _fmt1:V, reg p5:p(V +), reg r30:V, reg p6:p(V +), reg r32:V, reg as_character:cls, reg r33:V, reg c2:cls, reg r34:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner315439134;
    st glimpse = r;
    r1 = clos inner3369547807;
    st `.fmt` = r1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r3):
    popenv;
    return r3;
  L6():
    character = ldf character;
    check L8() else D0();
  L7():
    r2 = dyn base(<lang character()>, <lang if(length(`<-`(res, which(vapply(x, `[[`, TRUE, "missing_description")))), c(gettext("Rd files without \\description:"), .pretty_format(names(res))))>, <lang as.character(unlist(lapply(names(x), .fmt)))>);
    goto L0(r2);
  D0():
    deopt 9 [];
  L8():
    r4 = dyn character();
    check L9() else D1();
  D1():
    deopt 10 [r4];
  L9():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L1(r6):
    c = `as.logical`(r6);
    if c then L15() else L2();
  L10():
    which = ldf which;
    check L12() else D2();
  L11():
    r5 = dyn base1(<lang `<-`(res, which(vapply(x, `[[`, TRUE, "missing_description")))>);
    goto L1(r5);
  D2():
    deopt 14 [];
  L2():
    goto L4(NULL);
  L4(r22):
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L24() else L25();
  L12():
    p2 = prom<V +>{
      vapply = ldf vapply;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        __ = ld `[[`;
        __1 = force? __;
        checkMissing(__1);
        return __1;
      };
      r9 = dyn vapply(p, p1, TRUE, "missing_description");
      return r9;
    };
    r11 = dyn which(p2);
    check L13() else D3();
  L15():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  D3():
    deopt 16 [r11];
  L3(r14):
    goto L4(r14);
  L5(r24):
    c2 = ldf c in base;
    r34 = dyn c2(r4, r22, r24);
    check L29() else D13();
  L13():
    st res = r11;
    length = ldf length in base;
    r12 = dyn length(r11);
    check L14() else D4();
  L16():
    gettext = ldf gettext;
    check L18() else D5();
  L17():
    r13 = dyn base2(<lang gettext("Rd files without \\description:")>, <lang .pretty_format(names(res))>);
    goto L3(r13);
  L24():
    unlist = ldf unlist;
    check L26() else D10();
  L25():
    r23 = dyn base4(<lang unlist(lapply(names(x), .fmt))>);
    goto L5(r23);
  D4():
    deopt 19 [r12];
  D5():
    deopt 23 [];
  D10():
    deopt 37 [];
  D13():
    deopt 43 [r34];
  L14():
    goto L1(r12);
  L18():
    r15 = dyn gettext("Rd files without \\description:");
    check L19() else D6();
  L26():
    p6 = prom<V +>{
      lapply = ldf lapply;
      p4 = prom<V +>{
        sym5 = ldf names;
        base5 = ldf names in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r26):
        return r26;
      L1():
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        names1 = ldf names in base;
        r27 = dyn names1(x4);
        goto L0(r27);
      L2():
        r25 = dyn base5(<sym x>);
        goto L0(r25);
      };
      p5 = prom<V +>{
        _fmt = ld `.fmt`;
        _fmt1 = force? _fmt;
        checkMissing(_fmt1);
        return _fmt1;
      };
      r30 = dyn lapply(p4, p5);
      return r30;
    };
    r32 = dyn unlist(p6);
    check L27() else D11();
  L29():
    goto L0(r34);
  D6():
    deopt 25 [r15];
  D11():
    deopt 39 [r32];
  L19():
    _pretty_format = ldf `.pretty_format`;
    check L20() else D7();
  L27():
    as_character = ldf `as.character` in base;
    r33 = dyn as_character(r32);
    check L28() else D12();
  D7():
    deopt 27 [];
  D12():
    deopt 41 [r33];
  L20():
    p3 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      names = ldf names in base;
      r18 = dyn names(res1);
      goto L0(r18);
    L2():
      r16 = dyn base3(<sym res>);
      goto L0(r16);
    };
    r20 = dyn _pretty_format(p3);
    check L21() else D8();
  L28():
    goto L5(r33);
  D8():
    deopt 29 [r20];
  L21():
    c1 = ldf c in base;
    r21 = dyn c1(r15, r20);
    check L22() else D9();
  D9():
    deopt 31 [r21];
  L22():
    goto L3(r21);
  }
}
fun inner315439134(x, tail) {
  (reg x:*, reg tail:*) -+> V { var x:*, var tail:*, reg tail_isMissing:L, reg tail_orDefault:*, reg lines2str:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg nchar:cls, reg r4:V, reg r5:V, reg c:L, reg tail1:*, reg tail2:V, reg c1:L, reg paste0:cls, reg substr:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg nc:*, reg nc1:V, reg r7:V, reg p2:p(V +), reg nc2:*, reg nc3:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg paste1:cls, reg substr1:cls, reg x7:*, reg x8:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V, reg x9:*, reg x10:V |
    mkenv;
    st x = x;
    tail_isMissing = missing.0(tail);
    if tail_isMissing then L0(FALSE) else L0(tail);
  L0(tail_orDefault):
    st tail = tail_orDefault;
    lines2str = ldf lines2str;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn lines2str(p, " ");
    check L5() else D1();
  D1():
    deopt 4 [r1];
  L5():
    st x = r1;
    sym = ldf nchar;
    base = ldf nchar in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(r3):
    st nc = r3;
    r5 = `>`(r3, 63);
    c = `as.logical`(r5);
    if c then L10() else L2();
  L6():
    x3 = ld x;
    check L8() else D2();
  L7():
    r2 = dyn base(<sym x>);
    goto L1(r2);
  D2():
    deopt 8 [x3];
  L2():
    x9 = ld x;
    check L19() else D9();
  L8():
    x4 = force? x3;
    checkMissing(x4);
    nchar = ldf nchar in base;
    r4 = dyn nchar(x4, "chars", FALSE, NA_LGL);
    check L9() else D3();
  L10():
    tail1 = ld tail;
    check L11() else D4();
  D3():
    deopt 14 [r4];
  D4():
    deopt 18 [tail1];
  D9():
    deopt 30 [x9];
  L9():
    goto L1(r4);
  L11():
    tail2 = force? tail1;
    checkMissing(tail2);
    c1 = `as.logical`(tail2);
    if c1 then L12() else L3();
  L19():
    x10 = force? x9;
    checkMissing(x10);
    popenv;
    return x10;
  L3():
    paste1 = ldf paste0;
    check L16() else D7();
  L12():
    paste0 = ldf paste0;
    check L13() else D5();
  D5():
    deopt 21 [];
  D7():
    deopt 26 [];
  L13():
    p4 = prom<V +>{
      substr = ldf substr;
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      p2 = prom<V +>{
        nc = ld nc;
        nc1 = force? nc;
        checkMissing(nc1);
        r7 = `-`(nc1, 59);
        return r7;
      };
      p3 = prom<V +>{
        nc2 = ld nc;
        nc3 = force? nc2;
        checkMissing(nc3);
        return nc3;
      };
      r10 = dyn substr(p1, p2, p3);
      return r10;
    };
    r12 = dyn paste0("...", p4);
    check L14() else D6();
  L16():
    p6 = prom<V +>{
      substr1 = ldf substr;
      p5 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r14 = dyn substr1(p5, 0.0, 60);
      return r14;
    };
    r16 = dyn paste1(p6, "...");
    check L17() else D8();
  D6():
    deopt 24 [r12];
  D8():
    deopt 29 [r16];
  L14():
    popenv;
    return r12;
  L17():
    popenv;
    return r16;
  }
}
fun inner3369547807(nm) {
  (reg nm:*) -+> V { var nm:*, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nm1:*, reg nm2:V, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg character:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg y:*, reg y1:V, reg c1:L, reg y3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r6:V, reg length:cls, reg r7:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg gettextf:cls, reg nm3:*, reg nm4:V, reg p:p(V +), reg r11:V, reg _pretty_format:cls, reg arguments_with_no_description:*, reg arguments_with_no_description1:V, reg p1:p(V +), reg r13:V, reg c3:cls, reg r14:V, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg y4:*, reg y5:V, reg c4:L, reg y7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r18:V, reg length1:cls, reg r19:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg gettextf1:cls, reg nm5:*, reg nm6:V, reg p2:p(V +), reg r23:V, reg sprintf:cls, reg autocontents:*, reg autocontents1:V, reg c6:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r24:V, reg p3:p(V +), reg sQuote:cls, reg mapply:cls, reg glimpse:*, reg glimpse1:V, reg p4:p(V +), reg autocontents4:*, reg autocontents5:V, reg c7:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r27:V, reg p5:p(V +), reg autocontents8:*, reg autocontents9:V, reg c8:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r29:V, reg r30:V, reg p6:p(V +), reg r32:V, reg p7:p(V +), reg r34:V, reg p8:p(V +), reg r36:V, reg c9:cls, reg r37:V, reg r38:V, reg c10:cls, reg r39:V |
    mkenv;
    st nm = nm;
    x = ld x;
    check L12() else D0();
  D0():
    deopt 0 [x];
  L12():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L13() else L14(x1);
  L0(dx1):
    st y = dx1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L13():
    dr = tryDispatchBuiltin.1("[[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(x3):
    nm1 = ld nm;
    check L16() else D1();
  D1():
    deopt 2 [x3, nm1];
  L1(r2):
    popenv;
    return r2;
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L16():
    nm2 = force? nm1;
    __ = ldf `[[` in base;
    r = dyn __(x3, nm2);
    goto L0(r);
  L17():
    character = ldf character;
    check L19() else D2();
  L18():
    r1 = dyn base(<lang character()>, <lang if(length(`<-`(arguments_with_no_description, `[[`(y, "arguments_with_no_description"))), {
        c(gettextf("Argument items with no description in Rd file '%s':", nm), .pretty_format(arguments_with_no_description))
      })>, <lang if(length(`<-`(autocontents, `[[`(y, "offending_autogenerated_content"))), {
        c(gettextf("Auto-generated content requiring editing in Rd file '%s':", nm), sprintf("  %s: %s", `[`(autocontents, , 1), sQuote(mapply(glimpse, `[`(autocontents, , 2), `==`(`[`(autocontents, , 1), "\\details")))))
      })>);
    goto L1(r1);
  D2():
    deopt 9 [];
  L19():
    r3 = dyn character();
    check L20() else D3();
  D3():
    deopt 10 [r3];
  L20():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L2(r5):
    c2 = `as.logical`(r5);
    if c2 then L28() else L4();
  L21():
    y = ld y;
    check L23() else D4();
  L22():
    r4 = dyn base1(<lang `<-`(arguments_with_no_description, `[[`(y, "arguments_with_no_description"))>);
    goto L2(r4);
  D4():
    deopt 13 [y];
  L4():
    goto L6(NULL);
  L6(r15):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L23():
    y1 = force? y;
    checkMissing(y1);
    c1 = `is.object`(y1);
    if c1 then L24() else L25(y1);
  L28():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L3(dx3):
    st arguments_with_no_description = dx3;
    length = ldf length in base;
    r7 = dyn length(dx3);
    check L27() else D5();
  L5(r9):
    goto L6(r9);
  L7(r17):
    c5 = `as.logical`(r17);
    if c5 then L44() else L9();
  L24():
    dr2 = tryDispatchBuiltin.1("[[", y1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(y3):
    __1 = ldf `[[` in base;
    r6 = dyn __1(y3, "arguments_with_no_description");
    goto L3(r6);
  L29():
    gettextf = ldf gettextf;
    check L31() else D6();
  L30():
    r8 = dyn base2(<lang gettextf("Argument items with no description in Rd file '%s':", nm)>, <lang .pretty_format(arguments_with_no_description)>);
    goto L5(r8);
  L37():
    y4 = ld y;
    check L39() else D11();
  L38():
    r16 = dyn base3(<lang `<-`(autocontents, `[[`(y, "offending_autogenerated_content"))>);
    goto L7(r16);
  D5():
    deopt 20 [r7];
  D6():
    deopt 24 [];
  D11():
    deopt 38 [y4];
  L9():
    goto L11(NULL);
  L11(r38):
    c10 = ldf c in base;
    r39 = dyn c10(r3, r15, r38);
    check L53() else D18();
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L27():
    goto L2(r7);
  L31():
    p = prom<V +>{
      nm3 = ld nm;
      nm4 = force? nm3;
      checkMissing(nm4);
      return nm4;
    };
    r11 = dyn gettextf("Argument items with no description in Rd file '%s':", p);
    check L32() else D7();
  L39():
    y5 = force? y4;
    checkMissing(y5);
    c4 = `is.object`(y5);
    if c4 then L40() else L41(y5);
  L44():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  D7():
    deopt 27 [r11];
  D18():
    deopt 64 [r39];
  L8(dx5):
    st autocontents = dx5;
    length1 = ldf length in base;
    r19 = dyn length1(dx5);
    check L43() else D12();
  L10(r21):
    goto L11(r21);
  L32():
    _pretty_format = ldf `.pretty_format`;
    check L33() else D8();
  L40():
    dr4 = tryDispatchBuiltin.1("[[", y5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L42() else L41(dr4);
  L41(y7):
    __2 = ldf `[[` in base;
    r18 = dyn __2(y7, "offending_autogenerated_content");
    goto L8(r18);
  L45():
    gettextf1 = ldf gettextf;
    check L47() else D13();
  L46():
    r20 = dyn base4(<lang gettextf("Auto-generated content requiring editing in Rd file '%s':", nm)>, <lang sprintf("  %s: %s", `[`(autocontents, , 1), sQuote(mapply(glimpse, `[`(autocontents, , 2), `==`(`[`(autocontents, , 1), "\\details"))))>);
    goto L10(r20);
  L53():
    goto L1(r39);
  D8():
    deopt 29 [];
  D12():
    deopt 45 [r19];
  D13():
    deopt 49 [];
  L33():
    p1 = prom<V +>{
      arguments_with_no_description = ld arguments_with_no_description;
      arguments_with_no_description1 = force? arguments_with_no_description;
      checkMissing(arguments_with_no_description1);
      return arguments_with_no_description1;
    };
    r13 = dyn _pretty_format(p1);
    check L34() else D9();
  L42():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx4);
  L43():
    goto L7(r19);
  L47():
    p2 = prom<V +>{
      nm5 = ld nm;
      nm6 = force? nm5;
      checkMissing(nm6);
      return nm6;
    };
    r23 = dyn gettextf1("Auto-generated content requiring editing in Rd file '%s':", p2);
    check L48() else D14();
  D9():
    deopt 31 [r13];
  D14():
    deopt 52 [r23];
  L34():
    c3 = ldf c in base;
    r14 = dyn c3(r11, r13);
    check L35() else D10();
  L48():
    sprintf = ldf sprintf;
    check L49() else D15();
  D10():
    deopt 33 [r14];
  D15():
    deopt 54 [];
  L35():
    goto L5(r14);
  L49():
    p3 = prom<V +>{
      autocontents = ld autocontents;
      autocontents1 = force? autocontents;
      checkMissing(autocontents1);
      c6 = `is.object`(autocontents1);
      if c6 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", autocontents1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r24 = dyn __3(autocontents1, <missing>, 1);
      goto L0(r24);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p8 = prom<V +>{
      sQuote = ldf sQuote;
      p7 = prom<V +>{
        mapply = ldf mapply;
        p4 = prom<V +>{
          glimpse = ld glimpse;
          glimpse1 = force? glimpse;
          checkMissing(glimpse1);
          return glimpse1;
        };
        p5 = prom<V +>{
          autocontents4 = ld autocontents;
          autocontents5 = force? autocontents4;
          checkMissing(autocontents5);
          c7 = `is.object`(autocontents5);
          if c7 then L1() else L2();
        L0(dx9):
          return dx9;
        L1():
          dr8 = tryDispatchBuiltin.1("[", autocontents5);
          dc4 = getTryDispatchBuiltinDispatched(dr8);
          if dc4 then L3() else L2();
        L2():
          __4 = ldf `[` in base;
          r27 = dyn __4(autocontents5, <missing>, 2);
          goto L0(r27);
        L3():
          dx8 = getTryDispatchBuiltinValue(dr8);
          goto L0(dx8);
        };
        p6 = prom<V +>{
          autocontents8 = ld autocontents;
          autocontents9 = force? autocontents8;
          checkMissing(autocontents9);
          c8 = `is.object`(autocontents9);
          if c8 then L1() else L2();
        L0(dx11):
          r30 = `==`(dx11, "\\details");
          return r30;
        L1():
          dr10 = tryDispatchBuiltin.1("[", autocontents9);
          dc5 = getTryDispatchBuiltinDispatched(dr10);
          if dc5 then L3() else L2();
        L2():
          __5 = ldf `[` in base;
          r29 = dyn __5(autocontents9, <missing>, 1);
          goto L0(r29);
        L3():
          dx10 = getTryDispatchBuiltinValue(dr10);
          goto L0(dx10);
        };
        r32 = dyn mapply(p4, p5, p6);
        return r32;
      };
      r34 = dyn sQuote(p7);
      return r34;
    };
    r36 = dyn sprintf("  %s: %s", p3, p8);
    check L50() else D16();
  D16():
    deopt 58 [r36];
  L50():
    c9 = ldf c in base;
    r37 = dyn c9(r23, r36);
    check L51() else D17();
  D17():
    deopt 60 [r37];
  L51():
    goto L10(r37);
  }
}