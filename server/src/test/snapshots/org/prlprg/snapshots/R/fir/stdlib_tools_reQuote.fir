fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st reQuote = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg r:cls, reg gregexpr:cls, reg re:*, reg re1:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg r3:V, reg lapply:cls, reg regmatches:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg m:*, reg m1:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg escape:*, reg escape1:V, reg p5:p(V +), reg r9:V, reg l:*, reg regmatches__:cls, reg m2:*, reg m3:V, reg p6:p(V +), reg r11:V, reg x5:*, reg x6:V |
    mkenv;
    st x = x;
    r = clos inner1236783023;
    st escape = r;
    st re = "[.*?+^$\\()[]";
    gregexpr = ldf gregexpr;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    p = prom<V +>{
      re = ld re;
      re1 = force? re;
      checkMissing(re1);
      return re1;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn gregexpr(p, p1);
    check L1() else D1();
  D1():
    deopt 10 [r3];
  L1():
    st m = r3;
    lapply = ldf lapply;
    check L2() else D2();
  D2():
    deopt 13 [];
  L2():
    p4 = prom<V +>{
      regmatches = ldf regmatches;
      p2 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p3 = prom<V +>{
        m = ld m;
        m1 = force? m;
        checkMissing(m1);
        return m1;
      };
      r6 = dyn regmatches(p2, p3);
      return r6;
    };
    p5 = prom<V +>{
      escape = ld escape;
      escape1 = force? escape;
      checkMissing(escape1);
      return escape1;
    };
    r9 = dyn lapply(p4, p5);
    check L3() else D3();
  D3():
    deopt 16 [r9];
  L3():
    l = ld x;
    regmatches__ = ldf `regmatches<-`;
    check L4() else D4();
  D4():
    deopt 18 [r9, l, r9];
  L4():
    p6 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r11 = dyn regmatches__(l, NULL, p6, r9);
    check L5() else D5();
  D5():
    deopt 21 [r9, r11];
  L5():
    st x = r11;
    x5 = ld x;
    check L6() else D6();
  D6():
    deopt 23 [x5];
  L6():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg paste0:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st s = s;
    paste0 = ldf paste0;
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
    r1 = dyn paste0("\\", p);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}