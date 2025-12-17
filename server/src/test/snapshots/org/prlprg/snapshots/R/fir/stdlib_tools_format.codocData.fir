fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.codocData` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg r1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg unlist:cls, reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg names:cls, reg r6:V, reg p:p(V +), reg _fmt:*, reg _fmt1:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg r11:V, reg as_character:cls, reg r12:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner1236783023;
    st format_args = r;
    r1 = clos inner3369547807;
    st `.fmt` = r1;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r3):
    popenv;
    return r3;
  L1():
    unlist = ldf unlist;
    check L3() else D0();
  L2():
    r2 = dyn base(<lang unlist(lapply(names(x), .fmt))>);
    goto L0(r2);
  D0():
    deopt 9 [];
  L3():
    p2 = prom<V +>{
      lapply = ldf lapply;
      p = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r5):
        return r5;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        names = ldf names in base;
        r6 = dyn names(x2);
        goto L0(r6);
      L2():
        r4 = dyn base1(<sym x>);
        goto L0(r4);
      };
      p1 = prom<V +>{
        _fmt = ld `.fmt`;
        _fmt1 = force? _fmt;
        checkMissing(_fmt1);
        return _fmt1;
      };
      r9 = dyn lapply(p, p1);
      return r9;
    };
    r11 = dyn unlist(p2);
    check L4() else D1();
  D1():
    deopt 11 [r11];
  L4():
    as_character = ldf `as.character` in base;
    r12 = dyn as_character(r11);
    check L5() else D2();
  D2():
    deopt 13 [r12];
  L5():
    goto L0(r12);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg paste:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st s = s;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r1 = dyn paste[, collapse](p, " ");
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner3369547807(nm) {
  (reg nm:*) -+> V { var nm:*, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nm1:*, reg nm2:V, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg gettextf:cls, reg nm3:*, reg nm4:V, reg p:p(V +), reg r4:V, reg gettextf1:cls, reg docObj:*, reg docObj1:V, reg c1:L, reg docObj3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg strwrap:cls, reg gettextf2:cls, reg format_args:cls, reg docObj4:*, reg docObj5:V, reg c2:L, reg docObj7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg strwrap1:cls, reg gettextf3:cls, reg format_args1:cls, reg docObj8:*, reg docObj9:V, reg c3:L, reg docObj11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r15:V, reg p5:p(V +), reg r17:V, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg r21:V, reg c4:cls, reg r22:V |
    mkenv;
    st nm = nm;
    x = ld x;
    check L2() else D0();
  D0():
    deopt 0 [x];
  L2():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L3() else L4(x1);
  L0(dx1):
    st docObj = dx1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L3():
    dr = tryDispatchBuiltin.1("[[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(x3):
    nm1 = ld nm;
    check L6() else D1();
  D1():
    deopt 2 [x3, nm1];
  L1(r2):
    popenv;
    return r2;
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    nm2 = force? nm1;
    __ = ldf `[[` in base;
    r = dyn __(x3, nm2);
    goto L0(r);
  L7():
    gettextf = ldf gettextf;
    check L9() else D2();
  L8():
    r1 = dyn base(<lang gettextf("Data codoc mismatches from Rd file '%s':", nm)>, <lang gettextf("Variables in data frame '%s'", `[[`(docObj, "name"))>, <lang strwrap(gettextf("Code: %s", format_args(`[[`(docObj, "code"))), indent=2, exdent=8)>, <lang strwrap(gettextf("Docs: %s", format_args(`[[`(docObj, "docs"))), indent=2, exdent=8)>, "");
    goto L1(r1);
  D2():
    deopt 9 [];
  L9():
    p = prom<V +>{
      nm3 = ld nm;
      nm4 = force? nm3;
      checkMissing(nm4);
      return nm4;
    };
    r4 = dyn gettextf("Data codoc mismatches from Rd file '%s':", p);
    check L10() else D3();
  D3():
    deopt 12 [r4];
  L10():
    gettextf1 = ldf gettextf;
    check L11() else D4();
  D4():
    deopt 14 [];
  L11():
    p1 = prom<V +>{
      docObj = ld docObj;
      docObj1 = force? docObj;
      checkMissing(docObj1);
      c1 = `is.object`(docObj1);
      if c1 then L1() else L2(docObj1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", docObj1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(docObj3):
      __1 = ldf `[[` in base;
      r5 = dyn __1(docObj3, "name");
      goto L0(r5);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r7 = dyn gettextf1("Variables in data frame '%s'", p1);
    check L12() else D5();
  D5():
    deopt 17 [r7];
  L12():
    strwrap = ldf strwrap;
    check L13() else D6();
  D6():
    deopt 19 [];
  L13():
    p4 = prom<V +>{
      gettextf2 = ldf gettextf;
      p3 = prom<V +>{
        format_args = ldf format_args;
        p2 = prom<V +>{
          docObj4 = ld docObj;
          docObj5 = force? docObj4;
          checkMissing(docObj5);
          c2 = `is.object`(docObj5);
          if c2 then L1() else L2(docObj5);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[[", docObj5);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(docObj7):
          __2 = ldf `[[` in base;
          r8 = dyn __2(docObj7, "code");
          goto L0(r8);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r10 = dyn format_args(p2);
        return r10;
      };
      r12 = dyn gettextf2("Code: %s", p3);
      return r12;
    };
    r14 = dyn strwrap[, indent, exdent](p4, 2, 8);
    check L14() else D7();
  D7():
    deopt 25 [r14];
  L14():
    strwrap1 = ldf strwrap;
    check L15() else D8();
  D8():
    deopt 27 [];
  L15():
    p7 = prom<V +>{
      gettextf3 = ldf gettextf;
      p6 = prom<V +>{
        format_args1 = ldf format_args;
        p5 = prom<V +>{
          docObj8 = ld docObj;
          docObj9 = force? docObj8;
          checkMissing(docObj9);
          c3 = `is.object`(docObj9);
          if c3 then L1() else L2(docObj9);
        L0(dx7):
          return dx7;
        L1():
          dr6 = tryDispatchBuiltin.1("[[", docObj9);
          dc3 = getTryDispatchBuiltinDispatched(dr6);
          if dc3 then L3() else L2(dr6);
        L2(docObj11):
          __3 = ldf `[[` in base;
          r15 = dyn __3(docObj11, "docs");
          goto L0(r15);
        L3():
          dx6 = getTryDispatchBuiltinValue(dr6);
          goto L0(dx6);
        };
        r17 = dyn format_args1(p5);
        return r17;
      };
      r19 = dyn gettextf3("Docs: %s", p6);
      return r19;
    };
    r21 = dyn strwrap1[, indent, exdent](p7, 2, 8);
    check L16() else D9();
  D9():
    deopt 33 [r21];
  L16():
    c4 = ldf c in base;
    r22 = dyn c4(r4, r7, r14, r21, "");
    check L17() else D10();
  D10():
    deopt 36 [r22];
  L17():
    goto L1(r22);
  }
}