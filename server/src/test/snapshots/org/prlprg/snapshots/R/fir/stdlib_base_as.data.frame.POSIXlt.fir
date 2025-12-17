fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3069603236;
    st `as.data.frame.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3069603236(x, `row.names`, optional, `...`) {
  (reg x:*, reg row_names:*, reg optional:*, reg ddd:dots) -+> V { var x:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `...`:dots?, reg as_data_frame_vector:cls, reg as_POSIXct:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg row_names1:*, reg row_names2:V, reg p2:p(V +), reg optional1:*, reg optional2:V, reg p3:p(V +), reg ddd1:dots?, reg r5:V, reg optional3:*, reg optional4:V, reg r6:V, reg c:L, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg substitute:cls, reg r9:V, reg p4:p(V +), reg r11:V, reg l:*, reg names__:cls, reg r12:V, reg value:*, reg value1:V |
    mkenv;
    st x = x;
    row_names_isMissing = missing.0(row_names);
    if row_names_isMissing then L0(NULL) else L0(row_names);
  L0(row_names_orDefault):
    st `row.names` = row_names_orDefault;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L1(FALSE) else L1(optional);
  L1(optional_orDefault):
    st optional = optional_orDefault;
    st `...` = ddd;
    as_data_frame_vector = ldf `as.data.frame.vector`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p1 = prom<V +>{
      as_POSIXct = ldf `as.POSIXct`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn as_POSIXct(p);
      return r1;
    };
    p2 = prom<V +>{
      row_names1 = ld `row.names`;
      row_names2 = force? row_names1;
      checkMissing(row_names2);
      return row_names2;
    };
    p3 = prom<V +>{
      optional1 = ld optional;
      optional2 = force? optional1;
      checkMissing(optional2);
      return optional2;
    };
    ddd1 = ld `...`;
    r5 = dyn as_data_frame_vector[, , , `...`](p1, p2, p3, ddd1);
    check L5() else D1();
  D1():
    deopt 6 [r5];
  L5():
    st value = r5;
    optional3 = ld optional;
    check L6() else D2();
  D2():
    deopt 8 [optional3];
  L6():
    optional4 = force? optional3;
    checkMissing(optional4);
    r6 = `!`(optional4);
    c = `as.logical`(r6);
    if c then L7() else L2();
  L2():
    goto L3();
  L3():
    value = ld value;
    check L13() else D7();
  L7():
    deparse1 = ldf deparse1;
    check L8() else D3();
  D3():
    deopt 12 [];
  D7():
    deopt 22 [value];
  L8():
    p4 = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      substitute = ldf substitute in base;
      r9 = dyn substitute(<sym x>);
      goto L0(r9);
    L2():
      r7 = dyn base(<sym x>);
      goto L0(r7);
    };
    r11 = dyn deparse1(p4);
    check L9() else D4();
  L13():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D4():
    deopt 14 [r11];
  L9():
    l = ld value;
    names__ = ldf `names<-`;
    check L10() else D5();
  D5():
    deopt 16 [r11, l, r11];
  L10():
    r12 = dyn names__(l, NULL, r11);
    check L11() else D6();
  D6():
    deopt 18 [r11, r12];
  L11():
    st value = r12;
    goto L3();
  }
}