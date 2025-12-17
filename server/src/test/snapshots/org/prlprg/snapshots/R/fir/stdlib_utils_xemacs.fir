fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1465486452;
    st xemacs = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1465486452(name, file) {
  (reg name:*, reg file:*) -+> V { var name:*, reg name_isMissing:L, reg name_orDefault:*, var file:*, reg file_isMissing:L, reg file_orDefault:*, reg edit_default:cls, reg name1:*, reg name2:V, reg p:p(V +), reg file1:*, reg file2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    name_isMissing = missing.0(name);
    if name_isMissing then L0(NULL) else L0(name);
  L0(name_orDefault):
    st name = name_orDefault;
    file_isMissing = missing.0(file);
    if file_isMissing then L1("") else L1(file);
  L1(file_orDefault):
    st file = file_orDefault;
    edit_default = ldf `edit.default`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r2 = dyn edit_default[, , editor](p, p1, "xemacs");
    check L3() else D1();
  D1():
    deopt 6 [r2];
  L3():
    popenv;
    return r2;
  }
}