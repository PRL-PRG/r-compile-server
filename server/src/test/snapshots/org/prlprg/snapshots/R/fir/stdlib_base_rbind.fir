fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-761979843`;
    st rbind = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-761979843`(`...`, `deparse.level`) {
  (reg ddd:dots, reg deparse_level:*) -+> V { var `...`:dots?, var `deparse.level`:*, reg deparse_level_isMissing:L, reg deparse_level_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _Internal:cls, reg r2:V |
    mkenv;
    st `...` = ddd;
    deparse_level_isMissing = missing.0(deparse_level);
    if deparse_level_isMissing then L0(1.0) else L0(deparse_level);
  L0(deparse_level_orDefault):
    st `deparse.level` = deparse_level_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    _Internal = ldf `.Internal` in base;
    r2 = dyn _Internal(<lang rbind(deparse.level, ...)>);
    goto L1(r2);
  L3():
    r = dyn base(<lang rbind(deparse.level, ...)>);
    goto L1(r);
  }
}