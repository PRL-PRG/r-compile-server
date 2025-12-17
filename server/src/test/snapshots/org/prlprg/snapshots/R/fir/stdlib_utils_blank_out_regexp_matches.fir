fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2896787904;
    st blank_out_regexp_matches = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2896787904(s, re, `...`) {
  (reg s:*, reg re:*, reg ddd:dots) -+> V { var s:*, var re:*, var `...`:dots?, reg gregexpr:cls, reg re1:*, reg re2:V, reg p:p(V +), reg s1:*, reg s2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V, reg Map:cls, reg r3:cls, reg p2:p(V +), reg lapply:cls, reg regmatches:cls, reg s3:*, reg s4:V, reg p3:p(V +), reg m:*, reg m1:V, reg p4:p(V +), reg r7:V, reg p5:p(V +), reg nchar:*, reg nchar1:V, reg p6:p(V +), reg r10:V, reg p7:p(V +), reg r12:V, reg l:*, reg regmatches__:cls, reg m2:*, reg m3:V, reg p8:p(V +), reg r14:V, reg s5:*, reg s6:V |
    mkenv;
    st s = s;
    st re = re;
    st `...` = ddd;
    gregexpr = ldf gregexpr;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      re1 = ld re;
      re2 = force? re1;
      checkMissing(re2);
      return re2;
    };
    p1 = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    ddd1 = ld `...`;
    r2 = dyn gregexpr[, , `...`](p, p1, ddd1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    st m = r2;
    Map = ldf Map;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p2 = prom<V +>{
      r3 = clos inner4266987626;
      return r3;
    };
    p7 = prom<V +>{
      lapply = ldf lapply;
      p5 = prom<V +>{
        regmatches = ldf regmatches;
        p3 = prom<V +>{
          s3 = ld s;
          s4 = force? s3;
          checkMissing(s4);
          return s4;
        };
        p4 = prom<V +>{
          m = ld m;
          m1 = force? m;
          checkMissing(m1);
          return m1;
        };
        r7 = dyn regmatches(p3, p4);
        return r7;
      };
      p6 = prom<V +>{
        nchar = ld nchar;
        nchar1 = force? nchar;
        checkMissing(nchar1);
        return nchar1;
      };
      r10 = dyn lapply(p5, p6);
      return r10;
    };
    r12 = dyn Map(p2, p7);
    check L3() else D3();
  D3():
    deopt 11 [r12];
  L3():
    l = ld s;
    regmatches__ = ldf `regmatches<-`;
    check L4() else D4();
  D4():
    deopt 13 [r12, l, r12];
  L4():
    p8 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r14 = dyn regmatches__(l, NULL, p8, r12);
    check L5() else D5();
  D5():
    deopt 16 [r12, r14];
  L5():
    st s = r14;
    s5 = ld s;
    check L6() else D6();
  D6():
    deopt 18 [s5];
  L6():
    s6 = force? s5;
    checkMissing(s6);
    popenv;
    return s6;
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg strrep:cls, reg n1:*, reg n2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st n = n;
    strrep = ldf strrep;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    r1 = dyn strrep(" ", p);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}