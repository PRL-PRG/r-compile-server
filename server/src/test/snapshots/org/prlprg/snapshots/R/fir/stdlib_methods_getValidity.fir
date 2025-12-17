fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3581667309;
    st getValidity = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3581667309(ClassDef) {
  (reg ClassDef:*) -+> V { var ClassDef:*, reg __:cls, reg r:V |
    mkenv;
    st ClassDef = ClassDef;
    __ = ldf `@` in base;
    r = dyn __(<sym ClassDef>, <sym validity>);
    popenv;
    return r;
  }
}