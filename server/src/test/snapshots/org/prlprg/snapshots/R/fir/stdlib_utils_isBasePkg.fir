fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner423301576;
    st isBasePkg = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner423301576(pkg) {
  (reg pkg:*) -+> V { var pkg:*, reg tryCatch:cls, reg packageDescription:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:cls, reg p2:p(V +), reg r5:cls, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg priority:*, reg priority1:V, reg identical:cls, reg r10:V |
    mkenv;
    st pkg = pkg;
    tryCatch = ldf tryCatch;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      packageDescription = ldf packageDescription;
      p = prom<V +>{
        pkg1 = ld pkg;
        pkg2 = force? pkg1;
        checkMissing(pkg2);
        return pkg2;
      };
      r1 = dyn packageDescription[, fields, encoding](p, "Priority", NA_LGL);
      return r1;
    };
    p2 = prom<V +>{
      r3 = clos inner3708401697;
      return r3;
    };
    p3 = prom<V +>{
      r5 = clos inner3708401697;
      return r5;
    };
    r7 = dyn tryCatch[, error, warning](p1, p2, p3);
    check L2() else D1();
  D1():
    deopt 7 [r7];
  L2():
    st priority = r7;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r9):
    popenv;
    return r9;
  L3():
    priority = ld priority;
    check L5() else D2();
  L4():
    r8 = dyn base(<sym priority>, "base");
    goto L0(r8);
  D2():
    deopt 11 [priority];
  L5():
    priority1 = force? priority;
    checkMissing(priority1);
    identical = ldf identical in base;
    r10 = dyn identical(priority1, "base", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L6() else D3();
  D3():
    deopt 22 [r10];
  L6():
    goto L0(r10);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg e1:*, reg e2:V |
    mkenv;
    st e = e;
    e1 = ld e;
    check L0() else D0();
  D0():
    deopt 0 [e1];
  L0():
    e2 = force? e1;
    checkMissing(e2);
    popenv;
    return e2;
  }
}