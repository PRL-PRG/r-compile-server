fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_aliases_db_to_data_frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg r:cls, reg as_data_frame:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p:p(V +), reg Map:cls, reg wrk:*, reg wrk1:V, reg p1:p(V +), reg x1:*, reg x2:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg names:cls, reg r6:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg c:cls, reg r15:V, reg l:*, reg colnames__:cls, reg r16:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    r = clos inner1478446683;
    st wrk = r;
    as_data_frame = ldf `as.data.frame`;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p5 = prom<V +>{
      do_call = ldf `do.call`;
      p = prom<V +>{
        rbind = ld rbind;
        rbind1 = force? rbind;
        checkMissing(rbind1);
        return rbind1;
      };
      p4 = prom<V +>{
        Map = ldf Map;
        p1 = prom<V +>{
          wrk = ld wrk;
          wrk1 = force? wrk;
          checkMissing(wrk1);
          return wrk1;
        };
        p2 = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        p3 = prom<V +>{
          sym = ldf names;
          base = ldf names in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r5):
          return r5;
        L1():
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          names = ldf names in base;
          r6 = dyn names(x4);
          goto L0(r6);
        L2():
          r4 = dyn base(<sym x>);
          goto L0(r4);
        };
        r8 = dyn Map(p1, p2, p3);
        return r8;
      };
      r10 = dyn do_call(p, p4);
      return r10;
    };
    r12 = dyn as_data_frame(p5);
    check L2() else D1();
  D1():
    deopt 6 [r12];
  L2():
    st y = r12;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L3() else L4();
  L0(r14):
    l = ld y;
    colnames__ = ldf `colnames<-`;
    check L6() else D3();
  L3():
    c = ldf c in base;
    r15 = dyn c("Alias", "Source");
    check L5() else D2();
  L4():
    r13 = dyn base1("Alias", "Source");
    goto L0(r13);
  D2():
    deopt 13 [r15];
  D3():
    deopt 15 [r14, l, r14];
  L5():
    goto L0(r15);
  L6():
    r16 = dyn colnames__(l, NULL, r14);
    check L7() else D4();
  D4():
    deopt 17 [r14, r16];
  L7():
    st y = r16;
    y = ld y;
    check L8() else D5();
  D5():
    deopt 19 [y];
  L8():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}
fun inner1478446683(a, p) {
  (reg a:*, reg p:*) -+> V { var a:*, var p:*, reg cbind:cls, reg unlist:cls, reg a1:*, reg a2:V, reg p1:p(V +), reg r1:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg paste0:cls, reg p3:*, reg p4:V, reg p5:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg a3:*, reg a4:V, reg names:cls, reg r8:V, reg p6:p(V +), reg r10:V, reg lengths:cls, reg a5:*, reg a6:V, reg p7:p(V +), reg r12:V, reg rep_int:cls, reg r13:V, reg p8:p(V +), reg r15:V |
    mkenv;
    st a = a;
    st p = p;
    cbind = ldf cbind;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      unlist = ldf unlist;
      p1 = prom<V +>{
        a1 = ld a;
        a2 = force? a1;
        checkMissing(a2);
        return a2;
      };
      r1 = dyn unlist[, `use.names`](p1, FALSE);
      return r1;
    };
    p8 = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      paste0 = ldf paste0;
      p5 = prom<V +>{
        p3 = ld p;
        p4 = force? p3;
        checkMissing(p4);
        return p4;
      };
      p6 = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r7):
        return r7;
      L1():
        a3 = ld a;
        a4 = force? a3;
        checkMissing(a4);
        names = ldf names in base;
        r8 = dyn names(a4);
        goto L0(r8);
      L2():
        r6 = dyn base1(<sym a>);
        goto L0(r6);
      };
      r10 = dyn paste0(p5, "::", p6);
      lengths = ldf lengths;
      p7 = prom<V +>{
        a5 = ld a;
        a6 = force? a5;
        checkMissing(a6);
        return a6;
      };
      r12 = dyn lengths(p7);
      rep_int = ldf `rep.int` in base;
      r13 = dyn rep_int(r10, r12);
      goto L0(r13);
    L2():
      r3 = dyn base(<lang paste0(p, "::", names(a))>, <lang lengths(a)>);
      goto L0(r3);
    };
    r15 = dyn cbind(p2, p8);
    check L1() else D1();
  D1():
    deopt 4 [r15];
  L1():
    popenv;
    return r15;
  }
}