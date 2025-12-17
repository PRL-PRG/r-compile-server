fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3143136094;
    st `.setMethodsForDispatch` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3143136094(f, fdef, mlist) {
  (reg f:*, reg fdef:*, reg mlist:*) -+> V { var f:*, var fdef:*, var mlist:*, reg environment:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r1:V, reg is:cls, reg fdef3:*, reg fdef4:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c:L, reg c1:V, reg exists:cls, reg ev:*, reg ev1:V, reg p2:p(V +), reg r6:V, reg r7:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg sprintf:cls, reg sQuote:cls, reg f1:*, reg f2:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg assign:cls, reg ev2:*, reg ev3:V, reg p6:p(V +), reg mlist1:*, reg mlist2:V, reg p7:p(V +), reg r17:V |
    mkenv;
    st f = f;
    st fdef = fdef;
    st mlist = mlist;
    environment = ldf environment;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r1 = dyn environment(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    st ev = r1;
    is = ldf is;
    check L5() else D2();
  D2():
    deopt 6 [];
  L5():
    p1 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r3 = dyn is(p1, "genericFunction");
    check L6() else D3();
  D3():
    deopt 9 [r3];
  L6():
    r4 = `!`(r3);
    c = `as.logical`(r4);
    if c then L0(c) else L7();
  L0(c1):
    c6 = `as.logical`(c1);
    if c6 then L11() else L1();
  L7():
    exists = ldf exists;
    check L8() else D4();
  D4():
    deopt 12 [c];
  L1():
    goto L2();
  L2():
    assign = ldf assign;
    check L15() else D8();
  L8():
    p2 = prom<V +>{
      ev = ld ev;
      ev1 = force? ev;
      checkMissing(ev1);
      return ev1;
    };
    r6 = dyn exists[, envir, inherits](".Methods", p2, FALSE);
    check L9() else D5();
  L11():
    stop = ldf stop;
    check L12() else D6();
  D5():
    deopt 18 [c, r6];
  D6():
    deopt 22 [];
  D8():
    deopt 30 [];
  L9():
    r7 = `!`(r6);
    c3 = `as.logical`(r7);
    c4 = `||`(c, c3);
    goto L0(c4);
  L12():
    p5 = prom<V +>{
      sprintf = ldf sprintf;
      p4 = prom<V +>{
        sQuote = ldf sQuote;
        p3 = prom<V +>{
          f1 = ld f;
          f2 = force? f1;
          checkMissing(f2);
          return f2;
        };
        r9 = dyn sQuote(p3);
        return r9;
      };
      r11 = dyn sprintf("internal error: did not get a valid generic function object for function %s", p4);
      return r11;
    };
    r13 = dyn stop[, domain](p5, NA_LGL);
    check L13() else D7();
  L15():
    p6 = prom<V +>{
      ev2 = ld ev;
      ev3 = force? ev2;
      checkMissing(ev3);
      return ev3;
    };
    p7 = prom<V +>{
      mlist1 = ld mlist;
      mlist2 = force? mlist1;
      checkMissing(mlist2);
      return mlist2;
    };
    r17 = dyn assign[, envir, ](".Methods", p6, p7);
    check L16() else D9();
  D7():
    deopt 26 [r13];
  D9():
    deopt 35 [r17];
  L13():
    goto L2();
  L16():
    popenv;
    return r17;
  }
}