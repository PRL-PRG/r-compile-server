fun main() {
  () -+> V { reg __:cls, reg r:V, reg r1:cls, reg setNames:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg rep:cls, reg r4:V, reg p:p(V +), reg paste0:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg src:*, reg src1:V, reg p4:p(V +), reg r13:V, reg manyargs:cls, reg r14:V |
    mkenv;
    st src = "\n    int sum = INTEGER(a1)[0] + INTEGER(a2)[0] + INTEGER(a3)[0] + INTEGER(a4)[0] +\n              INTEGER(a5)[0] + INTEGER(a6)[0] + INTEGER(a7)[0] + INTEGER(a8)[0] +\n              INTEGER(a9)[0] + INTEGER(a10)[0] + INTEGER(a11)[0] + INTEGER(a12)[0] +\n              INTEGER(a13)[0] + INTEGER(a14)[0] + INTEGER(a15)[0] + INTEGER(a16)[0] +\n              INTEGER(a17)[0];\n\n    SEXP out = PROTECT(Rf_allocVector(INTSXP, 1));\n    INTEGER(out)[0] = sum;\n    UNPROTECT(1);\n    return out;\n  ";
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r = dyn __("inline", "cfunction");
    check L1() else D1();
  D1():
    deopt 7 [r];
  L1():
    checkFun.0(r);
    r1 = r as cls;
    p3 = prom<V +>{
      setNames = ldf setNames;
      p = prom<V +>{
        sym = ldf rep;
        base = ldf rep in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r3):
        return r3;
      L1():
        rep = ldf rep in base;
        r4 = dyn rep("integer", 17.0);
        goto L0(r4);
      L2():
        r2 = dyn base("integer", 17.0);
        goto L0(r2);
      };
      p2 = prom<V +>{
        paste0 = ldf paste0;
        p1 = prom<V +>{
          r6 = `:`(1.0, 17.0);
          return r6;
        };
        r8 = dyn paste0("a", p1);
        return r8;
      };
      r10 = dyn setNames(p, p2);
      return r10;
    };
    p4 = prom<V +>{
      src = ld src;
      src1 = force? src;
      checkMissing(src1);
      return src1;
    };
    r13 = dyn r1[sig, body, convention, name](p3, p4, ".Call", "manyargs");
    check L2() else D2();
  D2():
    deopt 17 [r13];
  L2():
    st manyargs = r13;
    manyargs = ldf manyargs;
    check L3() else D3();
  D3():
    deopt 20 [];
  L3():
    r14 = dyn manyargs(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17);
    check L4() else D4();
  D4():
    deopt 38 [r14];
  L4():
    popenv;
    return r14;
  }
}