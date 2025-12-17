fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2086133723;
    st `.gregexec_at_pos` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2086133723(pattern, x, m, pos) {
  (reg pattern:*, reg x:*, reg m:*, reg pos:*) -+> V { var pattern:*, var x:*, var m:*, var pos:*, reg unlist:cls, reg lapply:cls, reg regmatches:cls, reg x1:*, reg x2:V, reg p:p(V +), reg m1:*, reg m2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:cls, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V |
    mkenv;
    st pattern = pattern;
    st x = x;
    st m = m;
    st pos = pos;
    unlist = ldf unlist;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p4 = prom<V +>{
      lapply = ldf lapply;
      p2 = prom<V +>{
        regmatches = ldf regmatches;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        p1 = prom<V +>{
          m1 = ld m;
          m2 = force? m1;
          checkMissing(m2);
          return m2;
        };
        r2 = dyn regmatches(p, p1);
        return r2;
      };
      p3 = prom<V +>{
        r4 = clos inner3708401697;
        return r4;
      };
      r6 = dyn lapply(p2, p3);
      return r6;
    };
    r8 = dyn unlist[, `use.names`](p4, FALSE);
    check L1() else D1();
  D1():
    deopt 5 [r8];
  L1():
    popenv;
    return r8;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p:p(V +), reg regmatches:cls, reg e1:*, reg e2:V, reg p1:p(V +), reg regexec:cls, reg pattern:*, reg pattern1:V, reg p2:p(V +), reg e3:*, reg e4:V, reg p3:p(V +), reg r4:V, reg p4:p(V +), reg r6:V, reg p5:p(V +), reg r8:V, reg c:L, reg r10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos:*, reg pos1:V, reg __:cls, reg r11:V |
    mkenv;
    st e = e;
    do_call = ldf `do.call`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p5 = prom<V +>{
      regmatches = ldf regmatches;
      p1 = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      p4 = prom<V +>{
        regexec = ldf regexec;
        p2 = prom<V +>{
          pattern = ld pattern;
          pattern1 = force? pattern;
          checkMissing(pattern1);
          return pattern1;
        };
        p3 = prom<V +>{
          e3 = ld e;
          e4 = force? e3;
          checkMissing(e4);
          return e4;
        };
        r4 = dyn regexec(p2, p3);
        return r4;
      };
      r6 = dyn regmatches(p1, p4);
      return r6;
    };
    r8 = dyn do_call(p, p5);
    check L2() else D1();
  D1():
    deopt 4 [r8];
  L2():
    c = `is.object`(r8);
    if c then L3() else L4(r8);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[", r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r10):
    pos = ld pos;
    check L6() else D2();
  D2():
    deopt 6 [r10, pos];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    pos1 = force? pos;
    __ = ldf `[` in base;
    r11 = dyn __(r8, <missing>, pos1);
    goto L0(r11);
  }
}