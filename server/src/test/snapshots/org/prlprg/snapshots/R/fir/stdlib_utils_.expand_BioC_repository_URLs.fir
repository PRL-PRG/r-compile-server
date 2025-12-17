fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.expand_BioC_repository_URLs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sub:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg as_character:cls, reg r3:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg r6:V, reg sub1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg _BioC_version_associated_with_R_version:cls, reg r9:V, reg as_character1:cls, reg r10:V, reg p2:p(V +), reg x3:*, reg x4:V, reg p3:p(V +), reg r13:V |
    mkenv;
    st x = x;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf `as.character`;
      base = ldf `as.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("BioC_mirror", "https://bioconductor.org");
      as_character = ldf `as.character` in base;
      r3 = dyn as_character(r2);
      goto L0(r3);
    L2():
      r = dyn base(<lang getOption("BioC_mirror", "https://bioconductor.org")>);
      goto L0(r);
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r6 = dyn sub[, , , fixed]("%bm", p, p1, TRUE);
    check L1() else D1();
  D1():
    deopt 7 [r6];
  L1():
    st x = r6;
    sub1 = ldf sub;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p2 = prom<V +>{
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      _BioC_version_associated_with_R_version = ldf `.BioC_version_associated_with_R_version`;
      r9 = dyn _BioC_version_associated_with_R_version();
      as_character1 = ldf `as.character` in base;
      r10 = dyn as_character1(r9);
      goto L0(r10);
    L2():
      r7 = dyn base1(<lang .BioC_version_associated_with_R_version()>);
      goto L0(r7);
    };
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r13 = dyn sub1[, , , fixed]("%v", p2, p3, TRUE);
    check L3() else D3();
  D3():
    deopt 16 [r13];
  L3():
    popenv;
    return r13;
  }
}