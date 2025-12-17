fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3583251586;
    st `[[.dendrogram` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3583251586(x, `...`, drop) {
  (reg x:*, reg ddd:dots, reg drop:*) -+> V { var x:*, var `...`:dots?, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg NextMethod:cls, reg r2:V, reg c:V, reg r3:V, reg c1:L, reg structure:cls, reg r4:*, reg r5:V, reg p:p(V +), reg r7:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(TRUE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L1(r1):
    r3 = `!`(r1);
    c1 = `as.logical`(r3);
    if c1 then L7() else L2();
  L3():
    NextMethod = ldf NextMethod;
    check L5() else D0();
  L4():
    r = dyn base(<lang `<-`(r, NextMethod("[["))>);
    goto L1(r);
  D0():
    deopt 2 [];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L5():
    r2 = dyn NextMethod("[[");
    check L6() else D1();
  L7():
    structure = ldf structure;
    check L8() else D2();
  D1():
    deopt 4 [r2];
  D2():
    deopt 9 [];
  L6():
    st r = r2;
    c = `==`(r2, NULL);
    goto L1(c);
  L8():
    p = prom<V +>{
      r4 = ld r;
      r5 = force? r4;
      checkMissing(r5);
      return r5;
    };
    r7 = dyn structure[, class](p, "dendrogram");
    check L9() else D3();
  D3():
    deopt 13 [r7];
  L9():
    popenv;
    return r7;
  }
}