fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-761979843`;
    st `.__H__.rbind` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-761979843`(`...`, `deparse.level`) {
  (reg ddd:dots, reg deparse_level:*) -+> V { var `...`:dots?, var `deparse.level`:*, reg deparse_level_isMissing:L, reg deparse_level_orDefault:*, reg _Defunct:cls, reg r:V |
    mkenv;
    st `...` = ddd;
    deparse_level_isMissing = missing.0(deparse_level);
    if deparse_level_isMissing then L0(1.0) else L0(deparse_level);
  L0(deparse_level_orDefault):
    st `deparse.level` = deparse_level_orDefault;
    _Defunct = ldf `.Defunct`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn _Defunct("base::rbind");
    check L2() else D1();
  D1():
    deopt 3 [r];
  L2():
    popenv;
    return r;
  }
}