fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.checkTnF` = r;
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
    r = clos inner3498582957;
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
fun inner3498582957(fname) {
  (reg fname:*) -+> V { var fname:*, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg fname1:*, reg fname2:V, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg gettextf:cls, reg fname3:*, reg fname4:V, reg p:p(V +), reg r4:V, reg unlist:cls, reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg xfname:*, reg xfname1:V, reg r7:I, reg p1:p(V +), reg r9:cls, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg r13:V, reg c1:cls, reg r14:V |
    mkenv;
    st fname = fname;
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
    st xfname = dx1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L3():
    dr = tryDispatchBuiltin.1("[[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(x3):
    fname1 = ld fname;
    check L6() else D1();
  D1():
    deopt 2 [x3, fname1];
  L1(r2):
    popenv;
    return r2;
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    fname2 = force? fname1;
    __ = ldf `[[` in base;
    r = dyn __(x3, fname2);
    goto L0(r);
  L7():
    gettextf = ldf gettextf;
    check L9() else D2();
  L8():
    r1 = dyn base(<lang gettextf("File '%s':", fname)>, <lang unlist(lapply(seq_along(xfname), function((i=), {
            strwrap(gettextf("found T/F in %s", paste(deparse(`[[`(xfname, i)), collapse="")), exdent=4)
          }, NULL)))>, "");
    goto L1(r1);
  D2():
    deopt 9 [];
  L9():
    p = prom<V +>{
      fname3 = ld fname;
      fname4 = force? fname3;
      checkMissing(fname4);
      return fname4;
    };
    r4 = dyn gettextf("File '%s':", p);
    check L10() else D3();
  D3():
    deopt 12 [r4];
  L10():
    unlist = ldf unlist;
    check L11() else D4();
  D4():
    deopt 14 [];
  L11():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        sym1 = ldf seq_along;
        base1 = ldf seq_along in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r6):
        return r6;
      L1():
        xfname = ld xfname;
        xfname1 = force? xfname;
        checkMissing(xfname1);
        r7 = seq_along(xfname1);
        goto L0(r7);
      L2():
        r5 = dyn base1(<sym xfname>);
        goto L0(r5);
      };
      p2 = prom<V +>{
        r9 = clos inner3002224933;
        return r9;
      };
      r11 = dyn lapply(p1, p2);
      return r11;
    };
    r13 = dyn unlist(p3);
    check L12() else D5();
  D5():
    deopt 16 [r13];
  L12():
    c1 = ldf c in base;
    r14 = dyn c1(r4, r13, "");
    check L13() else D6();
  D6():
    deopt 19 [r14];
  L13():
    goto L1(r14);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg strwrap:cls, reg gettextf:cls, reg paste:cls, reg deparse:cls, reg xfname:*, reg xfname1:V, reg c:L, reg xfname3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V |
    mkenv;
    st i = i;
    strwrap = ldf strwrap;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        paste = ldf paste;
        p1 = prom<V +>{
          deparse = ldf deparse;
          p = prom<V +>{
            xfname = ld xfname;
            xfname1 = force? xfname;
            checkMissing(xfname1);
            c = `is.object`(xfname1);
            if c then L1() else L2(xfname1);
          L0(dx1):
            return dx1;
          L1():
            dr = tryDispatchBuiltin.1("[[", xfname1);
            dc = getTryDispatchBuiltinDispatched(dr);
            if dc then L3() else L2(dr);
          L2(xfname3):
            i1 = ld i;
            i2 = force? i1;
            __ = ldf `[[` in base;
            r = dyn __(xfname3, i2);
            goto L0(r);
          L3():
            dx = getTryDispatchBuiltinValue(dr);
            goto L0(dx);
          };
          r2 = dyn deparse(p);
          return r2;
        };
        r4 = dyn paste[, collapse](p1, "");
        return r4;
      };
      r6 = dyn gettextf("found T/F in %s", p2);
      return r6;
    };
    r8 = dyn strwrap[, exdent](p3, 4);
    check L1() else D1();
  D1():
    deopt 5 [r8];
  L1():
    popenv;
    return r8;
  }
}