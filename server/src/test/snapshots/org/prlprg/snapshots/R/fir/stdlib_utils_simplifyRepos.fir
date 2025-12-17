fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2247251435;
    st simplifyRepos = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2247251435(repos, type) {
  (reg repos:*, reg type:*) -+> V { var repos:*, var type:*, reg substring:cls, reg contrib_url:cls, reg type1:*, reg type2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg regexpr:cls, reg tail:*, reg tail1:V, reg p2:p(V +), reg repos1:*, reg repos2:V, reg p3:p(V +), reg r6:V, reg ifelse:cls, reg ind:*, reg ind1:V, reg r7:V, reg p4:p(V +), reg ind2:*, reg ind3:V, reg r9:V, reg p5:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg repos3:*, reg repos4:V, reg nchar:cls, reg r13:V, reg p6:p(V +), reg r15:V, reg substr:cls, reg repos5:*, reg repos6:V, reg p7:p(V +), reg ind4:*, reg ind5:V, reg p8:p(V +), reg r18:V |
    mkenv;
    st repos = repos;
    st type = type;
    substring = ldf substring;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      contrib_url = ldf `contrib.url`;
      p = prom<V +>{
        type1 = ld type;
        type2 = force? type1;
        checkMissing(type2);
        return type2;
      };
      r1 = dyn contrib_url("---", p);
      return r1;
    };
    r3 = dyn substring(p1, 4);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    st tail = r3;
    regexpr = ldf regexpr;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p2 = prom<V +>{
      tail = ld tail;
      tail1 = force? tail;
      checkMissing(tail1);
      return tail1;
    };
    p3 = prom<V +>{
      repos1 = ld repos;
      repos2 = force? repos1;
      checkMissing(repos2);
      return repos2;
    };
    r6 = dyn regexpr[, , fixed](p2, p3, TRUE);
    check L3() else D3();
  D3():
    deopt 12 [r6];
  L3():
    st ind = r6;
    ifelse = ldf ifelse;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p4 = prom<V +>{
      ind = ld ind;
      ind1 = force? ind;
      checkMissing(ind1);
      r7 = `>`(ind1, 0);
      return r7;
    };
    p5 = prom<V +>{
      ind2 = ld ind;
      ind3 = force? ind2;
      checkMissing(ind3);
      r9 = `-`(ind3, 1);
      return r9;
    };
    p6 = prom<V +>{
      sym = ldf nchar;
      base = ldf nchar in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r12):
      return r12;
    L1():
      repos3 = ld repos;
      repos4 = force? repos3;
      checkMissing(repos4);
      nchar = ldf nchar in base;
      r13 = dyn nchar(repos4, "c", FALSE, NA_LGL);
      goto L0(r13);
    L2():
      r11 = dyn base[, type](<sym repos>, "c");
      goto L0(r11);
    };
    r15 = dyn ifelse(p4, p5, p6);
    check L5() else D5();
  D5():
    deopt 19 [r15];
  L5():
    st ind = r15;
    substr = ldf substr;
    check L6() else D6();
  D6():
    deopt 22 [];
  L6():
    p7 = prom<V +>{
      repos5 = ld repos;
      repos6 = force? repos5;
      checkMissing(repos6);
      return repos6;
    };
    p8 = prom<V +>{
      ind4 = ld ind;
      ind5 = force? ind4;
      checkMissing(ind5);
      return ind5;
    };
    r18 = dyn substr(p7, 1, p8);
    check L7() else D7();
  D7():
    deopt 26 [r18];
  L7():
    popenv;
    return r18;
  }
}