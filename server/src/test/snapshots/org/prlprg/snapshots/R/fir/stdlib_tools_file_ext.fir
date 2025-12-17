fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st file_ext = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg regexpr:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg ifelse:cls, reg pos:*, reg pos1:V, reg r2:V, reg p1:p(V +), reg substring:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg pos2:*, reg pos3:V, reg r5:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg r9:V |
    mkenv;
    st x = x;
    regexpr = ldf regexpr;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn regexpr("\\.([[:alnum:]]+)$", p);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    st pos = r1;
    ifelse = ldf ifelse;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p1 = prom<V +>{
      pos = ld pos;
      pos1 = force? pos;
      checkMissing(pos1);
      r2 = `>`(pos1, -1);
      return r2;
    };
    p4 = prom<V +>{
      substring = ldf substring;
      p2 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p3 = prom<V +>{
        pos2 = ld pos;
        pos3 = force? pos2;
        checkMissing(pos3);
        r5 = `+`(pos3, 1);
        return r5;
      };
      r7 = dyn substring(p2, p3);
      return r7;
    };
    r9 = dyn ifelse(p1, p4, "");
    check L3() else D3();
  D3():
    deopt 11 [r9];
  L3():
    popenv;
    return r9;
  }
}