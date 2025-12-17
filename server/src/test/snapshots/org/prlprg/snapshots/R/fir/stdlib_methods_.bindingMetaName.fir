fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2295045217;
    st `.bindingMetaName` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2295045217(fieldName) {
  (reg fieldName:*) -+> V { var fieldName:*, reg paste0:cls, reg fieldName1:*, reg fieldName2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st fieldName = fieldName;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      fieldName1 = ld fieldName;
      fieldName2 = force? fieldName1;
      checkMissing(fieldName2);
      return fieldName2;
    };
    r1 = dyn paste0(".->", p);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}