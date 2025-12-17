fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3577417813;
    st `.shlib_objects_symbol_tables` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3577417813(file) {
  (reg file:*) -+> V { var file:*, reg file_isMissing:L, reg file_orDefault:*, reg commandArgs:cls, reg r:V, reg lapply:cls, reg objects:*, reg objects1:V, reg p:p(V +), reg read_symbols_from_object_file:*, reg read_symbols_from_object_file1:V, reg p1:p(V +), reg r3:V, reg objects2:*, reg objects3:V, reg l:*, reg names__:cls, reg r4:V, reg saveRDS:cls, reg tables:*, reg tables1:V, reg p2:p(V +), reg file1:*, reg file2:V, reg p3:p(V +), reg r7:V |
    mkenv;
    file_isMissing = missing.0(file);
    if file_isMissing then L0("symbols.rds") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    commandArgs = ldf commandArgs;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn commandArgs[trailingOnly](TRUE);
    check L2() else D1();
  D1():
    deopt 4 [r];
  L2():
    st objects = r;
    lapply = ldf lapply;
    check L3() else D2();
  D2():
    deopt 7 [];
  L3():
    p = prom<V +>{
      objects = ld objects;
      objects1 = force? objects;
      checkMissing(objects1);
      return objects1;
    };
    p1 = prom<V +>{
      read_symbols_from_object_file = ld read_symbols_from_object_file;
      read_symbols_from_object_file1 = force? read_symbols_from_object_file;
      checkMissing(read_symbols_from_object_file1);
      return read_symbols_from_object_file1;
    };
    r3 = dyn lapply(p, p1);
    check L4() else D3();
  D3():
    deopt 10 [r3];
  L4():
    st tables = r3;
    objects2 = ld objects;
    check L5() else D4();
  D4():
    deopt 12 [objects2];
  L5():
    objects3 = force? objects2;
    checkMissing(objects3);
    l = ld tables;
    names__ = ldf `names<-`;
    check L6() else D5();
  D5():
    deopt 15 [objects3, l, objects3];
  L6():
    r4 = dyn names__(l, NULL, objects3);
    check L7() else D6();
  D6():
    deopt 17 [objects3, r4];
  L7():
    st tables = r4;
    saveRDS = ldf saveRDS;
    check L8() else D7();
  D7():
    deopt 20 [];
  L8():
    p2 = prom<V +>{
      tables = ld tables;
      tables1 = force? tables;
      checkMissing(tables1);
      return tables1;
    };
    p3 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r7 = dyn saveRDS[, file, version](p2, p3, 2.0);
    check L9() else D8();
  D8():
    deopt 26 [r7];
  L9():
    popenv;
    return r7;
  }
}