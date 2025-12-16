fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner560854305;
    st `.standard_regexps` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner560854305() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    list = ldf list in base;
    r2 = dyn list("[[:alpha:]][[:alnum:].]*[[:alnum:]]", "([[:digit:]]+[.-]){1,}[[:digit:]]+", "[[:digit:]]+\\.[[:digit:]]+\\.[[:digit:]]+", "([[:digit:]]+[.-])*[[:digit:]]+");
    check L3() else D0();
  L2():
    r = dyn base[valid_package_name, valid_package_version, valid_R_system_version, valid_numeric_version]("[[:alpha:]][[:alnum:].]*[[:alnum:]]", "([[:digit:]]+[.-]){1,}[[:digit:]]+", "[[:digit:]]+\\.[[:digit:]]+\\.[[:digit:]]+", "([[:digit:]]+[.-])*[[:digit:]]+");
    goto L0(r);
  D0():
    deopt 11 [r2];
  L3():
    goto L0(r2);
  }
}