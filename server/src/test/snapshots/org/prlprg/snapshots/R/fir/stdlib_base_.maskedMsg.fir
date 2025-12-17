fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3477380025;
    st `.maskedMsg` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3477380025(same, pkg, by) {
  (reg same:*, reg pkg:*, reg by:*) -+> V { var same:*, var pkg:*, var by:*, reg strwrap:cls, reg paste:cls, reg same1:*, reg same2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg by1:*, reg by2:V, reg c:L, reg ngettext:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg same3:*, reg same4:V, reg length:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg r9:V, reg ngettext1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg same5:*, reg same6:V, reg length1:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg sprintf:cls, reg paste1:cls, reg txt:*, reg txt1:V, reg p4:p(V +), reg r16:V, reg p5:p(V +), reg pkg1:*, reg pkg2:V, reg p6:p(V +), reg paste2:cls, reg objs:*, reg objs1:V, reg p7:p(V +), reg r20:V, reg p8:p(V +), reg r22:V |
    mkenv;
    st same = same;
    st pkg = pkg;
    st by = by;
    strwrap = ldf strwrap;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      paste = ldf paste;
      p = prom<V +>{
        same1 = ld same;
        same2 = force? same1;
        checkMissing(same2);
        return same2;
      };
      r1 = dyn paste[, collapse](p, ", ");
      return r1;
    };
    r3 = dyn strwrap[, indent, exdent](p1, 4, 4);
    check L3() else D1();
  D1():
    deopt 7 [r3];
  L3():
    st objs = r3;
    by1 = ld by;
    check L4() else D2();
  D2():
    deopt 9 [by1];
  L4():
    by2 = force? by1;
    checkMissing(by2);
    c = `as.logical`(by2);
    if c then L5() else L0();
  L0():
    ngettext1 = ldf ngettext;
    check L9() else D5();
  L1(r9):
    st txt = r9;
    sprintf = ldf sprintf;
    check L11() else D7();
  L5():
    ngettext = ldf ngettext;
    check L6() else D3();
  D3():
    deopt 12 [];
  D5():
    deopt 18 [];
  D7():
    deopt 25 [];
  L6():
    p2 = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      same3 = ld same;
      same4 = force? same3;
      checkMissing(same4);
      length = ldf length in base;
      r6 = dyn length(same4);
      goto L0(r6);
    L2():
      r4 = dyn base(<sym same>);
      goto L0(r4);
    };
    r8 = dyn ngettext(p2, "The following object is masked _by_ %s:", "The following objects are masked _by_ %s:");
    check L7() else D4();
  L9():
    p3 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      same5 = ld same;
      same6 = force? same5;
      checkMissing(same6);
      length1 = ldf length in base;
      r12 = dyn length1(same6);
      goto L0(r12);
    L2():
      r10 = dyn base1(<sym same>);
      goto L0(r10);
    };
    r14 = dyn ngettext1(p3, "The following object is masked from %s:", "The following objects are masked from %s:");
    check L10() else D6();
  L11():
    p5 = prom<V +>{
      paste1 = ldf paste0;
      p4 = prom<V +>{
        txt = ld txt;
        txt1 = force? txt;
        checkMissing(txt1);
        return txt1;
      };
      r16 = dyn paste1(p4, "\n\n%s\n");
      return r16;
    };
    p6 = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    p8 = prom<V +>{
      paste2 = ldf paste;
      p7 = prom<V +>{
        objs = ld objs;
        objs1 = force? objs;
        checkMissing(objs1);
        return objs1;
      };
      r20 = dyn paste2[, collapse](p7, "\n");
      return r20;
    };
    r22 = dyn sprintf(p5, p6, p8);
    check L12() else D8();
  D4():
    deopt 16 [r8];
  D6():
    deopt 22 [r14];
  D8():
    deopt 29 [r22];
  L7():
    goto L1(r8);
  L10():
    goto L1(r14);
  L12():
    popenv;
    return r22;
  }
}