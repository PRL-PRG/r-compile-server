fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1376602624;
    st `mem.maxNSize` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1376602624(nsize) {
  (reg nsize:*) -+> V { var nsize:*, reg nsize_isMissing:L, reg nsize_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nsize1:*, reg nsize2:V, reg mem_maxNSize:cls, reg r2:V |
    mkenv;
    nsize_isMissing = missing.0(nsize);
    if nsize_isMissing then L0(0.0) else L0(nsize);
  L0(nsize_orDefault):
    st nsize = nsize_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    nsize1 = ld nsize;
    check L4() else D0();
  L3():
    r = dyn base(<lang mem.maxNSize(nsize)>);
    goto L1(r);
  D0():
    deopt 2 [nsize1];
  L4():
    nsize2 = force? nsize1;
    checkMissing(nsize2);
    mem_maxNSize = ldf `mem.maxNSize` in base;
    r2 = dyn mem_maxNSize(nsize2);
    check L5() else D1();
  D1():
    deopt 5 [r2];
  L5():
    goto L1(r2);
  }
}