fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1396522175;
    st replicate = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1396522175(n, expr, simplify) {
  (reg n:*, reg expr:*, reg simplify:*) -+> V { var n:*, var expr:*, var simplify:*, reg simplify_isMissing:L, reg simplify_orDefault:*, reg sapply:cls, reg integer:cls, reg n1:*, reg n2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg eval_parent:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg simplify1:*, reg simplify2:V, reg p4:p(V +), reg r10:V |
    mkenv;
    st n = n;
    st expr = expr;
    simplify_isMissing = missing.0(simplify);
    if simplify_isMissing then L0("array") else L0(simplify);
  L0(simplify_orDefault):
    st simplify = simplify_orDefault;
    sapply = ldf sapply;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      integer = ldf integer;
      p = prom<V +>{
        n1 = ld n;
        n2 = force? n1;
        checkMissing(n2);
        return n2;
      };
      r1 = dyn integer(p);
      return r1;
    };
    p3 = prom<V +>{
      eval_parent = ldf `eval.parent`;
      p2 = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r4):
        return r4;
      L1():
        substitute = ldf substitute in base;
        r5 = dyn substitute(<lang function((...=), expr, NULL)>);
        goto L0(r5);
      L2():
        r3 = dyn base(<lang function((...=), expr, NULL)>);
        goto L0(r3);
      };
      r7 = dyn eval_parent(p2);
      return r7;
    };
    p4 = prom<V +>{
      simplify1 = ld simplify;
      simplify2 = force? simplify1;
      checkMissing(simplify2);
      return simplify2;
    };
    r10 = dyn sapply[, , simplify](p1, p3, p4);
    check L2() else D1();
  D1():
    deopt 6 [r10];
  L2():
    popenv;
    return r10;
  }
}