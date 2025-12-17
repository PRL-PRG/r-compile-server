fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2628776968;
    st `mem.maxVSize` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2628776968(vsize) {
  (reg vsize:*) -+> V { var vsize:*, reg vsize_isMissing:L, reg vsize_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vsize1:*, reg vsize2:V, reg mem_maxVSize:cls, reg r2:V |
    mkenv;
    vsize_isMissing = missing.0(vsize);
    if vsize_isMissing then L0(0.0) else L0(vsize);
  L0(vsize_orDefault):
    st vsize = vsize_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    vsize1 = ld vsize;
    check L4() else D0();
  L3():
    r = dyn base(<lang mem.maxVSize(vsize)>);
    goto L1(r);
  D0():
    deopt 2 [vsize1];
  L4():
    vsize2 = force? vsize1;
    checkMissing(vsize2);
    mem_maxVSize = ldf `mem.maxVSize` in base;
    r2 = dyn mem_maxVSize(vsize2);
    check L5() else D1();
  D1():
    deopt 5 [r2];
  L5():
    goto L1(r2);
  }
}