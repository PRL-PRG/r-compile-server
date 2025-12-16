fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1156962967;
    st `c.warnings` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1156962967(`...`, recursive) {
  (reg ddd:dots, reg recursive:*) -+> V { var `...`:dots?, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg structure:cls, reg NextMethod:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st `...` = ddd;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    structure = ldf structure;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      NextMethod = ldf NextMethod;
      r = dyn NextMethod("c");
      return r;
    };
    r2 = dyn structure[, class](p, "warnings");
    check L2() else D1();
  D1():
    deopt 5 [r2];
  L2():
    popenv;
    return r2;
  }
}