fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.codocClasses` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg unlist:cls, reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg names:cls, reg r5:V, reg p:p(V +), reg _fmt:*, reg _fmt1:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg as_character:cls, reg r11:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner3369547807;
    st `.fmt` = r;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r2):
    popenv;
    return r2;
  L1():
    unlist = ldf unlist;
    check L3() else D0();
  L2():
    r1 = dyn base(<lang unlist(lapply(names(x), .fmt))>);
    goto L0(r1);
  D0():
    deopt 6 [];
  L3():
    p2 = prom<V +>{
      lapply = ldf lapply;
      p = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r4):
        return r4;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        names = ldf names in base;
        r5 = dyn names(x2);
        goto L0(r5);
      L2():
        r3 = dyn base1(<sym x>);
        goto L0(r3);
      };
      p1 = prom<V +>{
        _fmt = ld `.fmt`;
        _fmt1 = force? _fmt;
        checkMissing(_fmt1);
        return _fmt1;
      };
      r8 = dyn lapply(p, p1);
      return r8;
    };
    r10 = dyn unlist(p2);
    check L4() else D1();
  D1():
    deopt 8 [r10];
  L4():
    as_character = ldf `as.character` in base;
    r11 = dyn as_character(r10);
    check L5() else D2();
  D2():
    deopt 10 [r11];
  L5():
    goto L0(r11);
  }
}
fun inner3369547807(nm) {
  (reg nm:*) -+> V { var nm:*, reg r:cls, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nm1:*, reg nm2:V, reg __:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg gettextf:cls, reg nm3:*, reg nm4:V, reg p:p(V +), reg r5:V, reg gettextf1:cls, reg docObj:*, reg docObj1:V, reg c1:L, reg docObj3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg wrapPart:cls, reg r9:V, reg wrapPart1:cls, reg r10:V, reg wrapPart2:cls, reg r11:V, reg c2:cls, reg r12:V |
    mkenv;
    st nm = nm;
    r = clos inner2568646806;
    st wrapPart = r;
    x = ld x;
    check L2() else D0();
  D0():
    deopt 3 [x];
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
    deopt 5 [x3, nm1];
  L1(r3):
    popenv;
    return r3;
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    nm2 = force? nm1;
    __ = ldf `[[` in base;
    r1 = dyn __(x3, nm2);
    goto L0(r1);
  L7():
    gettextf = ldf gettextf;
    check L9() else D2();
  L8():
    r2 = dyn base(<lang gettextf("S4 class codoc mismatches from Rd file '%s':", nm)>, <lang gettextf("Slots for class '%s'", `[[`(docObj, "name"))>, <lang wrapPart("code")>, <lang wrapPart("inherited")>, <lang wrapPart("docs")>, "");
    goto L1(r2);
  D2():
    deopt 12 [];
  L9():
    p = prom<V +>{
      nm3 = ld nm;
      nm4 = force? nm3;
      checkMissing(nm4);
      return nm4;
    };
    r5 = dyn gettextf("S4 class codoc mismatches from Rd file '%s':", p);
    check L10() else D3();
  D3():
    deopt 15 [r5];
  L10():
    gettextf1 = ldf gettextf;
    check L11() else D4();
  D4():
    deopt 17 [];
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
      r6 = dyn __1(docObj3, "name");
      goto L0(r6);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r8 = dyn gettextf1("Slots for class '%s'", p1);
    check L12() else D5();
  D5():
    deopt 20 [r8];
  L12():
    wrapPart = ldf wrapPart;
    check L13() else D6();
  D6():
    deopt 22 [];
  L13():
    r9 = dyn wrapPart("code");
    check L14() else D7();
  D7():
    deopt 24 [r9];
  L14():
    wrapPart1 = ldf wrapPart;
    check L15() else D8();
  D8():
    deopt 26 [];
  L15():
    r10 = dyn wrapPart1("inherited");
    check L16() else D9();
  D9():
    deopt 28 [r10];
  L16():
    wrapPart2 = ldf wrapPart;
    check L17() else D10();
  D10():
    deopt 30 [];
  L17():
    r11 = dyn wrapPart2("docs");
    check L18() else D11();
  D11():
    deopt 32 [r11];
  L18():
    c2 = ldf c in base;
    r12 = dyn c2(r5, r8, r9, r10, r11, "");
    check L19() else D12();
  D12():
    deopt 35 [r12];
  L19():
    goto L1(r12);
  }
}
fun inner2568646806(nam) {
  (reg nam:*) -+> V { var nam:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg docObj:*, reg docObj1:V, reg c:L, reg docObj3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nam1:*, reg nam2:V, reg __:cls, reg r3:V, reg length:cls, reg r4:V, reg c1:L, reg strwrap:cls, reg sprintf:cls, reg gettextf:cls, reg capWord:cls, reg nam3:*, reg nam4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg paste:cls, reg O:*, reg O1:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg r15:V |
    mkenv;
    st nam = nam;
    r = clos inner530606259;
    st capWord = r;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r2):
    c1 = `as.logical`(r2);
    if c1 then L11() else L2();
  L3():
    docObj = ld docObj;
    check L5() else D0();
  L4():
    r1 = dyn base(<lang `<-`(O, `[[`(docObj, nam))>);
    goto L0(r1);
  D0():
    deopt 5 [docObj];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L5():
    docObj1 = force? docObj;
    checkMissing(docObj1);
    c = `is.object`(docObj1);
    if c then L6() else L7(docObj1);
  L11():
    strwrap = ldf strwrap;
    check L12() else D3();
  D3():
    deopt 14 [];
  L1(dx1):
    st O = dx1;
    length = ldf length in base;
    r4 = dyn length(dx1);
    check L10() else D2();
  L6():
    dr = tryDispatchBuiltin.1("[[", docObj1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(docObj3):
    nam1 = ld nam;
    check L9() else D1();
  L12():
    p5 = prom<V +>{
      sprintf = ldf sprintf;
      p2 = prom<V +>{
        gettextf = ldf gettextf;
        p1 = prom<V +>{
          capWord = ldf capWord;
          p = prom<V +>{
            nam3 = ld nam;
            nam4 = force? nam3;
            checkMissing(nam4);
            return nam4;
          };
          r6 = dyn capWord(p);
          return r6;
        };
        r8 = dyn gettextf(p1);
        return r8;
      };
      p4 = prom<V +>{
        paste = ldf paste;
        p3 = prom<V +>{
          O = ld O;
          O1 = force? O;
          checkMissing(O1);
          return O1;
        };
        r11 = dyn paste[, collapse](p3, " ");
        return r11;
      };
      r13 = dyn sprintf("%s: %s", p2, p4);
      return r13;
    };
    r15 = dyn strwrap[, indent, exdent](p5, 2, 8);
    check L13() else D4();
  D1():
    deopt 7 [docObj3, nam1];
  D2():
    deopt 12 [r4];
  D4():
    deopt 20 [r15];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L9():
    nam2 = force? nam1;
    __ = ldf `[[` in base;
    r3 = dyn __(docObj3, nam2);
    goto L1(r3);
  L10():
    goto L0(r4);
  L13():
    popenv;
    return r15;
  }
}
fun inner530606259(w) {
  (reg w:*) -+> V { var w:*, reg sub:cls, reg w1:*, reg w2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st w = w;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      w1 = ld w;
      w2 = force? w1;
      checkMissing(w2);
      return w2;
    };
    r1 = dyn sub[, , , perl]("\\b(\\w)", "\\U\\1", p, TRUE);
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    popenv;
    return r1;
  }
}